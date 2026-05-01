/*
 * XREFs of CrmComparisonRoutineFanNoiseBelowHigh @ 0x180042D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineFanNoiseBelowHigh(__int64 a1, __int64 a2)
{
  return CrmComparisonRoutineFanNoiseUnderLimit(a1, a2, 3LL);
}
