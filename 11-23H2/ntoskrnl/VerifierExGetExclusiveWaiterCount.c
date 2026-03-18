/*
 * XREFs of VerifierExGetExclusiveWaiterCount @ 0x140ACE0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierExGetExclusiveWaiterCount()
{
  return ((__int64 (*)(void))pXdvExGetExclusiveWaiterCount)();
}
