/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x14098852C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140AA6950 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
