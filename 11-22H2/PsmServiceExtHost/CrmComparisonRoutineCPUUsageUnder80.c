/*
 * XREFs of CrmComparisonRoutineCPUUsageUnder80 @ 0x180013000
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineULONGUsageUnderLimit @ 0x18004BA98 (CrmStateRoutineULONGUsageUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineCPUUsageUnder80(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineULONGUsageUnderLimit(a2, 80LL);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
