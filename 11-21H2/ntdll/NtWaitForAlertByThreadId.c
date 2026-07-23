/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1800A7BE0
 * Callers:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18001C7D8 (TppCancelTimer.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x18001D81C (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18001FBD4 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlpRunOnceWaitForInit @ 0x18005B4E4 (RtlpRunOnceWaitForInit.c)
 *     RtlSleepConditionVariableCS @ 0x18006AAC0 (RtlSleepConditionVariableCS.c)
 *     RtlSleepConditionVariableSRW @ 0x18006AF50 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 *     RtlDeleteTimerQueueEx @ 0x18006F8B0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 476;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
