/*
 * XREFs of HalpTimerSetClockTimerMinimumInterval @ 0x140508F24
 * Callers:
 *     HaliSetSystemInformation @ 0x14085EF58 (HaliSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetClockTimerMinimumInterval(int a1)
{
  HalpTimerMinIncrement = a1;
  return 0LL;
}
