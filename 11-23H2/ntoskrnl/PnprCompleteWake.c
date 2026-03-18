/*
 * XREFs of PnprCompleteWake @ 0x140562B94
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140A9C914 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9DE60 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x140966FD4 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
