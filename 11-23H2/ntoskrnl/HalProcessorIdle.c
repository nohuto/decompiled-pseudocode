/*
 * XREFs of HalProcessorIdle @ 0x14041A680
 * Callers:
 *     PoIdle @ 0x1402C4B60 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x140393A70 (PpmIdleDefaultExecute.c)
 *     PpmIdleGuestExecute @ 0x1403CCB80 (PpmIdleGuestExecute.c)
 *     KiHaltOnAddress @ 0x14057FE88 (KiHaltOnAddress.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x1403342B0 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
