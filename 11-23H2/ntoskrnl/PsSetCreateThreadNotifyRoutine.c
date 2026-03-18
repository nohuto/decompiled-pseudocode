/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x140842DC0
 * Callers:
 *     DifPsSetCreateThreadNotifyRoutineWrapper @ 0x1405EA9D0 (DifPsSetCreateThreadNotifyRoutineWrapper.c)
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x140843064 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
