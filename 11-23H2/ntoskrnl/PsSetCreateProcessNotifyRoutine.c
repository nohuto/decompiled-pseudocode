/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140842F20
 * Callers:
 *     DifPsSetCreateProcessNotifyRoutineWrapper @ 0x1405EA8B0 (DifPsSetCreateProcessNotifyRoutineWrapper.c)
 *     VfInitSystemNoRebootNeeded @ 0x140AC2D18 (VfInitSystemNoRebootNeeded.c)
 *     VfFaultsInitPhase1 @ 0x140AD5ED0 (VfFaultsInitPhase1.c)
 *     VfFaultsSetParameters @ 0x140AD6178 (VfFaultsSetParameters.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140843108 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
