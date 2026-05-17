/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18000CED0
 * Callers:
 *     RtlCreateEnvironment @ 0x18000CCC0 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x18000CCDC (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpAllocateEnvBlock @ 0x18000DA4C (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18000DB10 (RtlpGetBlockSizeEx.c)
 *     RtlOemToUnicodeN @ 0x18000DCD0 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeN @ 0x18000DD40 (RtlMultiByteToUnicodeN.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlCreateEnvironmentEx(void *a1, _QWORD *a2, int a3)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  void *Environment; // rbp
  int v6; // r14d
  int v7; // r12d
  BOOL v8; // esi
  size_t BlockSize; // rbx
  _DWORD *v10; // rax
  void *EnvBlock; // rdi
  bool v13; // cc
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  Environment = a1;
  if ( (a3 & 0xFFFFFFF8) != 0 )
    return 3221225713LL;
  if ( (((a3 & 5) - 1) & a3 & 5) != 0 )
    return 3221225713LL;
  v6 = 1;
  v7 = a3 & 2;
  if ( (a3 & 2) != 0 && (a3 & 1) == 0 )
    return 3221225713LL;
  if ( a1 )
  {
    if ( (a3 & 4) == 0 )
    {
      v8 = !(a3 & 1);
      v6 = 0;
      BlockSize = RtlpGetBlockSizeEx(a1, !(a3 & 1));
      goto LABEL_12;
    }
    return 3221225520LL;
  }
  if ( (a3 & 1) != 0 )
    return 3221225520LL;
  if ( (a3 & 4) != 0 )
    goto LABEL_8;
  v8 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !Environment )
    goto LABEL_8;
  while ( 1 )
  {
LABEL_12:
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return (unsigned int)-1073741670;
    if ( !v6 )
      goto LABEL_14;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
      break;
    v13 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v13 )
    {
LABEL_14:
      if ( v8 )
      {
        memmove(EnvBlock, Environment, BlockSize);
        if ( v6 )
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_17:
        *a2 = EnvBlock;
        return 0LL;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v15 = -2147483643;
      }
      else
      {
        v16 = BlockSize >> 1;
        if ( v7 )
          v14 = RtlOemToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v16);
        else
          v14 = RtlMultiByteToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v16);
        v15 = v14;
        if ( v14 >= 0 )
          goto LABEL_17;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, EnvBlock);
      return v15;
    }
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, EnvBlock);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, EnvBlock);
LABEL_8:
  v10 = (_DWORD *)RtlpAllocateEnvBlock(4LL);
  if ( !v10 )
    return 3221225626LL;
  *v10 = 0;
  *a2 = v10;
  return 0LL;
}
