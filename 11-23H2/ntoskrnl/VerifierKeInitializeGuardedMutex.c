/*
 * XREFs of VerifierKeInitializeGuardedMutex @ 0x140ACF770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeInitializeGuardedMutex)();
}
