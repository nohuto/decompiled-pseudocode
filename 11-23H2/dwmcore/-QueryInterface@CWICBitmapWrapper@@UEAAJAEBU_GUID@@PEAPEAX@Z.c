/*
 * XREFs of ?QueryInterface@CWICBitmapWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EFB30
 * Callers:
 *     ?QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D010 (-QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D030 (-QueryInterface@CSystemMemoryBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D050 (-QueryInterface@CSystemMemoryBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D070 (-QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D090 (-QueryInterface@CSystemMemoryBitmap@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011E510 (-QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@$4PPPPPPPM@HI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011E570 (-QueryInterface@CBitmap@@$4PPPPPPPM@HI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011E5F0 (-QueryInterface@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::QueryInterface(CWICBitmapWrapper *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IBitmapSource>::InternalQueryInterface((char *)this - 24, a2, a3);
}
