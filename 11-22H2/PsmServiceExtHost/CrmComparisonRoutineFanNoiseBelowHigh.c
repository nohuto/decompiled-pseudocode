/*
 * XREFs of CrmComparisonRoutineFanNoiseBelowHigh @ 0x180014360
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineFanNoiseUnderLimit @ 0x18004BA54 (CrmStateRoutineFanNoiseUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineFanNoiseBelowHigh(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineFanNoiseUnderLimit(a2, 3LL);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
