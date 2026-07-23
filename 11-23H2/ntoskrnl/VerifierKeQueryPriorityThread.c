/*
 * XREFs of VerifierKeQueryPriorityThread @ 0x140ACF800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeQueryPriorityThread()
{
  return ((__int64 (*)(void))pXdvKeQueryPriorityThread)();
}
