/*
 * XREFs of CcFreePrivateCacheMapIgnoreNull @ 0x14040FC4C
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     CcUninitializeCacheMap @ 0x14029BED0 (CcUninitializeCacheMap.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14020B9E0 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreePrivateCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcPrivateCacheMapLookasideList, Entry);
}
