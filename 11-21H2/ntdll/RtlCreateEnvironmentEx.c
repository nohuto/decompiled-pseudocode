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

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  PVOID v5; // rbp
  int v6; // r14d
  ULONG v7; // r12d
  BOOL v8; // esi
  unsigned __int64 BlockSize; // rbx
  _DWORD *v10; // rax
  void *EnvBlock; // rdi
  bool v13; // cc
  NTSTATUS v14; // eax
  NTSTATUS v15; // ebx
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v5 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 )
    return -1073741583;
  if ( (((Flags & 5) - 1) & Flags & 5) != 0 )
    return -1073741583;
  v6 = 1;
  v7 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741583;
  if ( SourceEnvironment )
  {
    if ( (Flags & 4) == 0 )
    {
      v8 = !(Flags & 1);
      v6 = 0;
      BlockSize = RtlpGetBlockSizeEx(SourceEnvironment, !(Flags & 1));
      goto LABEL_12;
    }
    return -1073741776;
  }
  if ( (Flags & 1) != 0 )
    return -1073741776;
  if ( (Flags & 4) != 0 )
    goto LABEL_8;
  v8 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v5 = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !v5 )
    goto LABEL_8;
  while ( 1 )
  {
LABEL_12:
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return -1073741670;
    if ( !v6 )
      goto LABEL_14;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v5 = ProcessParameters->Environment;
    if ( !v5 )
      break;
    v13 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v13 )
    {
LABEL_14:
      if ( v8 )
      {
        memmove(EnvBlock, v5, BlockSize);
        if ( v6 )
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_17:
        *Environment = EnvBlock;
        return 0;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v15 = -2147483643;
      }
      else
      {
        BytesInMultiByteString = BlockSize >> 1;
        if ( v7 )
          v14 = RtlOemToUnicodeN((PWSTR)EnvBlock, BlockSize, 0LL, (PCCH)v5, BytesInMultiByteString);
        else
          v14 = RtlMultiByteToUnicodeN((PWCH)EnvBlock, BlockSize, 0LL, (PCSTR)v5, BytesInMultiByteString);
        v15 = v14;
        if ( v14 >= 0 )
          goto LABEL_17;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
      return v15;
    }
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
LABEL_8:
  v10 = (_DWORD *)RtlpAllocateEnvBlock(4LL);
  if ( !v10 )
    return -1073741670;
  *v10 = 0;
  *Environment = v10;
  return 0;
}
