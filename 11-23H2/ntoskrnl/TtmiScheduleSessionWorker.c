/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1409A4AA4
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A2560 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A2860 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1409A2AAC (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1409A2F18 (TtmiSetInputWakeCapability.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A42A8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A4758 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1409A4B9C (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409A5B60 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409A665C (TtmpDispatchEvacuateDevices.c)
 *     TtmiSetPendingOnOffRequest @ 0x1409AB498 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1409AB5DC (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1409AB828 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1409AB884 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1409AB9B0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1409ABA30 (TtmpSetTerminalPendingCleanup.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
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
