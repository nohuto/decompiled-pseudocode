/*
 * XREFs of VerifierPsDisableImpersonation @ 0x140AD0EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsDisableImpersonation()
{
  return ((__int64 (*)(void))pXdvPsDisableImpersonation)();
}
