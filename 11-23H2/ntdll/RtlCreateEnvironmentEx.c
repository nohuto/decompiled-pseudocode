/*
 * XREFs of RtlCreateEnvironmentEx @ 0x180058420
 * Callers:
 *     RtlCreateEnvironment @ 0x180058400 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x18005860C (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpAllocateEnvBlock @ 0x1800142D4 (RtlpAllocateEnvBlock.c)
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpGetBlockSizeEx @ 0x1800586B0 (RtlpGetBlockSizeEx.c)
 *     RtlOemToUnicodeN @ 0x180058FC0 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeN @ 0x180059010 (RtlMultiByteToUnicodeN.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlCreateEnvironmentEx(void *a1, _QWORD *a2, int a3)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  void *Environment; // rbp
  int v6; // r14d
  int v7; // esi
  int v8; // r12d
  int v9; // r8d
  unsigned int v10; // esi
  unsigned __int64 BlockSize; // rbx
  void *EnvBlock; // rdi
  bool v13; // cc
  _DWORD *v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  Environment = a1;
  if ( (a3 & 0xFFFFFFF8) != 0 )
    return 3221225713LL;
  if ( (((a3 & 5) - 1) & a3 & 5) != 0 )
    return 3221225713LL;
  v6 = 1;
  v7 = a3 & 1;
  v8 = a3 & 2;
  if ( (a3 & 2) != 0 && (a3 & 1) == 0 )
    return 3221225713LL;
  v9 = a3 & 4;
  if ( a1 )
  {
    if ( !v9 )
    {
      v10 = v7 ^ 1;
      v6 = 0;
      BlockSize = RtlpGetBlockSizeEx(a1, v10);
      goto LABEL_8;
    }
    return 3221225520LL;
  }
  if ( v7 )
    return 3221225520LL;
  if ( v9 )
    goto LABEL_17;
  v10 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( !Environment )
    goto LABEL_17;
  while ( 1 )
  {
LABEL_8:
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return (unsigned int)-1073741670;
    if ( !v6 )
      goto LABEL_12;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
      break;
    v13 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v13 )
    {
LABEL_12:
      if ( v10 )
      {
        memmove(EnvBlock, Environment, BlockSize);
        if ( v6 )
          RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
LABEL_15:
        *a2 = EnvBlock;
        return 0LL;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v17 = -2147483643;
      }
      else
      {
        v18 = BlockSize >> 1;
        if ( v8 )
          v16 = RtlOemToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v18);
        else
          v16 = RtlMultiByteToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v18);
        v17 = v16;
        if ( v16 >= 0 )
          goto LABEL_15;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)EnvBlock);
      return v17;
    }
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)EnvBlock);
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)EnvBlock);
LABEL_17:
  v15 = (_DWORD *)RtlpAllocateEnvBlock(4uLL);
  if ( !v15 )
    return 3221225626LL;
  *v15 = 0;
  *a2 = v15;
  return 0LL;
}
