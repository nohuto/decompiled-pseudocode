/*
 * XREFs of ?Release@CSystemMemoryBitmap@@UEAAKXZ @ 0x1800E62A0
 * Callers:
 *     ?Release@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ @ 0x180106BF0 (-Release@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ.c)
 *     ?Release@CBitmap@@W7EAAKXZ @ 0x180106C10 (-Release@CBitmap@@W7EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x180106C30 (-Release@CWICBitmapWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x180106C50 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WIA@EAAKXZ @ 0x180106C70 (-Release@CWICBitmapWrapper@@WIA@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ @ 0x180107F10 (-Release@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ.c)
 *     ?Release@CBitmap@@$4PPPPPPPM@HI@EAAKXZ @ 0x180107F70 (-Release@CBitmap@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ @ 0x180107FF0 (-Release@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::Release(CSystemMemoryBitmap *this)
{
  return CMILRefCountBaseT<IBitmapSource>::InternalRelease((char *)this - 24);
}
