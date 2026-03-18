/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802B3564
 * Callers:
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x180122E20 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800E7CEC (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800E7D3C (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CDxHandleStereoBitmapRealization *this)
{
  CBitmapRealization::MarkFullDirty((CDxHandleStereoBitmapRealization *)((char *)this - 192));
  if ( *((_QWORD *)this - 21) )
    CD2DBitmapCache::MarkFullInvalid((CDxHandleStereoBitmapRealization *)((char *)this - 160));
}
