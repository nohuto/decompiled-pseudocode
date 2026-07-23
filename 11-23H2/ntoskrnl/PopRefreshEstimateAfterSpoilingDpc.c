/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1403B6E40
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1403C6638 (PopBatteryQueueWork.c)
 */

__int64 PopRefreshEstimateAfterSpoilingDpc()
{
  return PopBatteryQueueWork(1LL);
}
