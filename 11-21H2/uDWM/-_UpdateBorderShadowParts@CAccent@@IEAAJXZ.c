/*
 * XREFs of ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180068896
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180018C60 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18004BDA0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180005C30 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18000E4C8 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x18000EA18 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180021080 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x1800972F0 (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180098650 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x1800A8134 (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x1800E5210 (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowParts(CAtlasedRectsVisual **this)
{
  CAtlasedImage **v1; // r15
  struct tagSIZE *WindowFramePart; // rbp
  unsigned int v4; // r14d
  struct CAtlasedImage *v5; // r13
  unsigned int v6; // esi
  struct CAtlasedImage **v7; // rdi
  struct CTopLevelWindow::WindowFrame *v8; // r12
  int v9; // eax
  int v10; // eax
  struct CAtlasedImage *v11; // rcx
  CAtlasedImage *v12; // rcx
  CAtlasedImage *v13; // rcx
  CAtlasedImage *v14; // rcx
  CAtlasedImage *v15; // rcx
  CAtlasedImage *v16; // rcx
  CAtlasedImage *v17; // rcx
  CAtlasedImage *v18; // rcx
  CAtlasedImage *v19; // rcx

  v1 = this + 56;
  WindowFramePart = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = this + 56;
  v8 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  do
  {
    if ( !*v7 )
    {
      v9 = CAtlasedImage::Create(v7);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x170u);
        return v4;
      }
      *((_DWORD *)*v7 + 30) = v6;
      v10 = CAtlasedRectsVisual::InsertAfterAtlasImage(this[54], *v7, v5);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x177u);
        return v4;
      }
    }
    if ( v8 )
      WindowFramePart = (struct tagSIZE *)CTopLevelWindow::GetWindowFramePart(v8, v6);
    CAtlasedImage::SetBitmapSource(*v7, (struct CBitmapSource *)WindowFramePart);
    if ( (v6 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17))
      && WindowFramePart
      && v6 - 9 > 8
      && CAccent::_IsShadowPartApplicableFromFlags((CAccent *)this, v6) )
    {
      CAtlasedImage::SetSize(*v7, WindowFramePart + 3);
      v5 = *v7;
      WindowFramePart = 0LL;
    }
    else
    {
      v11 = *v7;
      WindowFramePart = 0LL;
      if ( *((_QWORD *)*v7 + 10) )
      {
        CAtlasedRectsVisual::RemoveAtlasImage(*((CAtlasedRectsVisual **)v11 + 10), *v7);
        v11 = *v7;
      }
      if ( v11 )
      {
        CBaseObject::Release(v11);
        *v7 = 0LL;
      }
    }
    ++v6;
    ++v7;
  }
  while ( v6 < 0x16 );
  v12 = *v1;
  if ( *v1 && *((_DWORD *)v12 + 16) )
  {
    *((_DWORD *)v12 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v12, 1, 0x2000u);
  }
  v13 = this[57];
  if ( v13 && *((_DWORD *)v13 + 16) )
  {
    *((_DWORD *)v13 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v13, 1, 0x2000u);
  }
  v14 = this[58];
  if ( v14 && *((_DWORD *)v14 + 16) )
  {
    *((_DWORD *)v14 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v14, 1, 0x2000u);
  }
  v15 = this[59];
  if ( v15 && *((_DWORD *)v15 + 16) )
  {
    *((_DWORD *)v15 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v15, 1, 0x2000u);
  }
  v16 = this[60];
  if ( v16 && *((_DWORD *)v16 + 16) )
  {
    *((_DWORD *)v16 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v16, 1, 0x2000u);
  }
  v17 = this[61];
  if ( v17 && *((_DWORD *)v17 + 16) )
  {
    *((_DWORD *)v17 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v17, 1, 0x2000u);
  }
  v18 = this[62];
  if ( v18 && *((_DWORD *)v18 + 16) )
  {
    *((_DWORD *)v18 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v18, 1, 0x2000u);
  }
  v19 = this[63];
  if ( v19 && *((_DWORD *)v19 + 16) )
  {
    *((_DWORD *)v19 + 16) = 0;
    CAtlasedImage::SetDirtyFlags(v19, 1, 0x2000u);
  }
  return v4;
}
