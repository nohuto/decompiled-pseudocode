/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1403D7340
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3EA48, DelayedWorkQueue);
}
