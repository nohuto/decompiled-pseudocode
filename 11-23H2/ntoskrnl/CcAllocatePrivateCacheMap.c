/*
 * XREFs of CcAllocatePrivateCacheMap @ 0x14040FC30
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14022D190 (ExAllocateFromLookasideListEx.c)
 */

PVOID CcAllocatePrivateCacheMap()
{
  return ExAllocateFromLookasideListEx(&CcPrivateCacheMapLookasideList);
}
