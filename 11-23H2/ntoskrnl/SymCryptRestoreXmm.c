/*
 * XREFs of SymCryptRestoreXmm @ 0x14056D87C
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403F5D50 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036E560 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
