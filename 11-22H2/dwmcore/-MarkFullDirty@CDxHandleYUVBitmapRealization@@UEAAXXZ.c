/*
 * XREFs of ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802B46C0
 * Callers:
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x180123340 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180135BDA (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800E7D18 (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::MarkFullDirty(CDxHandleYUVBitmapRealization *this)
{
  CBitmapRealization::InvalidateDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 456), 0);
  CBitmapRealization::MarkFullDirty((CDxHandleYUVBitmapRealization *)((char *)this - 80));
}
