/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1402C0AF4
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x1406A7514 (PoEnergyContextUpdateComponentPower.c)
 *     PsQueryProcessEnergyValues @ 0x1407421C0 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextCleanup @ 0x1407B0F10 (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x1407B86AC (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
