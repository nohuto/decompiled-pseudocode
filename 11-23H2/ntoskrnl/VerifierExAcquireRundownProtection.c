/*
 * XREFs of VerifierExAcquireRundownProtection @ 0x140ABFCE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireRundownProtection()
{
  return ((__int64 (*)(void))pXdvExAcquireRundownProtection)();
}
