/*
 * XREFs of PopBatteryQueueWork @ 0x1403C6638
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403B5E80 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1403B6E40 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x140599120 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x14086FFA0 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x140873A3C (PopBatteryUpdateCurrentState.c)
 *     PopSpoilBatteryEstimate @ 0x140873C8C (PopSpoilBatteryEstimate.c)
 *     PopBatteryAdd @ 0x140995180 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140995940 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x140996310 (PopUsbErrorWNFNotificationCallback.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
