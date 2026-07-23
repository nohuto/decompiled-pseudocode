/*
 * XREFs of VerifierKeReleaseGuardedMutex @ 0x140ABFEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeReleaseGuardedMutex)();
}
