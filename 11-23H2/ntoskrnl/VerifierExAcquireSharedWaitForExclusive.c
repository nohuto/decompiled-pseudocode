/*
 * XREFs of VerifierExAcquireSharedWaitForExclusive @ 0x140AE4270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireSharedWaitForExclusive()
{
  return ((__int64 (*)(void))pXdvExAcquireSharedWaitForExclusive)();
}
