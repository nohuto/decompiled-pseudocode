/*
 * XREFs of VerifierExGetSharedWaiterCount @ 0x140ACE0C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExGetSharedWaiterCount()
{
  return ((__int64 (*)(void))pXdvExGetSharedWaiterCount)();
}
