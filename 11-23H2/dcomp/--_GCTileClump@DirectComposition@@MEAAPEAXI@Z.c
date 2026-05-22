/*
 * XREFs of ??_GCTileClump@DirectComposition@@MEAAPEAXI@Z @ 0x180036E70
 * Callers:
 *     ?Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAV12@@Z @ 0x1800372A4 (-Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV-$TMilR.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CTileClump@DirectComposition@@MEAA@XZ @ 0x180036EB4 (--1CTileClump@DirectComposition@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CTileClump *__fastcall DirectComposition::CTileClump::`scalar deleting destructor'(
        DirectComposition::CTileClump *this,
        char a2)
{
  DirectComposition::CTileClump::~CTileClump(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x1F0uLL);
    else
      operator delete(this);
  }
  return this;
}
