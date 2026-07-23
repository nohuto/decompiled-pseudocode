/*
 * XREFs of RawScanDeletedList @ 0x14079188C
 * Callers:
 *     RawMountVolume @ 0x14079255C (RawMountVolume.c)
 *     RawShutdown @ 0x1409B8420 (RawShutdown.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ExTryToAcquireFastMutex @ 0x14033DF70 (ExTryToAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x1405A712C (RawCheckForDeleteVolume.c)
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
