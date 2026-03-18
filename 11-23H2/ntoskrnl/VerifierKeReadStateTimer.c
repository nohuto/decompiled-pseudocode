/*
 * XREFs of VerifierKeReadStateTimer @ 0x140AD5630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateTimer()
{
  return ((__int64 (*)(void))pXdvKeReadStateTimer)();
}
