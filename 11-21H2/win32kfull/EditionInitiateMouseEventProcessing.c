/*
 * XREFs of EditionInitiateMouseEventProcessing @ 0x1C00FD1C0
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C00FD22C (WakeRIT.c)
 *     UserBeep @ 0x1C0214878 (UserBeep.c)
 */

__int64 __fastcall EditionInitiateMouseEventProcessing(int a1)
{
  __int64 result; // rax

  if ( _InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
  {
    EtwTraceWakeMIT(1LL);
    result = WakeMIT(1LL);
  }
  else
  {
    EtwTraceWakeRIT(1LL);
    result = WakeRIT(1LL);
  }
  if ( a1 )
    return UserBeep(440LL, 125LL);
  return result;
}
