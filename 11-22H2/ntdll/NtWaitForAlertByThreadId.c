/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1800A29E0
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     TppCancelTimer @ 0x180032C88 (TppCancelTimer.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180034024 (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnCriticalSection @ 0x1800340F0 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x1800500C4 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlDeleteTimerQueueEx @ 0x180051E20 (RtlDeleteTimerQueueEx.c)
 *     RtlpRunOnceWaitForInit @ 0x18005C3AC (RtlpRunOnceWaitForInit.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     RtlSleepConditionVariableCS @ 0x1800692C0 (RtlSleepConditionVariableCS.c)
 *     RtlSleepConditionVariableSRW @ 0x180069740 (RtlSleepConditionVariableSRW.c)
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
