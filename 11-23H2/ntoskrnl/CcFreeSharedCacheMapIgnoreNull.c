/*
 * XREFs of CcFreeSharedCacheMapIgnoreNull @ 0x14040FC70
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     CcDeleteSharedCacheMap @ 0x14029A250 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14020B9E0 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreeSharedCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcSharedCacheMapLookasideList, Entry);
}
