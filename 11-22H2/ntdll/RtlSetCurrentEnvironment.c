/*
 * XREFs of RtlSetCurrentEnvironment @ 0x18008DF50
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlSizeHeap @ 0x18003ABB0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpClearEnvironmentHashTable @ 0x18006C27C (RtlpClearEnvironmentHashTable.c)
 */

NTSTATUS __cdecl RtlSetCurrentEnvironment(PVOID Environment, PVOID *PreviousEnvironment)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  SIZE_T v5; // rbx
  void *v6; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  RtlpClearEnvironmentHashTable();
  ++ProcessParameters->EnvironmentVersion;
  v6 = ProcessParameters->Environment;
  ProcessParameters->Environment = Environment;
  ProcessParameters->EnvironmentSize = v5;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( PreviousEnvironment )
  {
    *PreviousEnvironment = v6;
  }
  else if ( v6 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  return 0;
}
