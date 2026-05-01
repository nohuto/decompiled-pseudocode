/*
 * XREFs of CrmComparisonRoutineSystemDiskUsageUnder70 @ 0x180012FD0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineULONGUsageUnderLimit @ 0x18004BA98 (CrmStateRoutineULONGUsageUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineSystemDiskUsageUnder70(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineULONGUsageUnderLimit(a2, 70LL);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
