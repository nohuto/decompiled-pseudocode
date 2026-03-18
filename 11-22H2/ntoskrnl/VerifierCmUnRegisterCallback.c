/*
 * XREFs of VerifierCmUnRegisterCallback @ 0x140ACEFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierCmUnRegisterCallback()
{
  return ((__int64 (*)(void))pXdvCmUnRegisterCallback)();
}
