/*
 * XREFs of ?InternalSetOpacity@CAtlasedImage@@IEAAXK@Z @ 0x180005D4C
 * Callers:
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180005CF4 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180021080 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::InternalSetOpacity(CAtlasedImage *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 17) )
  {
    CAtlasedImage::SetDirtyFlags(this, 2u, 0x2000u);
    *((_DWORD *)this + 17) = a2;
  }
}
