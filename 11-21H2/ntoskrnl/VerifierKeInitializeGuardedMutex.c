/*
 * XREFs of VerifierKeInitializeGuardedMutex @ 0x140A8EE00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeInitializeGuardedMutex)();
}
