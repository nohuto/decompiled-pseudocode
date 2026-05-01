/*
 * XREFs of CrmComparisonRoutineCPUUsageUnder25 @ 0x1800141A0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineULONGUsageUnderLimit @ 0x18004BA08 (CrmStateRoutineULONGUsageUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineCPUUsageUnder25(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineULONGUsageUnderLimit(a2, 25LL);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
