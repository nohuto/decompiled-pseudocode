/*
 * XREFs of CcFreeSharedCacheMapIgnoreNull @ 0x14040FA90
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 *     CcDeleteSharedCacheMap @ 0x140299FC0 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14020B9E0 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreeSharedCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcSharedCacheMapLookasideList, Entry);
}
