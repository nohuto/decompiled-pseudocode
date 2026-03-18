/*
 * XREFs of KiInvokeDeferredDpcWatchdogViolation @ 0x14057B1B0
 * Callers:
 *     KxDeferredDpcWatchdogViolation @ 0x14041FB00 (KxDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __noreturn KiInvokeDeferredDpcWatchdogViolation()
{
  KeBugCheckEx(
    0x133u,
    0LL,
    (unsigned int)KiSavedDpcTimeCount,
    (unsigned int)KiSavedDpcTimeLimitTicks,
    (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
}
