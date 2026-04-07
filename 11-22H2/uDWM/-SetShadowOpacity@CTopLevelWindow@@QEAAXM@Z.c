/*
 * XREFs of ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180007A50
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800074D8 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800AC860 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 */

void __fastcall CTopLevelWindow::SetShadowOpacity(CTopLevelWindow *this, float a2)
{
  CAtlasedImage *v3; // rcx
  CAtlasedImage *v4; // rcx
  CAtlasedImage *v5; // rcx
  CAtlasedImage *v6; // rcx

  v3 = (CAtlasedImage *)*((_QWORD *)this + 61);
  if ( v3 )
    CAtlasedImage::SetOpacity(v3, a2);
  v4 = (CAtlasedImage *)*((_QWORD *)this + 62);
  if ( v4 )
    CAtlasedImage::SetOpacity(v4, a2);
  v5 = (CAtlasedImage *)*((_QWORD *)this + 63);
  if ( v5 )
    CAtlasedImage::SetOpacity(v5, a2);
  v6 = (CAtlasedImage *)*((_QWORD *)this + 64);
  if ( v6 )
    CAtlasedImage::SetOpacity(v6, a2);
}
