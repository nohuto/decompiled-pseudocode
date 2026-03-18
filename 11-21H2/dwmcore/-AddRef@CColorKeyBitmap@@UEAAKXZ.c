/*
 * XREFs of ?AddRef@CColorKeyBitmap@@UEAAKXZ @ 0x1800EF240
 * Callers:
 *     ?AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ @ 0x180106A30 (-AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@W7EAAKXZ @ 0x180106A50 (-AddRef@CSystemMemoryBitmap@@W7EAAKXZ.c)
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x180106A70 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WBI@EAAKXZ @ 0x180106A90 (-AddRef@CSystemMemoryBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ @ 0x180106AB0 (-AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ @ 0x180107EB0 (-AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@$4PPPPPPPM@HI@EAAKXZ @ 0x180107F30 (-AddRef@CBitmap@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?AddRef@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ @ 0x180107F90 (-AddRef@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ @ 0x180108010 (-AddRef@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ.c)
 *     ?AddRef@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ @ 0x18010D390 (-AddRef@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ @ 0x18010D410 (-AddRef@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmap::AddRef(CColorKeyBitmap *this)
{
  return CMILRefCountImpl::AddReference((CColorKeyBitmap *)((char *)this - 8));
}
