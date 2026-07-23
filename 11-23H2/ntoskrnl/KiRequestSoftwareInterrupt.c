/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x140318BF8
 * Callers:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiUpdateRunTime @ 0x1402C7770 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x1402C7DA0 (KeAccumulateTicks.c)
 *     KiRequestTimer2Expiration @ 0x140318B30 (KiRequestTimer2Expiration.c)
 *     KiFlushQueuedDpcsWorker @ 0x140363930 (KiFlushQueuedDpcsWorker.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateThreadHgsFeedback @ 0x140578BD0 (KiUpdateThreadHgsFeedback.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057E740 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
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
