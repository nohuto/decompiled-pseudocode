/*
 * XREFs of VerifierKeTryToAcquireGuardedMutex @ 0x140ACF9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeTryToAcquireGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeTryToAcquireGuardedMutex)();
}
