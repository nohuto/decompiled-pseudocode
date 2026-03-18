/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800EDC68
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180027EE8 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?SetDirtyFromAccumulation@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@Z @ 0x1801C6574 (-SetDirtyFromAccumulation@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@.c)
 * Callees:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18002C9D0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18002FC00 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DAA70 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1800EDD1C (-GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 */

void __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  HGDIOBJ ho; // [rsp+20h] [rbp-78h] BYREF
  int *v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+38h] [rbp-60h] BYREF

  ho = 0LL;
  if ( (int)CRedirectedGDISurface::GetDirtyRegionFromAccum(*((CRedirectedGDISurface **)this + 15), (HRGN *)&ho) >= 0 )
  {
    if ( !ho )
      return;
    v4 = 0;
    v3 = &v4;
    CRegion::SetHRGN((CRegion *)&v3, (HRGN)ho);
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v3, *((_BYTE *)this + 144));
    *((_BYTE *)this + 144) = 0;
    FastRegion::CRegion::FreeMemory((void **)&v3);
  }
  if ( ho )
    DeleteObject(ho);
}
