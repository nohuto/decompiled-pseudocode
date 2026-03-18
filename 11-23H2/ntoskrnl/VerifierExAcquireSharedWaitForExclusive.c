/*
 * XREFs of VerifierExAcquireSharedWaitForExclusive @ 0x140AE4280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireSharedWaitForExclusive()
{
  return ((__int64 (*)(void))pXdvExAcquireSharedWaitForExclusive)();
}
