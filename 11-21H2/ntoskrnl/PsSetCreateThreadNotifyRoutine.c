/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x1408325E0
 * Callers:
 *     DifPsSetCreateThreadNotifyRoutineWrapper @ 0x14061A880 (DifPsSetCreateThreadNotifyRoutineWrapper.c)
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x140832884 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
