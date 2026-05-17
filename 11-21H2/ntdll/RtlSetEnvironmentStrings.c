/*
 * XREFs of RtlSetEnvironmentStrings @ 0x18008A170
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateEnvBlock @ 0x18000DA4C (RtlpAllocateEnvBlock.c)
 *     RtlpClearEnvironmentHashTable @ 0x180025C30 (RtlpClearEnvironmentHashTable.c)
 *     RtlSizeHeap @ 0x1800270A0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlSetEnvironmentStrings(void *Src, size_t Size)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  void *EnvBlock; // rax
  void *v8; // rsi
  void *v9; // [rsp+40h] [rbp+18h]
  void *v10; // [rsp+40h] [rbp+18h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  v9 = (void *)RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Environment);
  if ( (unsigned __int64)v9 >= Size )
  {
    memmove(Environment, Src, Size);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    RtlpClearEnvironmentHashTable();
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( (unsigned __int64)v9 >= Size )
    return 0LL;
  EnvBlock = (void *)RtlpAllocateEnvBlock(Size);
  v8 = EnvBlock;
  if ( EnvBlock )
  {
    memmove(EnvBlock, Src, Size);
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    v10 = ProcessParameters->Environment;
    RtlpClearEnvironmentHashTable();
    ProcessParameters->Environment = v8;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v10);
    return 0LL;
  }
  return 3221225626LL;
}
