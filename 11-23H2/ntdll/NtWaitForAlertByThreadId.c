/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1800A4AA0
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     TppCancelTimer @ 0x180032B28 (TppCancelTimer.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180033EC4 (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnCriticalSection @ 0x180033F90 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18004FF64 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlDeleteTimerQueueEx @ 0x180051CC0 (RtlDeleteTimerQueueEx.c)
 *     RtlpRunOnceWaitForInit @ 0x180061B7C (RtlpRunOnceWaitForInit.c)
 *     TppBarrierAdjust @ 0x180068010 (TppBarrierAdjust.c)
 *     RtlSleepConditionVariableCS @ 0x1800692A0 (RtlSleepConditionVariableCS.c)
 *     RtlSleepConditionVariableSRW @ 0x180069720 (RtlSleepConditionVariableSRW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 480;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
