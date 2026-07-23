/*
 * XREFs of PopThermalTelemetryCallback @ 0x140590450
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3C828, DelayedWorkQueue);
}
