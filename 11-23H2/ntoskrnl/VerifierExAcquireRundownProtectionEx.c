/*
 * XREFs of VerifierExAcquireRundownProtectionEx @ 0x140ACE010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireRundownProtectionEx()
{
  return ((__int64 (*)(void))pXdvExAcquireRundownProtectionEx)();
}
