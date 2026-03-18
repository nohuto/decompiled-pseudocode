/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1402F614C
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x1406831A8 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyTrackerQuery @ 0x1406A7BF4 (PopEtEnergyTrackerQuery.c)
 *     PsQueryProcessEnergyValues @ 0x1407A8280 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextCleanup @ 0x1407E0DC4 (PoEnergyContextCleanup.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
