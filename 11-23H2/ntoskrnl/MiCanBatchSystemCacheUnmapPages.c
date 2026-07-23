/*
 * XREFs of MiCanBatchSystemCacheUnmapPages @ 0x14062F044
 * Callers:
 *     MiAddPageToInsertList @ 0x1402D9C60 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x1402D9DC0 (MiUnlockMdlWritePages.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiSetNonResidentPteHeat @ 0x1402D9340 (MiSetNonResidentPteHeat.c)
 */

__int64 __fastcall MiCanBatchSystemCacheUnmapPages(_BYTE *a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rcx
  unsigned int v5; // r10d

  if ( *a1 )
    MiCaptureDirtyBitToPfn(a2);
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u) )
  {
    v3 = *(_BYTE *)(a2 + 34);
    if ( (v3 & 0x10) != 0 )
    {
      if ( byte_140C65AE8 )
        *(_BYTE *)(a2 + 34) = v3 & 0xEF;
    }
  }
  v4 = *(_QWORD *)(a2 + 24);
  if ( (v4 & 0x4000000000000000LL) != 0
    || (*(_BYTE *)(a2 + 35) & 0x50) != 0
    || (v4 & 0x3FFFFFFFFFFFFFFFLL) != 1
    || *(_WORD *)(a2 + 32) != 1 )
  {
    return 2LL;
  }
  *(_WORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 24) = v4 & 0xC000000000000000uLL;
  MiSetNonResidentPteHeat((unsigned __int64 *)(a2 + 16), 0);
  return v5;
}
