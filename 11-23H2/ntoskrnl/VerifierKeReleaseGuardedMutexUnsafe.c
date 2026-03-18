/*
 * XREFs of VerifierKeReleaseGuardedMutexUnsafe @ 0x140ACF870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseGuardedMutexUnsafe()
{
  return ((__int64 (*)(void))pXdvKeReleaseGuardedMutexUnsafe)();
}
