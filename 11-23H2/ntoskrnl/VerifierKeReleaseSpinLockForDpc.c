/*
 * XREFs of VerifierKeReleaseSpinLockForDpc @ 0x140ACF8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeReleaseSpinLockForDpc)();
}
