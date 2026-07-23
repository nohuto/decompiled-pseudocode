/*
 * XREFs of KiResetClockInterval @ 0x14056FE84
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140462020 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402C1C34 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetNextClockTickDueTime @ 0x1402C84E0 (KiSetNextClockTickDueTime.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340704 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1405700EC (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockInterval(PRTL_BALANCED_NODE Node)
{
  int Right; // edx

  RtlRbRemoveNode(&KiClockIntervalRequests, Node);
  Right = (int)Node[1].Right;
  LOBYTE(Node[1].Children[0]) = 0;
  if ( Right )
    PoTraceSystemTimerResolutionKernel(0, Right, 1);
  if ( !KiClockTimerPerCpuTickScheduling )
    return KiSetClockIntervalToMinimumRequested();
  KiSetClockTimerKTimerDeadlines((int)KeGetCurrentPrcb(), 0);
  return KiSetNextClockTickDueTime(1);
}
