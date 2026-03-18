/*
 * XREFs of VerifierKeSetTimer @ 0x140A7F630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeSetTimer()
{
  return ((__int64 (*)(void))pXdvKeSetTimer)();
}
