/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140AD5650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseInStackQueuedSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeReleaseInStackQueuedSpinLockForDpc)();
}
