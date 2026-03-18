/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x140842DA0
 * Callers:
 *     DifPsSetLoadImageNotifyRoutineWrapper @ 0x1405EAAE0 (DifPsSetLoadImageNotifyRoutineWrapper.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140842DE0 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
