/*
 * XREFs of ZwAlertThreadByThreadId @ 0x18009FBE0
 * Callers:
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlpWakeSRWLock @ 0x180031890 (RtlpWakeSRWLock.c)
 *     RtlpWaitOnCriticalSection @ 0x1800340F0 (RtlpWaitOnCriticalSection.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x180050654 (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpTpTimerQueueRundown @ 0x180051FA0 (RtlpTpTimerQueueRundown.c)
 *     RtlRunOnceComplete @ 0x18005BA40 (RtlRunOnceComplete.c)
 *     RtlDeleteCriticalSection @ 0x18005DCD0 (RtlDeleteCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x18005E6E0 (RtlWakeAllConditionVariable.c)
 *     RtlInitializeResource @ 0x18005F860 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005F9E0 (RtlpAddDebugInfoToCriticalSection.c)
 *     TppIteWakeWaiters @ 0x1800681B0 (TppIteWakeWaiters.c)
 *     RtlpWakeConditionVariable @ 0x180069BFC (RtlpWakeConditionVariable.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180086570 (RtlpInitializeStaticCriticalSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  NTSTATUS result; // eax

  result = 112;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
