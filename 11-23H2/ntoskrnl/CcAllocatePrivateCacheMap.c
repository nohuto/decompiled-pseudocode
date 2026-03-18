/*
 * XREFs of CcAllocatePrivateCacheMap @ 0x14040FA50
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14022D080 (ExAllocateFromLookasideListEx.c)
 */

PVOID CcAllocatePrivateCacheMap()
{
  return ExAllocateFromLookasideListEx(&CcPrivateCacheMapLookasideList);
}
