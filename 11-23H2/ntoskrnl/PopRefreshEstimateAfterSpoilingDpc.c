/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1403B6C60
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1403C6458 (PopBatteryQueueWork.c)
 */

__int64 PopRefreshEstimateAfterSpoilingDpc()
{
  return PopBatteryQueueWork(1LL);
}
