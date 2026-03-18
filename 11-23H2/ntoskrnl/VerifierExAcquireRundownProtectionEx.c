/*
 * XREFs of VerifierExAcquireRundownProtectionEx @ 0x140ACE020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireRundownProtectionEx()
{
  return ((__int64 (*)(void))pXdvExAcquireRundownProtectionEx)();
}
