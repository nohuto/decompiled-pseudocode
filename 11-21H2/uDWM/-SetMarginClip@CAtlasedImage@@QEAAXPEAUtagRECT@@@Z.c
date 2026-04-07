/*
 * XREFs of ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180005EEC
 * Callers:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180024008 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180021080 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetMarginClip(CAtlasedImage *this, struct tagRECT *a2)
{
  if ( a2 )
  {
    if ( !*((_BYTE *)this + 116) || !EqualRect((const RECT *)((char *)this + 100), a2) )
    {
      *((_BYTE *)this + 116) = 1;
      *(struct tagRECT *)((char *)this + 100) = *a2;
LABEL_4:
      CAtlasedImage::SetDirtyFlags(this, 1u, 0x2000u);
    }
  }
  else if ( *((_BYTE *)this + 116) )
  {
    *((_BYTE *)this + 116) = 0;
    goto LABEL_4;
  }
}
