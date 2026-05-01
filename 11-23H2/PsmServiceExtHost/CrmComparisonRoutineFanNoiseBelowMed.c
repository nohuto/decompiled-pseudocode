/*
 * XREFs of CrmComparisonRoutineFanNoiseBelowMed @ 0x180014300
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineFanNoiseUnderLimit @ 0x18004B9C4 (CrmStateRoutineFanNoiseUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineFanNoiseBelowMed(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineFanNoiseUnderLimit(a2, 2LL);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
