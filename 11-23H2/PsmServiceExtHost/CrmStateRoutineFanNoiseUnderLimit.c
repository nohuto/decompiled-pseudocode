/*
 * XREFs of CrmStateRoutineFanNoiseUnderLimit @ 0x18004B9C4
 * Callers:
 *     CrmComparisonRoutineFanNoiseBelowMed @ 0x180014300 (CrmComparisonRoutineFanNoiseBelowMed.c)
 *     CrmComparisonRoutineFanNoiseBelowLow @ 0x180014330 (CrmComparisonRoutineFanNoiseBelowLow.c)
 *     CrmComparisonRoutineFanNoiseBelowHigh @ 0x180014360 (CrmComparisonRoutineFanNoiseBelowHigh.c)
 * Callees:
 *     <none>
 */

bool __fastcall CrmStateRoutineFanNoiseUnderLimit(_DWORD *a1, unsigned int a2)
{
  return !*a1 || a1[2] < a2;
}
