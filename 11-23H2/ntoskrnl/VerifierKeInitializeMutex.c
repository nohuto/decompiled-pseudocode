/*
 * XREFs of VerifierKeInitializeMutex @ 0x140AD5510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeMutex()
{
  return ((__int64 (*)(void))pXdvKeInitializeMutex)();
}
