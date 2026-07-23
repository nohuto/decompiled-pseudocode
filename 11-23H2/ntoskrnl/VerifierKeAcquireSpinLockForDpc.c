/*
 * XREFs of VerifierKeAcquireSpinLockForDpc @ 0x140ACF680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeAcquireSpinLockForDpc)();
}
