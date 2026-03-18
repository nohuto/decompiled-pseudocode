/*
 * XREFs of PopThermalTelemetryCallback @ 0x14058FF60
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3C7A8, DelayedWorkQueue);
}
