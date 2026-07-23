/*
 * XREFs of RtlCreateEnvironmentEx @ 0x180058580
 * Callers:
 *     RtlCreateEnvironment @ 0x180058560 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x18005876C (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlpAllocateEnvBlock @ 0x1800144E4 (RtlpAllocateEnvBlock.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpGetBlockSizeEx @ 0x180058810 (RtlpGetBlockSizeEx.c)
 *     RtlOemToUnicodeN @ 0x180059110 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeN @ 0x180059150 (RtlMultiByteToUnicodeN.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  PVOID v5; // rbp
  int v6; // r14d
  ULONG v7; // esi
  ULONG v8; // r12d
  ULONG v9; // r8d
  unsigned int v10; // esi
  unsigned __int64 BlockSize; // rbx
  PVOID EnvBlock; // rdi
  bool v13; // cc
  _DWORD *v15; // rax
  NTSTATUS v16; // eax
  NTSTATUS v17; // ebx
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v5 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 )
    return -1073741583;
  if ( (((Flags & 5) - 1) & Flags & 5) != 0 )
    return -1073741583;
  v6 = 1;
  v7 = Flags & 1;
  v8 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741583;
  v9 = Flags & 4;
  if ( SourceEnvironment )
  {
    if ( !v9 )
    {
      v10 = v7 ^ 1;
      v6 = 0;
      BlockSize = RtlpGetBlockSizeEx(SourceEnvironment, v10);
      goto LABEL_8;
    }
    return -1073741776;
  }
  if ( v7 )
    return -1073741776;
  if ( v9 )
    goto LABEL_17;
  v10 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v5 = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !v5 )
    goto LABEL_17;
  while ( 1 )
  {
LABEL_8:
    EnvBlock = RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return -1073741670;
    if ( !v6 )
      goto LABEL_12;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v5 = ProcessParameters->Environment;
    if ( !v5 )
      break;
    v13 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v13 )
    {
LABEL_12:
      if ( v10 )
      {
        memmove(EnvBlock, v5, BlockSize);
        if ( v6 )
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_15:
        *Environment = EnvBlock;
        return 0;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v17 = -2147483643;
      }
      else
      {
        BytesInMultiByteString = BlockSize >> 1;
        if ( v8 )
          v16 = RtlOemToUnicodeN((PWSTR)EnvBlock, BlockSize, 0LL, (PCCH)v5, BytesInMultiByteString);
        else
          v16 = RtlMultiByteToUnicodeN((PWCH)EnvBlock, BlockSize, 0LL, (PCSTR)v5, BytesInMultiByteString);
        v17 = v16;
        if ( v16 >= 0 )
          goto LABEL_15;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
      return v17;
    }
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
LABEL_17:
  v15 = RtlpAllocateEnvBlock(4uLL);
  if ( !v15 )
    return -1073741670;
  *v15 = 0;
  *Environment = v15;
  return 0;
}
