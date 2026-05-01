/*
 * XREFs of CrmStateRoutineULONGUsageUnderLimit @ 0x18004BA08
 * Callers:
 *     CrmComparisonRoutineSystemDiskUsageUnder70 @ 0x180012FD0 (CrmComparisonRoutineSystemDiskUsageUnder70.c)
 *     CrmComparisonRoutineCPUUsageUnder80 @ 0x180013000 (CrmComparisonRoutineCPUUsageUnder80.c)
 *     CrmComparisonRoutineSystemDiskUsageUnder15 @ 0x180014170 (CrmComparisonRoutineSystemDiskUsageUnder15.c)
 *     CrmComparisonRoutineCPUUsageUnder25 @ 0x1800141A0 (CrmComparisonRoutineCPUUsageUnder25.c)
 *     CrmComparisonRoutineGPUUsageUnder5 @ 0x1800141D0 (CrmComparisonRoutineGPUUsageUnder5.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmStateRoutineULONGUsageUnderLimit(unsigned int *a1, unsigned int a2)
{
  return *a1 < a2;
}
