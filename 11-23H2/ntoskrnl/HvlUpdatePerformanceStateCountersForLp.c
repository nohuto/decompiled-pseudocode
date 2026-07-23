/*
 * XREFs of HvlUpdatePerformanceStateCountersForLp @ 0x1403CD500
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256F40 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CD540 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x14045F916 (HvlpHvToNtStatus.c)
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
