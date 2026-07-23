/*
 * XREFs of HalpTimerWatchdogWakeSetDueTime @ 0x1403D46AC
 * Callers:
 *     HalpTimerWatchdogResetCountdown @ 0x1403D4650 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerWatchdogStart @ 0x14050C080 (HalpTimerWatchdogStart.c)
 * Callees:
 *     <none>
 */

void HalpTimerWatchdogWakeSetDueTime()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // rax

  if ( !HalpWatchdogTimer || (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x80000) == 0 )
  {
    v0 = HalpTimerWatchdogTimeout;
    if ( HalpWatchdogTimer && *(_DWORD *)(HalpWatchdogTimer + 228) == 7 )
      v0 = (unsigned __int64)HalpTimerWatchdogTimeout >> 1;
    if ( v0 <= 0x2FAF0800 )
      v1 = v0 >> 1;
    else
      v1 = v0 - 600000000;
    HalpWatchdogWakeDueTime = HalpTimerWatchdogLastReset + v1;
  }
}
