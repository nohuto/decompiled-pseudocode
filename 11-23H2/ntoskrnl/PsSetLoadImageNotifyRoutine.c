/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x1408430A0
 * Callers:
 *     DifPsSetLoadImageNotifyRoutineWrapper @ 0x1405EB050 (DifPsSetLoadImageNotifyRoutineWrapper.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x1408430E0 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
