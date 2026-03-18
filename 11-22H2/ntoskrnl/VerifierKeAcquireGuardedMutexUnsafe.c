/*
 * XREFs of VerifierKeAcquireGuardedMutexUnsafe @ 0x140AD0590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireGuardedMutexUnsafe()
{
  return ((__int64 (*)(void))pXdvKeAcquireGuardedMutexUnsafe)();
}
