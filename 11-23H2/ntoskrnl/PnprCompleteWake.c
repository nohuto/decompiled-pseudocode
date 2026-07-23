/*
 * XREFs of PnprCompleteWake @ 0x140563254
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140A9C784 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9DCD0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1409671D4 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
