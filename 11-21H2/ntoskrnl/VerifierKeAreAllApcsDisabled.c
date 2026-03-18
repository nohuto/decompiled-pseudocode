/*
 * XREFs of VerifierKeAreAllApcsDisabled @ 0x140A8ED40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAreAllApcsDisabled()
{
  return ((__int64 (*)(void))pXdvKeAreAllApcsDisabled)();
}
