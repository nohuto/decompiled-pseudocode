/*
 * XREFs of CrmStateRoutinePowerSavingOff @ 0x18004B9B4
 * Callers:
 *     CrmComparisonRoutinePowerSavingOff @ 0x180013520 (CrmComparisonRoutinePowerSavingOff.c)
 *     CrmComparisonRoutineDisplayOn @ 0x180042ED0 (CrmComparisonRoutineDisplayOn.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmStateRoutinePowerSavingOff(_DWORD *a1)
{
  return *a1 == 0;
}
