/*
 * XREFs of ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x18013583A
 * Callers:
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x180122B90 (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDxHandleYUVBitmapRealization::AddDirtyRegion(
        CDxHandleYUVBitmapRealization *this,
        const struct CRegion *a2)
{
  CDxHandleYUVBitmapRealization::MarkFullDirty(this);
}
