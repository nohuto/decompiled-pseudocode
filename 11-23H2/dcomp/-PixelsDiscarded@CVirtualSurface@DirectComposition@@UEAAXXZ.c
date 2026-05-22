/*
 * XREFs of ?PixelsDiscarded@CVirtualSurface@DirectComposition@@UEAAXXZ @ 0x1800FDFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAllTilesAndClumps@CVirtualSurface@DirectComposition@@AEAAXXZ @ 0x18003C390 (-DestroyAllTilesAndClumps@CVirtualSurface@DirectComposition@@AEAAXXZ.c)
 */

void __fastcall DirectComposition::CVirtualSurface::PixelsDiscarded(DirectComposition::CVirtualSurface *this)
{
  DirectComposition::CVirtualSurface *v1; // rbx

  *((_BYTE *)this + 52) &= 0xF3u;
  v1 = (DirectComposition::CVirtualSurface *)((char *)this - 80);
  DirectComposition::CVirtualSurface::DestroyAllTilesAndClumps((DirectComposition::CVirtualSurface *)((char *)this - 80));
  DirectComposition::CVirtualSurface::EnsurePrimitive(v1, 0);
}
