/*
 * XREFs of VerifierKeEnterCriticalRegion @ 0x140AC0320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeEnterCriticalRegion()
{
  return ((__int64 (*)(void))pXdvKeEnterCriticalRegion)();
}
