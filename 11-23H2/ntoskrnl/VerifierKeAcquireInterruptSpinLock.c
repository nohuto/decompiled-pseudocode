/*
 * XREFs of VerifierKeAcquireInterruptSpinLock @ 0x140ACF5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireInterruptSpinLock()
{
  return ((__int64 (*)(void))pXdvKeAcquireInterruptSpinLock)();
}
