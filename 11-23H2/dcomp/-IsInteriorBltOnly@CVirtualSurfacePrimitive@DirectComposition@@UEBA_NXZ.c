/*
 * XREFs of ?IsInteriorBltOnly@CVirtualSurfacePrimitive@DirectComposition@@UEBA_NXZ @ 0x180089E50
 * Callers:
 *     ?GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089DE0 (-GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?IsInteriorBltOnly@CPrimitive@DirectComposition@@UEBA_NXZ @ 0x1800136A0 (-IsInteriorBltOnly@CPrimitive@DirectComposition@@UEBA_NXZ.c)
 */

bool __fastcall DirectComposition::CVirtualSurfacePrimitive::IsInteriorBltOnly(
        DirectComposition::CVirtualSurfacePrimitive *this)
{
  char v1; // bl

  v1 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 32) + 120LL) )
    return DirectComposition::CPrimitive::IsInteriorBltOnly(this);
  return v1;
}
