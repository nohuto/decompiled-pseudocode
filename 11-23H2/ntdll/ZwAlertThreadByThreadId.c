/*
 * XREFs of ZwAlertThreadByThreadId @ 0x1800A1CA0
 * Callers:
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlpWakeSRWLock @ 0x180031730 (RtlpWakeSRWLock.c)
 *     RtlpWaitOnCriticalSection @ 0x180033F90 (RtlpWaitOnCriticalSection.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x1800504F4 (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpTpTimerQueueRundown @ 0x180051E40 (RtlpTpTimerQueueRundown.c)
 *     RtlDeleteCriticalSection @ 0x18005ACD0 (RtlDeleteCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x18005B6E0 (RtlWakeAllConditionVariable.c)
 *     RtlInitializeResource @ 0x18005C9D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005CB50 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlRunOnceComplete @ 0x180061210 (RtlRunOnceComplete.c)
 *     TppIteWakeWaiters @ 0x180068190 (TppIteWakeWaiters.c)
 *     RtlpWakeConditionVariable @ 0x180069BDC (RtlpWakeConditionVariable.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180086D70 (RtlpInitializeStaticCriticalSection.c)
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
