/*
 * XREFs of VerifierKeAcquireSpinLockForDpc @ 0x140AD0660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeAcquireSpinLockForDpc)();
}
