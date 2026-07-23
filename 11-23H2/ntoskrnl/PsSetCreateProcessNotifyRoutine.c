/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140843220
 * Callers:
 *     DifPsSetCreateProcessNotifyRoutineWrapper @ 0x1405EAE20 (DifPsSetCreateProcessNotifyRoutineWrapper.c)
 *     VfInitSystemNoRebootNeeded @ 0x140AC2D08 (VfInitSystemNoRebootNeeded.c)
 *     VfFaultsInitPhase1 @ 0x140AD5EC0 (VfFaultsInitPhase1.c)
 *     VfFaultsSetParameters @ 0x140AD6168 (VfFaultsSetParameters.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140843408 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
