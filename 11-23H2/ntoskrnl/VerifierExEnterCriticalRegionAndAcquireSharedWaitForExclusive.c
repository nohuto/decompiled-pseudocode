/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140ACE070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14046B760 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive(struct _ERESOURCE *a1)
{
  if ( pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive )
    return (PVOID)pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive();
  else
    return ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(a1);
}
