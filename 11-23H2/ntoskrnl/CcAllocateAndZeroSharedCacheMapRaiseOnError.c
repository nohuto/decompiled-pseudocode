/*
 * XREFs of CcAllocateAndZeroSharedCacheMapRaiseOnError @ 0x14040FBF8
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14022D190 (ExAllocateFromLookasideListEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

PVOID CcAllocateAndZeroSharedCacheMapRaiseOnError()
{
  PVOID v0; // rbx

  v0 = ExAllocateFromLookasideListEx(&CcSharedCacheMapLookasideList);
  memset(v0, 0, 0x260uLL);
  return v0;
}
