/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x140318968
 * Callers:
 *     KiQueueReadyThread @ 0x140234510 (KiQueueReadyThread.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiUpdateRunTime @ 0x1402C74E0 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x1402C7B10 (KeAccumulateTicks.c)
 *     KiRequestTimer2Expiration @ 0x1403188A0 (KiRequestTimer2Expiration.c)
 *     KiFlushQueuedDpcsWorker @ 0x140363790 (KiFlushQueuedDpcsWorker.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D21C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateThreadHgsFeedback @ 0x1405786E0 (KiUpdateThreadHgsFeedback.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057E250 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 */

__int64 __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, char a2)
{
  __int64 result; // rax

  if ( a2 != 2 )
    return HalRequestSoftwareInterrupt(a2);
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->NestingLevel )
    return HalRequestSoftwareInterrupt(a2);
  CurrentPrcb->InterruptRequest = 1;
  return result;
}
