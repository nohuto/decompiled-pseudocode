/*
 * XREFs of VerifierObGetObjectSecurity @ 0x140AE4F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierObGetObjectSecurity()
{
  return ((__int64 (*)(void))pXdvObGetObjectSecurity)();
}
