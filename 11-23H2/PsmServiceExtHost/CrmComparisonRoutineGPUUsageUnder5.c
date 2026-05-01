/*
 * XREFs of CrmComparisonRoutineGPUUsageUnder5 @ 0x1800141D0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineULONGUsageUnderLimit @ 0x18004BA08 (CrmStateRoutineULONGUsageUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineGPUUsageUnder5(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineULONGUsageUnderLimit(a2, 5LL);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
