/*
 * XREFs of ?CopyRegionToClump@CTileClump@DirectComposition@@QEAAJPEAV12@PEAUID3D11Texture2D@@AEBVCRegion@@K@Z @ 0x1800054F4
 * Callers:
 *     ?PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileClump@2@@Z @ 0x1800050F8 (-PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileC.c)
 * Callees:
 *     ?CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z @ 0x1800055D0 (-CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z.c)
 *     ?RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z @ 0x1800380E4 (-RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A3CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?RecoverValidRegions@CVirtualSurface@DirectComposition@@QEAAXXZ @ 0x1800FE280 (-RecoverValidRegions@CVirtualSurface@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CTileClump::CopyRegionToClump(
        DirectComposition::CVirtualSurface **this,
        struct DirectComposition::CTileClump *a2,
        struct ID3D11Resource *a3,
        const struct CRegion *a4,
        unsigned int a5)
{
  _DWORD *v8; // r11
  int v9; // ebx

  v8 = *(_DWORD **)(*((_QWORD *)a2 + 9) + 16LL);
  v9 = DirectComposition::CTileClump::CopyRegionToSurface(
         (DirectComposition::CTileClump *)this,
         a3,
         *((_QWORD *)a2 + 7) - (v8[22] & 1) - v8[18],
         *((_DWORD *)a2 + 15)
       + HIDWORD(*((_QWORD *)a2 + 7))
       - ((v8[22] >> 2) & 1)
       - HIDWORD(*((_QWORD *)a2 + 7))
       - v8[19],
         a4,
         1);
  if ( v9 < 0
    || (*((_BYTE *)a2 + 88) = 1,
        v9 = FastRegion::CRegion::Union((struct DirectComposition::CTileClump *)((char *)a2 + 96), a4),
        v9 < 0)
    || (v9 = DirectComposition::CTileClump::RemoveFromValidRegion((DirectComposition::CTileClump *)this, a4, a5), v9 < 0) )
  {
    DirectComposition::CVirtualSurface::RecoverValidRegions(this[6]);
  }
  return (unsigned int)v9;
}
