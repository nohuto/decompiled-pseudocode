/*
 * XREFs of VfFaultsInitPhase1 @ 0x140AD5EC0
 * Callers:
 *     ViInitSystemPhase1 @ 0x140B532E4 (ViInitSystemPhase1.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x140843220 (PsSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS VfFaultsInitPhase1()
{
  NTSTATUS result; // eax

  result = PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)ViCreateProcessCallback, 0);
  ViFaultsProcessNotifyRoutineSet = 1;
  return result;
}
