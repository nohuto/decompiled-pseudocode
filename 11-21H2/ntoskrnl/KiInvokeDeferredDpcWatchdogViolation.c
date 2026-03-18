/*
 * XREFs of KiInvokeDeferredDpcWatchdogViolation @ 0x140579410
 * Callers:
 *     KxDeferredDpcWatchdogViolation @ 0x140420B30 (KxDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
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
