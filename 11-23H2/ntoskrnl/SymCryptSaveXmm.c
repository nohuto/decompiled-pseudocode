/*
 * XREFs of SymCryptSaveXmm @ 0x14056D1EC
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403F5B70 (SymCryptParallelSha256Process.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140293450 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptSaveXmm()
{
  return PdcCreateWatchdogAroundClientCall();
}
