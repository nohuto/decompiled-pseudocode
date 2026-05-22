/*
 * XREFs of ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A518
 * Callers:
 *     ?GetAvailableRegion@CTileClump@DirectComposition@@QEAAJPEAVCRegion@@@Z @ 0x1800053A0 (-GetAvailableRegion@CTileClump@DirectComposition@@QEAAJPEAVCRegion@@@Z.c)
 *     ?TryIntersect@CRegion@@QEAAJAEBV1@0@Z @ 0x1800054BC (-TryIntersect@CRegion@@QEAAJAEBV1@0@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A3CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600 (-TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18007A550 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 */

__int64 __fastcall FastRegion::CRegion::Copy(
        FastRegion::CRegion *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rdx
  unsigned int v3; // ebx
  int v4; // eax

  if ( this == (FastRegion::CRegion *)a2 )
    return 0LL;
  v2 = *a2;
  v3 = 0;
  if ( !*(_DWORD *)v2 )
  {
    **(_DWORD **)this = 0;
    return 0LL;
  }
  v4 = FastRegion::CRegion::CopyData(this, v2);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v3;
}
