/*
 * XREFs of RawScanDeletedList @ 0x140791BAC
 * Callers:
 *     RawMountVolume @ 0x14079287C (RawMountVolume.c)
 *     RawShutdown @ 0x1409B82D0 (RawShutdown.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ExTryToAcquireFastMutex @ 0x14033DAE0 (ExTryToAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x1405A6C4C (RawCheckForDeleteVolume.c)
 */

void RawScanDeletedList()
{
  __int64 *v0; // rbx
  __int64 *v1; // rsi

  if ( (__int64 *)RawDismountedQueue != &RawDismountedQueue )
  {
    ExAcquireFastMutex(&RawGlobalLock);
    v0 = (__int64 *)RawDismountedQueue;
    while ( v0 != &RawDismountedQueue )
    {
      v1 = v0 - 21;
      v0 = (__int64 *)*v0;
      if ( ExTryToAcquireFastMutex((PFAST_MUTEX)(v1 + 29)) )
      {
        if ( !RawCheckForDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)v1) )
          ExReleaseFastMutex((PFAST_MUTEX)(v1 + 29));
      }
    }
    ExReleaseFastMutex(&RawGlobalLock);
  }
}
