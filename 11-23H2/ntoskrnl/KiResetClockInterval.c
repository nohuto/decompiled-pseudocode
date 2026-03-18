/*
 * XREFs of KiResetClockInterval @ 0x14056FDE4
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140462680 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B930 (RtlRbRemoveNode.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402C1C64 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetNextClockTickDueTime @ 0x1402C8510 (KiSetNextClockTickDueTime.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340BF4 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14057004C (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockInterval(unsigned __int64 a1)
{
  int v2; // edx

  RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, a1);
  v2 = *(_DWORD *)(a1 + 32);
  *(_BYTE *)(a1 + 24) = 0;
  if ( v2 )
    PoTraceSystemTimerResolutionKernel(0, v2, 1);
  if ( !KiClockTimerPerCpuTickScheduling )
    return KiSetClockIntervalToMinimumRequested();
  KiSetClockTimerKTimerDeadlines((int)KeGetCurrentPrcb(), 0);
  return KiSetNextClockTickDueTime(1);
}
