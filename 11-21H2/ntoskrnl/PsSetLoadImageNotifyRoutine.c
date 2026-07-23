/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x140832600
 * Callers:
 *     sub_14061A990 @ 0x14061A990 (sub_14061A990.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140832640 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
