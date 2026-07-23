/*
 * XREFs of CcUnmapAndPurge @ 0x14029A1C8
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14029A250 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x14029F050 (CcUnmapVacbArray.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402A1760 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     CcPurgeCacheSection @ 0x1402F0A60 (CcPurgeCacheSection.c)
 */

__int64 __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // r9d
  __int64 v6; // rsi

  v4 = CcReferenceSharedCacheMapFileObject();
  LOBYTE(v5) = a2;
  v6 = v4;
  CcUnmapVacbArray(a1, 0, 0, v5, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v6 + 40), 0LL, 0, 2u);
  return ObFastDereferenceObjectDeferDelete(a1 + 96, v6, 1666409283LL);
}
