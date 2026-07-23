/*
 * XREFs of VerifierKeAreApcsDisabled @ 0x140ACF6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAreApcsDisabled()
{
  return ((__int64 (*)(void))pXdvKeAreApcsDisabled)();
}
