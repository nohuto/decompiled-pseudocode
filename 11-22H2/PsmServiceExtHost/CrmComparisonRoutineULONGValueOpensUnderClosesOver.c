/*
 * XREFs of CrmComparisonRoutineULONGValueOpensUnderClosesOver @ 0x18004B63C
 * Callers:
 *     CrmComparisonRoutineCpuUsageGood @ 0x18004B490 (CrmComparisonRoutineCpuUsageGood.c)
 *     CrmComparisonRoutineCpuUsageMedium @ 0x18004B4B0 (CrmComparisonRoutineCpuUsageMedium.c)
 *     CrmComparisonRoutineCpuUsageMediumTransitioning @ 0x18004B4D0 (CrmComparisonRoutineCpuUsageMediumTransitioning.c)
 *     CrmComparisonRoutineGpuUsageGood @ 0x18004B500 (CrmComparisonRoutineGpuUsageGood.c)
 *     CrmComparisonRoutineGpuUsageMedium @ 0x18004B520 (CrmComparisonRoutineGpuUsageMedium.c)
 *     CrmComparisonRoutineGpuUsageMediumTransitioning @ 0x18004B540 (CrmComparisonRoutineGpuUsageMediumTransitioning.c)
 *     CrmComparisonRoutineSystemDiskUsageGood @ 0x18004B5D0 (CrmComparisonRoutineSystemDiskUsageGood.c)
 *     CrmComparisonRoutineSystemDiskUsageMedium @ 0x18004B5F0 (CrmComparisonRoutineSystemDiskUsageMedium.c)
 *     CrmComparisonRoutineSystemDiskUsageMediumTransitioning @ 0x18004B610 (CrmComparisonRoutineSystemDiskUsageMediumTransitioning.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineULONGValueOpensUnderClosesOver(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4)
{
  if ( *a2 >= a3 )
    return *a2 < a4;
  else
    return 2LL;
}
