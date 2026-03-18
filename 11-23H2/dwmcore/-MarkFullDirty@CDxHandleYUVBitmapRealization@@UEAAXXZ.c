/*
 * XREFs of ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802B40D0
 * Callers:
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x180123010 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18013583A (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800E0CD8 (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::MarkFullDirty(CDxHandleYUVBitmapRealization *this)
{
  CBitmapRealization::InvalidateDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 456), 0);
  CBitmapRealization::MarkFullDirty((CDxHandleYUVBitmapRealization *)((char *)this - 80));
}
