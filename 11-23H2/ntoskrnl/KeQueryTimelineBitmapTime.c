/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1402C0864
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x1406A7514 (PoEnergyContextUpdateComponentPower.c)
 *     PsQueryProcessEnergyValues @ 0x140741FD0 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextCleanup @ 0x1407B0D20 (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x1407B83CC (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
