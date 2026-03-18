/*
 * XREFs of EmonPreOverflowHandler @ 0x14051DFA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x14037BD58 (HalpInterruptEnablePerformanceEvents.c)
 */

__int64 EmonPreOverflowHandler()
{
  return HalpInterruptEnablePerformanceEvents(1LL);
}
