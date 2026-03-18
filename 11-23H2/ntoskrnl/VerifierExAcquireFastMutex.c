/*
 * XREFs of VerifierExAcquireFastMutex @ 0x140ADD1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireFastMutex()
{
  return ((__int64 (*)(void))pXdvExAcquireFastMutex)();
}
