/*
 * XREFs of CcAllocateAndZeroSharedCacheMapRaiseOnError @ 0x14040FA18
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14022D080 (ExAllocateFromLookasideListEx.c)
 *     memset @ 0x140435A00 (memset.c)
 */

PVOID CcAllocateAndZeroSharedCacheMapRaiseOnError()
{
  PVOID v0; // rbx

  v0 = ExAllocateFromLookasideListEx(&CcSharedCacheMapLookasideList);
  memset(v0, 0, 0x260uLL);
  return v0;
}
