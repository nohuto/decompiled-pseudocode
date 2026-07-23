/*
 * XREFs of RtlSetEnvironmentStrings @ 0x1800D9390
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateEnvBlock @ 0x1800144E4 (RtlpAllocateEnvBlock.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlSizeHeap @ 0x18003ABB0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpClearEnvironmentHashTable @ 0x18006C27C (RtlpClearEnvironmentHashTable.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentStrings(PCWCHAR NewEnvironment, SIZE_T NewEnvironmentSize)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  PVOID EnvBlock; // rax
  PVOID v8; // rsi
  PVOID BaseAddress; // [rsp+40h] [rbp+18h]
  PVOID BaseAddressa; // [rsp+40h] [rbp+18h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  BaseAddress = (PVOID)RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  if ( (unsigned __int64)BaseAddress >= NewEnvironmentSize )
  {
    memmove(Environment, NewEnvironment, NewEnvironmentSize);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    RtlpClearEnvironmentHashTable();
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( (unsigned __int64)BaseAddress >= NewEnvironmentSize )
    return 0;
  EnvBlock = RtlpAllocateEnvBlock(NewEnvironmentSize);
  v8 = EnvBlock;
  if ( EnvBlock )
  {
    memmove(EnvBlock, NewEnvironment, NewEnvironmentSize);
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    BaseAddressa = ProcessParameters->Environment;
    RtlpClearEnvironmentHashTable();
    ProcessParameters->Environment = v8;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddressa);
    return 0;
  }
  return -1073741670;
}
