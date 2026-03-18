/*
 * XREFs of SymCryptRestoreXmm @ 0x14056D1BC
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403F5B70 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E3C0 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
