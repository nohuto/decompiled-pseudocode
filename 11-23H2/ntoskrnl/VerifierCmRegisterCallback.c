/*
 * XREFs of VerifierCmRegisterCallback @ 0x140ACDF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierCmRegisterCallback()
{
  return ((__int64 (*)(void))pXdvCmRegisterCallback)();
}
