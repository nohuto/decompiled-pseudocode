/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403AC3A0
 * Callers:
 *     ExpPcwHostCallback @ 0x140858C50 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
