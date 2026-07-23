/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx @ 0x140832420
 * Callers:
 *     <none>
 * Callees:
 *     sub_140832928 @ 0x140832928 (sub_140832928.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutineEx(PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine, BOOLEAN Remove)
{
  return sub_140832928(NotifyRoutine, (unsigned int)(Remove != 0) + 2);
}
