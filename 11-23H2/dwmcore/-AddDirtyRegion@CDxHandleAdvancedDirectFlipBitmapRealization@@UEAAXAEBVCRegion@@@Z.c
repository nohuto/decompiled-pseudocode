/*
 * XREFs of ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802B18DC
 * Callers:
 *     ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x180122690 (-AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1802B1F08 (-ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::AddDirtyRegion(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct CRegion *a2)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetOverdrawRegion((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 512));
  CBitmapRealization::AddDirtyRegion((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 136), a2);
}
