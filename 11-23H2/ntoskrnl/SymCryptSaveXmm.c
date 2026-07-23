/*
 * XREFs of SymCryptSaveXmm @ 0x14056D8AC
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403F5D50 (SymCryptParallelSha256Process.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptSaveXmm()
{
  return PdcCreateWatchdogAroundClientCall();
}
