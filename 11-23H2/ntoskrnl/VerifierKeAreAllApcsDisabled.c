/*
 * XREFs of VerifierKeAreAllApcsDisabled @ 0x140ACF6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAreAllApcsDisabled()
{
  return ((__int64 (*)(void))pXdvKeAreAllApcsDisabled)();
}
