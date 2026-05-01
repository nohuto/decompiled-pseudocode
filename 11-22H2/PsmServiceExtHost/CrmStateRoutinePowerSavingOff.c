/*
 * XREFs of CrmStateRoutinePowerSavingOff @ 0x18004BA44
 * Callers:
 *     CrmComparisonRoutinePowerSavingOff @ 0x180013520 (CrmComparisonRoutinePowerSavingOff.c)
 *     CrmComparisonRoutineDisplayOn @ 0x180042F50 (CrmComparisonRoutineDisplayOn.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmStateRoutinePowerSavingOff(_DWORD *a1)
{
  return *a1 == 0;
}
