/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802B2F74
 * Callers:
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x180122AF0 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800E0CAC (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800E0CFC (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CDxHandleStereoBitmapRealization *this)
{
  CBitmapRealization::MarkFullDirty((CDxHandleStereoBitmapRealization *)((char *)this - 192));
  if ( *((_QWORD *)this - 21) )
    CD2DBitmapCache::MarkFullInvalid((CDxHandleStereoBitmapRealization *)((char *)this - 160));
}
