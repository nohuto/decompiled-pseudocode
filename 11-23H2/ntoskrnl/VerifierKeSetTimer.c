/*
 * XREFs of VerifierKeSetTimer @ 0x140AC04F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeSetTimer()
{
  return ((__int64 (*)(void))pXdvKeSetTimer)();
}
