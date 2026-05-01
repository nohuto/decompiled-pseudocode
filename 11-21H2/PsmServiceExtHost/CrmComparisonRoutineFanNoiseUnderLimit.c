/*
 * XREFs of CrmComparisonRoutineFanNoiseUnderLimit @ 0x180042DB4
 * Callers:
 *     CrmComparisonRoutineFanNoiseBelowMed @ 0x180042D60 (CrmComparisonRoutineFanNoiseBelowMed.c)
 *     CrmComparisonRoutineFanNoiseBelowHigh @ 0x180042D80 (CrmComparisonRoutineFanNoiseBelowHigh.c)
 *     CrmComparisonRoutineFanNoiseBelowLow @ 0x180042DA0 (CrmComparisonRoutineFanNoiseBelowLow.c)
 * Callees:
 *     <none>
 */

bool __fastcall CrmComparisonRoutineFanNoiseUnderLimit(__int64 a1, _DWORD *a2, unsigned int a3)
{
  return !*a2 || a2[1] < a3;
}
