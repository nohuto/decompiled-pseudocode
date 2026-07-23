/*
 * XREFs of ZwAlertThreadByThreadId @ 0x1800A4E60
 * Callers:
 *     RtlWakeAllConditionVariable @ 0x1800045A0 (RtlWakeAllConditionVariable.c)
 *     RtlRunOnceComplete @ 0x1800154F0 (RtlRunOnceComplete.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18001D180 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpWaitOnCriticalSection @ 0x18001D420 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeResource @ 0x18001D900 (RtlInitializeResource.c)
 *     RtlDeleteCriticalSection @ 0x18001E130 (RtlDeleteCriticalSection.c)
 *     RtlpWakeSRWLock @ 0x18001E4A4 (RtlpWakeSRWLock.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x18005B2CC (RtlpWaitOnAddressWakeEntireList.c)
 *     TppIteWakeWaiters @ 0x18006BC6C (TppIteWakeWaiters.c)
 *     RtlpTpTimerQueueRundown @ 0x180070D10 (RtlpTpTimerQueueRundown.c)
 *     RtlpWakeConditionVariable @ 0x18007BBF4 (RtlpWakeConditionVariable.c)
 *     RtlpInitializeStaticCriticalSection @ 0x18008AFA0 (RtlpInitializeStaticCriticalSection.c)
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
