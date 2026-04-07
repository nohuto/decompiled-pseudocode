/*
 * XREFs of ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800AC7E0
 * Callers:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18002DD30 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800A1C00 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000AE54 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetInsetFromParent(struct _MARGINS *this, const struct _MARGINS *a2)
{
  if ( this[2].cxLeftWidth != a2->cxLeftWidth
    || this[2].cxRightWidth != a2->cxRightWidth
    || this[2].cyTopHeight != a2->cyTopHeight
    || this[2].cyBottomHeight != a2->cyBottomHeight )
  {
    this[2] = *a2;
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)this, 1, 0x1000u);
  }
}
