/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x1408430C0
 * Callers:
 *     DifPsSetCreateThreadNotifyRoutineWrapper @ 0x1405EAF40 (DifPsSetCreateThreadNotifyRoutineWrapper.c)
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x140843364 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
