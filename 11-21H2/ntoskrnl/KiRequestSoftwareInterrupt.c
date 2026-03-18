/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x14022BA6C
 * Callers:
 *     KiRequestTimer2Expiration @ 0x14022B980 (KiRequestTimer2Expiration.c)
 *     KiFlushQueuedDpcsWorker @ 0x140251300 (KiFlushQueuedDpcsWorker.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 *     KiUpdateThreadHgsFeedback @ 0x140575600 (KiUpdateThreadHgsFeedback.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 */

__int64 __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, char a2)
{
  __int64 result; // rax

  if ( a2 != 2 )
    goto LABEL_6;
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel )
  {
    CurrentPrcb->InterruptRequest = 1;
  }
  else
  {
LABEL_6:
    LOBYTE(CurrentPrcb) = a2;
    return HalRequestSoftwareInterrupt(CurrentPrcb);
  }
  return result;
}
