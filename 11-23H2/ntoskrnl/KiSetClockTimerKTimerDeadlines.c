/*
 * XREFs of KiSetClockTimerKTimerDeadlines @ 0x1402C1EF4
 * Callers:
 *     KeClockInterruptNotify @ 0x1402C4930 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C72F0 (KeResumeClockTimerFromIdle.c)
 *     KiSetClockInterval @ 0x1403B2184 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x140570324 (KiResetClockInterval.c)
 *     KiResumeClockTimer @ 0x140570388 (KiResumeClockTimer.c)
 * Callees:
 *     KiSetClockTimer @ 0x1402C2828 (KiSetClockTimer.c)
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
