/*
 * XREFs of PopCoalescingSetTimer @ 0x1405CFBF0
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1405CFB5C (PopCoalescingSetActiveState.c)
 *     PopCoalescingNotify @ 0x14098F180 (PopCoalescingNotify.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     PopPrintEx @ 0x140369B48 (PopPrintEx.c)
 */

__int64 PopCoalescingSetTimer()
{
  __int64 result; // rax

  if ( (PopCoalescingState & 1) != 0 )
  {
    PopPrintEx(3LL, (__int64)"PopCoalescing: Coalescing timer activated\n");
    result = KiSetTimerEx(
               (unsigned __int64)&PopCoalescingTimer,
               -10000000LL * PopCoalescingTimerInterval,
               0,
               0,
               (__int64)&PopCoalescingTimerDpc);
    _interlockedbittestandset((volatile signed __int32 *)&PopCoalescingTimer, 9u);
  }
  return result;
}
