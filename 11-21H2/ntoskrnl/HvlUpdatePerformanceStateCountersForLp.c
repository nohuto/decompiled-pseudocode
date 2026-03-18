/*
 * XREFs of HvlUpdatePerformanceStateCountersForLp @ 0x14039DAE0
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140304A20 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUpdatePerformanceStateCountersForLp(unsigned int a1)
{
  unsigned __int16 v1; // ax

  v1 = HvcallInitiateHypercall(65774LL, a1, 0LL);
  if ( v1 )
    return HvlpHvToNtStatus(v1);
  else
    return 0LL;
}
