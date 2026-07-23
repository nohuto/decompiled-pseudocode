/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403AC580
 * Callers:
 *     ExpPcwHostCallback @ 0x140858E90 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
