/*
 * XREFs of ?QueryInterface@CCompoundBitmapLock@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E620
 * Callers:
 *     ?QueryInterface@CCompressedSourceBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066840 (-QueryInterface@CCompressedSourceBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066860 (-QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066880 (-QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800668A0 (-QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800668C0 (-QueryInterface@CCompressedSourceBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066A40 (-QueryInterface@CCompressedSourceBitmap@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066A60 (-QueryInterface@CCompressedSourceBitmap@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066C00 (-QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066C20 (-QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompoundBitmapLock::QueryInterface(CCompoundBitmapLock *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface(this, a2, a3);
}
