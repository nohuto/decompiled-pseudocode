/*
 * XREFs of VerifierPsGetVersion @ 0x140AD0F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsGetVersion()
{
  return ((__int64 (*)(void))pXdvPsGetVersion)();
}
