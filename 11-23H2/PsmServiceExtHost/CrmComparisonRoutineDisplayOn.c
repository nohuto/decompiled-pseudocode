/*
 * XREFs of CrmComparisonRoutineDisplayOn @ 0x180042ED0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutinePowerSavingOff @ 0x18004B9B4 (CrmStateRoutinePowerSavingOff.c)
 */

__int64 __fastcall CrmComparisonRoutineDisplayOn(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = CrmStateRoutinePowerSavingOff(a2);
  return CrmStateRoutineLogicalToComparisonState(v2 == 0);
}
