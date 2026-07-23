/*
 * XREFs of VerifierKeReleaseInterruptSpinLock @ 0x140ACF880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseInterruptSpinLock()
{
  return ((__int64 (*)(void))pXdvKeReleaseInterruptSpinLock)();
}
