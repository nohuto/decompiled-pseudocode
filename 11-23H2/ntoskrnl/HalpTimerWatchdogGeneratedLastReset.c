/*
 * XREFs of HalpTimerWatchdogGeneratedLastReset @ 0x140865DB0
 * Callers:
 *     HalpTimerWatchdogLogReset @ 0x140865D88 (HalpTimerWatchdogLogReset.c)
 * Callees:
 *     <none>
 */

char HalpTimerWatchdogGeneratedLastReset()
{
  char result; // al

  result = HalpWatchdogTimer;
  if ( HalpWatchdogTimer )
    return (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x40000) != 0;
  return result;
}
