/*
 * XREFs of ?RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z @ 0x1800380E4
 * Callers:
 *     ?CopyRegionToClump@CTileClump@DirectComposition@@QEAAJPEAV12@PEAUID3D11Texture2D@@AEBVCRegion@@K@Z @ 0x1800054F4 (-CopyRegionToClump@CTileClump@DirectComposition@@QEAAJPEAV12@PEAUID3D11Texture2D@@AEBVCRegion@@K.c)
 *     ?AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037D34 (-AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV-$TMilRect@IUMilRectU@.c)
 *     ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600 (-TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?QueueUnavailableRegion@CTileClump@DirectComposition@@AEAAXAEBVCRegion@@K@Z @ 0x180038164 (-QueueUnavailableRegion@CTileClump@DirectComposition@@AEAAXAEBVCRegion@@K@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A2AC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180081C68 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 */

__int64 __fastcall DirectComposition::CTileClump::RemoveFromValidRegion(
        DirectComposition::CTileClump *this,
        const struct FastRegion::Internal::CRgnData **a2,
        unsigned int a3)
{
  unsigned int v4; // ebx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  const struct FastRegion::Internal::CRgnData *v8; // rdx

  v4 = 0;
  v5 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)this + 12);
  if ( *(_DWORD *)v5 )
  {
    v8 = *a2;
    if ( *(_DWORD *)v8 )
    {
      if ( FastRegion::Internal::CRgnData::Intersects(v5, v8) )
      {
        *((_BYTE *)this + 88) = 1;
        DirectComposition::CTileClump::QueueUnavailableRegion(this, (const struct CRegion *)a2, a3);
        return (unsigned int)FastRegion::CRegion::Subtract(
                               (DirectComposition::CTileClump *)((char *)this + 96),
                               (const struct CRegion *)a2);
      }
    }
  }
  return v4;
}
