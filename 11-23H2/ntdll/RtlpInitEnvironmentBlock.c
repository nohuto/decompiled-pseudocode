/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x18005860C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpAllocateEnvBlock @ 0x1800142D4 (RtlpAllocateEnvBlock.c)
 *     RtlCreateEnvironmentEx @ 0x180058420 (RtlCreateEnvironmentEx.c)
 *     RtlpGetBlockSizeEx @ 0x1800586B0 (RtlpGetBlockSizeEx.c)
 *     RtlpSetupEnvironmentHashTable @ 0x18005870C (RtlpSetupEnvironmentHashTable.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x180058CEC (RtlpWow64ThunkEnvironmentTo64.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rbp
  unsigned __int64 BlockSize; // rdi
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
  result = RtlCreateEnvironmentEx(0LL, &v6, 4);
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
