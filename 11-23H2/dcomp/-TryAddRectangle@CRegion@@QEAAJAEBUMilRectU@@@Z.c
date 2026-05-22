/*
 * XREFs of ?TryAddRectangle@CRegion@@QEAAJAEBUMilRectU@@@Z @ 0x18009376C
 * Callers:
 *     ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474 (-EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z.c)
 *     ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600 (-TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180038788 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A3CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::TryAddRectangle(const struct FastRegion::Internal::CRgnData **this, struct tagRECT *a2)
{
  struct tagRECT v4; // [rsp+20h] [rbp-78h] BYREF
  void *v5[10]; // [rsp+30h] [rbp-68h] BYREF

  v4 = *a2;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v5, &v4);
  LODWORD(this) = FastRegion::CRegion::Union(this, (const struct FastRegion::Internal::CRgnData **)v5);
  FastRegion::CRegion::FreeMemory(v5);
  return (unsigned int)this;
}
