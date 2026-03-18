/*
 * XREFs of PopThermalTelemetryCallback @ 0x1405D06C0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C22128, DelayedWorkQueue);
}
