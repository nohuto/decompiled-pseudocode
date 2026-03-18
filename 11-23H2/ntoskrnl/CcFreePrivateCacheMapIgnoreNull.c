/*
 * XREFs of CcFreePrivateCacheMapIgnoreNull @ 0x14040FA6C
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 *     CcUninitializeCacheMap @ 0x14029BC40 (CcUninitializeCacheMap.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14020B9E0 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreePrivateCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcPrivateCacheMapLookasideList, Entry);
}
