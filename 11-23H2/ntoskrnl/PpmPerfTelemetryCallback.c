/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1403D7160
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3EA08, DelayedWorkQueue);
}
