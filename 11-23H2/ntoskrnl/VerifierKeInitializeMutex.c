/*
 * XREFs of VerifierKeInitializeMutex @ 0x140AD5500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeMutex()
{
  return ((__int64 (*)(void))pXdvKeInitializeMutex)();
}
