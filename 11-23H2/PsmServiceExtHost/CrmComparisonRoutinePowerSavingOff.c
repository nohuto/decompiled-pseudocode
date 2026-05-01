/*
 * XREFs of CrmComparisonRoutinePowerSavingOff @ 0x180013520
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutinePowerSavingOff @ 0x18004B9B4 (CrmStateRoutinePowerSavingOff.c)
 */

__int64 __fastcall CrmComparisonRoutinePowerSavingOff(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutinePowerSavingOff(a2);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
