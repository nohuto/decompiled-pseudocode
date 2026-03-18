/*
 * XREFs of PopBatteryQueueWork @ 0x1403C6458
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403B5CA0 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1403B6C60 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x140598C30 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x14086FD60 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x1408737FC (PopBatteryUpdateCurrentState.c)
 *     PopSpoilBatteryEstimate @ 0x140873A4C (PopSpoilBatteryEstimate.c)
 *     PopBatteryAdd @ 0x140994F80 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140995740 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x140996110 (PopUsbErrorWNFNotificationCallback.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
