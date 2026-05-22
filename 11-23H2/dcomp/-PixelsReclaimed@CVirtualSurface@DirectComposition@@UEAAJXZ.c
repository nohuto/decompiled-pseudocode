/*
 * XREFs of ?PixelsReclaimed@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x1800FDFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28 (-InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x18003B1D4 (-EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::PixelsReclaimed(DirectComposition::CVirtualSurface *this)
{
  *((_BYTE *)this + 52) &= ~4u;
  DirectComposition::CVirtualSurface::EnsurePrimitive((DirectComposition::CVirtualSurface *)((char *)this - 80), 0);
  DirectComposition::CDirtyNotifier::InvalidateListeners((__int64)this - 64, 0LL);
  return 0LL;
}
