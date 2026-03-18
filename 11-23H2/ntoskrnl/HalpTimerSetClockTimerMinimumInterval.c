/*
 * XREFs of HalpTimerSetClockTimerMinimumInterval @ 0x1405089D4
 * Callers:
 *     HaliSetSystemInformation @ 0x14085ED18 (HaliSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetClockTimerMinimumInterval(int a1)
{
  HalpTimerMinIncrement = a1;
  return 0LL;
}
