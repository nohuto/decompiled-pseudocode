/*
 * XREFs of ?AddRef@CColorKeyBitmap@@UEAAKXZ @ 0x1800F7DA0
 * Callers:
 *     ?AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ @ 0x18011CEF0 (-AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@W7EAAKXZ @ 0x18011CF10 (-AddRef@CSystemMemoryBitmap@@W7EAAKXZ.c)
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x18011CF30 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WBI@EAAKXZ @ 0x18011CF50 (-AddRef@CSystemMemoryBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ @ 0x18011CF70 (-AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ @ 0x18011E4D0 (-AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@$4PPPPPPPM@HI@EAAKXZ @ 0x18011E550 (-AddRef@CBitmap@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?AddRef@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ @ 0x18011E5B0 (-AddRef@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ @ 0x18011E630 (-AddRef@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ.c)
 *     ?AddRef@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ @ 0x180123B90 (-AddRef@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ @ 0x180123C10 (-AddRef@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmap::AddRef(CColorKeyBitmap *this)
{
  return CMILRefCountImpl::AddReference((CColorKeyBitmap *)((char *)this - 8));
}
