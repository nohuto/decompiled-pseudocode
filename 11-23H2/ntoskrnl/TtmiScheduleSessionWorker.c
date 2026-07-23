/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1409A4CA4
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A2760 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A2A60 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1409A2CAC (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1409A3118 (TtmiSetInputWakeCapability.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A44A8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A4958 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1409A4D9C (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409A5D60 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409A685C (TtmpDispatchEvacuateDevices.c)
 *     TtmiSetPendingOnOffRequest @ 0x1409AB698 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1409AB7DC (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1409ABA28 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1409ABA84 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1409ABBB0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1409ABC30 (TtmpSetTerminalPendingCleanup.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
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
