/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x1403CEA18
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403828D0 (HvlEnlightenProcessor.c)
 *     HvlReadPerformanceStateCounters @ 0x1403CE9C0 (HvlReadPerformanceStateCounters.c)
 *     HvlSharedIsr @ 0x14045F360 (HvlSharedIsr.c)
 *     HvlGetApicIdFromLpIndex @ 0x14053FF60 (HvlGetApicIdFromLpIndex.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x140540080 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x1405403A0 (HvlQueryProcessorTopologyEx.c)
 *     HvlGetStatsUpdateCounter @ 0x1405467E4 (HvlGetStatsUpdateCounter.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1405A0104 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByLpIndex(unsigned int a1)
{
  int *v1; // rdx
  int *result; // rax
  unsigned int v3; // r9d

  v1 = HvlpLogicalProcessorRegions;
  if ( a1 >= (unsigned int)HvlpLogicalProcessorCount
    || (result = &HvlpLogicalProcessorRegions[30 * a1], result[1] != a1) )
  {
    result = 0LL;
    v3 = 0;
    if ( (_DWORD)HvlpLogicalProcessorCount )
    {
      while ( v1[1] != a1 )
      {
        ++v3;
        v1 += 30;
        if ( v3 >= (unsigned int)HvlpLogicalProcessorCount )
          goto LABEL_6;
      }
      return v1;
    }
    else
    {
LABEL_6:
      if ( !a1 )
        return v1;
    }
  }
  return result;
}
