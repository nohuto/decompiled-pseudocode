/*
 * XREFs of VerifierKeReleaseSpinLockForDpc @ 0x140A8EF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeReleaseSpinLockForDpc)();
}
