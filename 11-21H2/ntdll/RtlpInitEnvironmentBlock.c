/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x18000CCDC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x18000CD80 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlCreateEnvironmentEx @ 0x18000CED0 (RtlCreateEnvironmentEx.c)
 *     RtlpAllocateEnvBlock @ 0x18000DA4C (RtlpAllocateEnvBlock.c)
 *     RtlpSetupEnvironmentHashTable @ 0x18000DA78 (RtlpSetupEnvironmentHashTable.c)
 *     RtlpGetBlockSizeEx @ 0x18000DB10 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rbp
  size_t BlockSize; // rdi
  void *EnvBlock; // rax
  void *v4; // rsi
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  Environment = ProcessParameters->Environment;
  if ( Environment )
  {
    BlockSize = RtlpGetBlockSizeEx(ProcessParameters->Environment, 1LL);
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return 3221225626LL;
    memmove(EnvBlock, Environment, BlockSize);
    goto LABEL_4;
  }
  BlockSize = 4LL;
  result = RtlCreateEnvironmentEx(0LL, &v6, 4LL);
  if ( (int)result >= 0 )
  {
    v4 = v6;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = BlockSize;
    RtlpSetupEnvironmentHashTable();
    RtlpWow64ThunkEnvironmentTo64();
    return 0LL;
  }
  return result;
}
