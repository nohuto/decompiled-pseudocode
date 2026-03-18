/*
 * XREFs of VerifierExRaiseAccessViolation @ 0x140ACE1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierExRaiseAccessViolation()
{
  return ((__int64 (*)(void))pXdvExRaiseAccessViolation)();
}
