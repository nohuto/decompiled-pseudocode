/*
 * XREFs of KxDeferredDpcWatchdogViolation @ 0x1404201C0
 * Callers:
 *     KiDeferredDpcWatchdogViolation @ 0x1404201A0 (KiDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KiInvokeDeferredDpcWatchdogViolation @ 0x14057B120 (KiInvokeDeferredDpcWatchdogViolation.c)
 */

void __noreturn KxDeferredDpcWatchdogViolation()
{
  KiInvokeDeferredDpcWatchdogViolation();
}
