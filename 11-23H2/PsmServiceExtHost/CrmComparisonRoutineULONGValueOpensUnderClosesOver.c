/*
 * XREFs of CrmComparisonRoutineULONGValueOpensUnderClosesOver @ 0x18004B5AC
 * Callers:
 *     CrmComparisonRoutineCpuUsageGood @ 0x18004B400 (CrmComparisonRoutineCpuUsageGood.c)
 *     CrmComparisonRoutineCpuUsageMedium @ 0x18004B420 (CrmComparisonRoutineCpuUsageMedium.c)
 *     CrmComparisonRoutineCpuUsageMediumTransitioning @ 0x18004B440 (CrmComparisonRoutineCpuUsageMediumTransitioning.c)
 *     CrmComparisonRoutineGpuUsageGood @ 0x18004B470 (CrmComparisonRoutineGpuUsageGood.c)
 *     CrmComparisonRoutineGpuUsageMedium @ 0x18004B490 (CrmComparisonRoutineGpuUsageMedium.c)
 *     CrmComparisonRoutineGpuUsageMediumTransitioning @ 0x18004B4B0 (CrmComparisonRoutineGpuUsageMediumTransitioning.c)
 *     CrmComparisonRoutineSystemDiskUsageGood @ 0x18004B540 (CrmComparisonRoutineSystemDiskUsageGood.c)
 *     CrmComparisonRoutineSystemDiskUsageMedium @ 0x18004B560 (CrmComparisonRoutineSystemDiskUsageMedium.c)
 *     CrmComparisonRoutineSystemDiskUsageMediumTransitioning @ 0x18004B580 (CrmComparisonRoutineSystemDiskUsageMediumTransitioning.c)
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
