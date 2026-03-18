/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1409A4B54
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A2610 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A2910 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1409A2B5C (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1409A2FC8 (TtmiSetInputWakeCapability.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A4358 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A4808 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1409A4C4C (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409A5C10 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409A670C (TtmpDispatchEvacuateDevices.c)
 *     TtmiSetPendingOnOffRequest @ 0x1409AB548 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1409AB68C (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1409AB8D8 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1409AB934 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1409ABA60 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1409ABAE0 (TtmpSetTerminalPendingCleanup.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall TtmiScheduleSessionWorker(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 224) |= a2;
  if ( (*(_DWORD *)(a1 + 4) & 3) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    *(_DWORD *)(a1 + 4) |= 1u;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 192), DelayedWorkQueue);
  }
}
