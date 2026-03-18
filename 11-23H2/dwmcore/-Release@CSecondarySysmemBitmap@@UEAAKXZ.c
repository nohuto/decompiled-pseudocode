/*
 * XREFs of ?Release@CSecondarySysmemBitmap@@UEAAKXZ @ 0x1800F82D0
 * Callers:
 *     ?Release@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ @ 0x180123BF0 (-Release@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ @ 0x180123C70 (-Release@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::Release(CSecondarySysmemBitmap *this)
{
  return CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease((char *)this - 24);
}
