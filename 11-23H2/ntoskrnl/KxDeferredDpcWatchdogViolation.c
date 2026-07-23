/*
 * XREFs of KxDeferredDpcWatchdogViolation @ 0x140420550
 * Callers:
 *     KiDeferredDpcWatchdogViolation @ 0x140420530 (KiDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KiInvokeDeferredDpcWatchdogViolation @ 0x14057B610 (KiInvokeDeferredDpcWatchdogViolation.c)
 */

void __noreturn KxDeferredDpcWatchdogViolation()
{
  KiInvokeDeferredDpcWatchdogViolation();
}
