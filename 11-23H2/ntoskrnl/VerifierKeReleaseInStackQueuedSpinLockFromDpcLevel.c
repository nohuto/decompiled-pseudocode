/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140AD5670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel()
{
  return ((__int64 (*)(void))pXdvKeReleaseInStackQueuedSpinLockFromDpcLevel)();
}
