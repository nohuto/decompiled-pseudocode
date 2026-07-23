/*
 * XREFs of HalProcessorIdle @ 0x14041AA10
 * Callers:
 *     PoIdle @ 0x1402C4DF0 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x140393C50 (PpmIdleDefaultExecute.c)
 *     PpmIdleGuestExecute @ 0x1403CCD60 (PpmIdleGuestExecute.c)
 *     KiHaltOnAddress @ 0x140580378 (KiHaltOnAddress.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x140334540 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
