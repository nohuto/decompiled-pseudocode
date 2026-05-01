/*
 * XREFs of CrmComparisonRoutineSystemDiskUsageUnder15 @ 0x180014170
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineULONGUsageUnderLimit @ 0x18004BA08 (CrmStateRoutineULONGUsageUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineSystemDiskUsageUnder15(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineULONGUsageUnderLimit(a2, 15LL);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
