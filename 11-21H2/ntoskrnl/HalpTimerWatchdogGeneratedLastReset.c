/*
 * XREFs of HalpTimerWatchdogGeneratedLastReset @ 0x140824800
 * Callers:
 *     HalpTimerWatchdogLogReset @ 0x1408247DC (HalpTimerWatchdogLogReset.c)
 * Callees:
 *     <none>
 */

bool HalpTimerWatchdogGeneratedLastReset()
{
  return HalpWatchdogTimer && (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x40000) != 0;
}
