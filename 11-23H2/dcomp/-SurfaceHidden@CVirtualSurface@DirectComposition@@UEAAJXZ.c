/*
 * XREFs of ?SurfaceHidden@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x1800FE640
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28 (-InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?RemoveAndReleasePrimitive@CVirtualSurface@DirectComposition@@AEAA_NXZ @ 0x18003C1F8 (-RemoveAndReleasePrimitive@CVirtualSurface@DirectComposition@@AEAA_NXZ.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::SurfaceHidden(DirectComposition::CVirtualSurface *this)
{
  *((_BYTE *)this + 52) |= 4u;
  DirectComposition::CVirtualSurface::RemoveAndReleasePrimitive((DirectComposition::CVirtualSurface *)((char *)this - 80));
  DirectComposition::CDirtyNotifier::InvalidateListeners((__int64)this - 64, 0LL);
  return 0LL;
}
