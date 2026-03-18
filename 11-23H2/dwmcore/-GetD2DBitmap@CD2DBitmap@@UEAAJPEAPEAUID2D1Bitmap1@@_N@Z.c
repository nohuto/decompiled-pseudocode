/*
 * XREFs of ?GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800D9630
 * Callers:
 *     ?GetD2DBitmap@CD2DBitmap@@$4PPPPPPPM@A@EAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011FE30 (-GetD2DBitmap@CD2DBitmap@@$4PPPPPPPM@A@EAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CD2DBitmap@@$4PPPPPPPM@CI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801200B0 (-GetD2DBitmap@CD2DBitmap@@$4PPPPPPPM@CI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CD2DBitmap@@$4PPPPPPPM@FI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x180123390 (-GetD2DBitmap@CD2DBitmap@@$4PPPPPPPM@FI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::GetD2DBitmap(CD2DBitmap *this, struct ID2D1Bitmap1 **a2, bool a3)
{
  return CD2DBitmap::GetBitmap((CD2DBitmap *)((char *)this - 240), a2, a3);
}
