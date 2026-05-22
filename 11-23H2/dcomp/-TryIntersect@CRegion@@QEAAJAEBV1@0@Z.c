/*
 * XREFs of ?TryIntersect@CRegion@@QEAAJAEBV1@0@Z @ 0x1800054BC
 * Callers:
 *     ?PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileClump@2@@Z @ 0x1800050F8 (-PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileC.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z @ 0x1800FD9C0 (-CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z.c)
 * Callees:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800059D0 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A518 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 */

__int64 __fastcall CRegion::TryIntersect(CRegion *this, const struct CRegion *a2, const struct CRegion *a3)
{
  __int64 result; // rax

  result = FastRegion::CRegion::Copy(this, a2);
  if ( (int)result >= 0 )
    return FastRegion::CRegion::Intersect(this, a3);
  return result;
}
