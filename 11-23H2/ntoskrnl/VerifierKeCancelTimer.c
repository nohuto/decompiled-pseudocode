/*
 * XREFs of VerifierKeCancelTimer @ 0x140AC02D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeCancelTimer()
{
  return ((__int64 (*)(void))pXdvKeCancelTimer)();
}
