/*
 * XREFs of KiSetClockTimerKTimerDeadlines @ 0x1402C1C64
 * Callers:
 *     KeClockInterruptNotify @ 0x1402C46A0 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C7060 (KeResumeClockTimerFromIdle.c)
 *     KiSetClockInterval @ 0x1403B1FA4 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x14056FDE4 (KiResetClockInterval.c)
 *     KiResumeClockTimer @ 0x14056FE48 (KiResumeClockTimer.c)
 * Callees:
 *     KiSetClockTimer @ 0x1402C2598 (KiSetClockTimer.c)
 */

__int64 __fastcall KiSetClockTimerKTimerDeadlines(int a1, char a2)
{
  __int64 result; // rax

  result = KiSetClockTimer(
             a1,
             (int)KiLastPseudoHrTimerExpiration + KePseudoHrTimeIncrement,
             KeMinimumIncrement,
             1,
             1,
             0);
  if ( a2 )
  {
    if ( KiClockOwnerOneShotRequest )
      return KiSetClockTimer(a1, KiClockOwnerOneShotRequest, 0, 2, 1, 0);
  }
  return result;
}
