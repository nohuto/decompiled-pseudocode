/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180057A58 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000AE54 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18001490C (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180019650 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001A708 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18001A784 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x18001A7C8 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18001AB50 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18001B450 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001B75C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18001B944 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180023214 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180023280 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180023808 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180023B04 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x180023CC0 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180023DD4 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x180023EB0 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18004722C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x180051B54 (-GetShadowStyle@CTopLevelWindow@@AEAA-AW4ShadowStyle@CWindowBorder@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x180053FC4 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800541A4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180054C88 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180055174 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18005D948 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x18006BAE8 (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x18006D9BA (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x18009F134 (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800AC788 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800AC8B0 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800E5580 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // rcx
  float v4; // xmm6_4
  int EffectiveCornerStyle; // eax
  int v6; // ebx
  __int64 v7; // rbx
  struct CVisual *v8; // rdx
  int v9; // ebx
  char v10; // di
  char v11; // al
  __int64 v12; // rcx
  struct CTopLevelWindow::WindowFrame *v13; // r12
  bool v14; // r13
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // r8
  bool v19; // bp
  CBaseObject **v20; // rbx
  unsigned int i; // edi
  struct tagSIZE *WindowFramePart; // rsi
  CBaseObject *v23; // rdx
  unsigned __int64 *v24; // rbx
  struct CVisual *v25; // rdx
  int inserted; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  bool v32; // zf
  CBaseObject *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v38; // r14
  int ShadowStyle; // ebp
  BOOL v40; // esi
  struct _D3DCOLORVALUE *RoundedBorderColor; // rdi
  int v42; // ebx
  struct tagRECT *BorderRect; // rax
  __int64 v44; // r8
  int v45; // eax
  unsigned int v46; // ebx
  int BorderStructure; // eax
  unsigned int v48; // ebx
  char v49; // di
  int v50; // r10d
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  struct CAtlasedImage *v58; // r8
  CAtlasedRectsVisual *v59; // rcx
  CAtlasedImage *v60; // r9
  CAtlasedImage *v61; // rcx
  CAtlasedImage *v62; // rcx
  CAtlasedImage *v63; // rcx
  CAtlasedImage *v64; // rcx
  CAtlasedImage *v65; // rcx
  CAtlasedImage *v66; // rcx
  CAtlasedImage *v67; // rcx
  CAtlasedImage *v68; // rcx
  CAtlasedImage *v69; // rcx
  CAtlasedImage *v70; // rcx
  CAtlasedImage *v71; // rcx
  CAtlasedImage *v72; // rcx
  CAtlasedImage *v73; // rcx
  CAtlasedImage *v74; // rcx
  CAtlasedImage *v75; // rcx
  CAtlasedImage *v76; // rcx
  CAtlasedImage *v77; // rcx
  CAtlasedImage *v78; // rcx
  CAtlasedImage *v79; // rcx
  CAtlasedImage *v80; // rcx
  CAtlasedImage *v81; // rcx
  CAtlasedImage *v82; // rcx
  CAtlasedImage *v83; // rcx
  CAtlasedImage *v84; // rcx
  CAtlasedImage *v85; // rcx
  CAtlasedImage *v86; // rcx
  CAtlasedImage *v87; // rcx
  CAtlasedImage *v88; // rcx
  CAtlasedImage *v89; // rcx
  int HolographicSlate; // eax
  unsigned __int64 v91; // rdx
  VisualCollection *v92; // rcx
  CBaseObject *v93; // rcx
  int v94; // [rsp+20h] [rbp-98h]
  int v95; // [rsp+20h] [rbp-98h]
  unsigned int v96; // [rsp+20h] [rbp-98h]
  struct _D3DCOLORVALUE v97; // [rsp+40h] [rbp-78h] BYREF
  struct tagRECT v98; // [rsp+50h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = 0;
  if ( !(unsigned __int8)((__int64 (*)(void))IsOpenThemeDataPresent)() )
    return v2;
  if ( *((_BYTE *)this + 864) )
    goto LABEL_11;
  v4 = 0.0;
  if ( (*((_BYTE *)this + 624) & 0x20) == 0 && (*(_DWORD *)(*((_QWORD *)this + 94) + 128LL) & 0x1000) == 0 )
  {
    EffectiveCornerStyle = CTopLevelWindow::GetEffectiveCornerStyle((__int64)this);
    v3 = (unsigned int)EffectiveCornerStyle;
    if ( EffectiveCornerStyle >= 2 )
    {
      v3 = (unsigned int)(EffectiveCornerStyle - 2);
      if ( EffectiveCornerStyle == 2 )
        goto LABEL_49;
      v3 = (unsigned int)(EffectiveCornerStyle - 3);
      if ( EffectiveCornerStyle == 3 )
      {
        v4 = FLOAT_4_0;
        goto LABEL_6;
      }
      if ( EffectiveCornerStyle == 4 )
LABEL_49:
        v4 = FLOAT_8_0;
    }
  }
LABEL_6:
  v6 = *((_DWORD *)this + 156);
  if ( (v6 & 0x20) != 0 || (unsigned __int8)IsOpenThemeDataPresent(v3) && (v6 & 6) != 0 || v4 > 0.0 )
  {
    v38 = *((_QWORD *)this + 34);
    ShadowStyle = CTopLevelWindow::GetShadowStyle(this);
    v40 = (*(_BYTE *)(*((_QWORD *)this + 94) + 673LL) & 4) != 0;
    RoundedBorderColor = CTopLevelWindow::GetRoundedBorderColor(this, &v97);
    v42 = *(_DWORD *)(*((_QWORD *)this + 94) + 348LL);
    BorderRect = CTopLevelWindow::GetBorderRect(this, &v98, 0);
    v45 = CWindowBorder::SetBorderParameters(v38, BorderRect, v44, v42, &RoundedBorderColor->r, v40, ShadowStyle);
    v46 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8CE,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v45,
        v94);
      return v46;
    }
    v3 = *((_QWORD *)this + 34);
    if ( !*(_QWORD *)(v3 + 248) )
    {
      BorderStructure = CWindowBorder::CreateBorderStructure((CWindowBorder *)v3);
      v48 = BorderStructure;
      if ( BorderStructure < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
          (const char *)(unsigned int)BorderStructure,
          v94);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8CF,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)v48,
          v95);
        return v48;
      }
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 34);
    v8 = *(struct CVisual **)(v7 + 248);
    if ( v8 )
    {
      VisualCollection::Remove((VisualCollection *)(v7 + 32), v8);
      if ( *(_QWORD *)(v7 + 264) )
      {
        v52 = *(_QWORD *)(v7 + 256);
        if ( v52 )
        {
          CVisualProxy::SetClip(*(CVisualProxy **)(v52 + 16), 0LL);
          CVisual::SetIgnoreClipForHitTest(*(CVisual **)(v7 + 256), 0, v53);
        }
      }
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v7 + 248);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7 + 272);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7 + 280);
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v7 + 264);
      *(struct _D3DCOLORVALUE *)&v97.r = 0LL;
      std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(v7 + 288, &v97);
      if ( *(_QWORD *)&v97.b )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v97.b);
      CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)v7);
    }
  }
LABEL_11:
  v9 = *((_DWORD *)this + 156);
  v10 = *(_BYTE *)(*((_QWORD *)this + 94) + 675LL);
  v11 = IsOpenThemeDataPresent(v3);
  v12 = 3LL;
  if ( v11 && (v9 & 6) != 0 )
  {
    v49 = v10 & 0x10;
    if ( (v9 & 0x20) != 0 )
    {
      if ( v49 || (v9 & 0x40) != 0 )
      {
        v13 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16);
        goto LABEL_14;
      }
    }
    else if ( v49 || (v9 & 0x40) != 0 )
    {
      v12 = 0LL;
      if ( (v9 & 2) != 0 )
        v12 = 4LL;
    }
    else
    {
      v12 = 1LL;
      if ( (v9 & 2) != 0 )
        v12 = 5LL;
    }
    v13 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * v12);
  }
  else
  {
    v13 = 0LL;
  }
LABEL_14:
  v14 = (*((_DWORD *)this + 156) & 0x20000) != 0;
  v15 = (__int64 *)*((_QWORD *)this + 36);
  v16 = *((unsigned __int8 *)v15 + 92);
  if ( v14 != (v16 & 1) )
  {
    v56 = *v15;
    *((_BYTE *)v15 + 92) = v14 | v16 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v56 + 24))(v15, 16LL);
  }
  v17 = *((_QWORD *)this + 74);
  v18 = *(_BYTE *)(v17 + 92);
  if ( v14 != (v18 & 1) )
  {
    v57 = *(_QWORD *)v17;
    *(_BYTE *)(v17 + 92) = v14 | v18 & 0xFE;
    (*(void (__fastcall **)(__int64, __int64))(v57 + 24))(v17, 16LL);
  }
  v19 = v13 && (unsigned __int8)CDesktopManager::IsHighContrastMode(v17, v16);
  *(_QWORD *)&v97.r = 0LL;
  v20 = (CBaseObject **)((char *)this + 344);
  for ( i = 0; i < 0x16; ++i )
  {
    WindowFramePart = 0LL;
    if ( v19 )
    {
      if ( i - 18 <= 3 )
      {
        v23 = *v20;
LABEL_23:
        if ( v23 )
        {
          v59 = (CAtlasedRectsVisual *)*((_QWORD *)v23 + 10);
          if ( v59 )
            CAtlasedRectsVisual::RemoveAtlasImage(v59, v23);
          if ( *v20 )
          {
            CBaseObject::Release(*v20);
            *v20 = 0LL;
          }
        }
        goto LABEL_24;
      }
      WindowFramePart = (struct tagSIZE *)CTopLevelWindow::GetWindowFramePart(v13, i);
    }
    v23 = *v20;
    if ( !WindowFramePart )
      goto LABEL_23;
    if ( !v23 )
    {
      inserted = CAtlasedImage::Create(v20);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v96 = 2299;
        goto LABEL_172;
      }
      v58 = *(struct CAtlasedImage **)&v97.r;
      *((_DWORD *)*v20 + 30) = i;
      inserted = CAtlasedRectsVisual::InsertAfterAtlasImage(*((CAtlasedRectsVisual **)this + 38), *v20, v58);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v96 = 2304;
        goto LABEL_172;
      }
    }
    CAtlasedImage::SetBitmapSource(*v20, (struct CBitmapSource *)WindowFramePart);
    CAtlasedImage::SetSize(*v20, WindowFramePart + 3);
    *(_QWORD *)&v97.r = *v20;
LABEL_24:
    ++v20;
  }
  if ( !v19 )
    goto LABEL_26;
  if ( CTopLevelWindow::IsSheetOfGlass(this) )
  {
    if ( *((_DWORD *)v60 + 16) != 10 )
    {
      *((_DWORD *)v60 + 16) = 10;
      CAtlasedImage::SetDirtyFlags(v60, 1, 0x2000u);
    }
    v61 = (CAtlasedImage *)*((_QWORD *)this + 44);
    if ( *((_DWORD *)v61 + 16) != 8 )
    {
      *((_DWORD *)v61 + 16) = 8;
      CAtlasedImage::SetDirtyFlags(v61, 1, 0x2000u);
    }
    v62 = (CAtlasedImage *)*((_QWORD *)this + 45);
    if ( *((_DWORD *)v62 + 16) != 9 )
    {
      *((_DWORD *)v62 + 16) = 9;
      CAtlasedImage::SetDirtyFlags(v62, 1, 0x2000u);
    }
    v63 = (CAtlasedImage *)*((_QWORD *)this + 46);
    if ( *((_DWORD *)v63 + 16) != 2 )
    {
      *((_DWORD *)v63 + 16) = 2;
      CAtlasedImage::SetDirtyFlags(v63, 1, 0x2000u);
    }
    v64 = (CAtlasedImage *)*((_QWORD *)this + 47);
    if ( *((_DWORD *)v64 + 16) != 1 )
    {
      *((_DWORD *)v64 + 16) = 1;
      CAtlasedImage::SetDirtyFlags(v64, 1, 0x2000u);
    }
    v65 = (CAtlasedImage *)*((_QWORD *)this + 48);
    if ( *((_DWORD *)v65 + 16) != 6 )
    {
      *((_DWORD *)v65 + 16) = 6;
      CAtlasedImage::SetDirtyFlags(v65, 1, 0x2000u);
    }
    v66 = (CAtlasedImage *)*((_QWORD *)this + 49);
    if ( *((_DWORD *)v66 + 16) != 4 )
    {
      *((_DWORD *)v66 + 16) = 4;
      CAtlasedImage::SetDirtyFlags(v66, 1, 0x2000u);
    }
    v67 = (CAtlasedImage *)*((_QWORD *)this + 50);
    if ( *((_DWORD *)v67 + 16) != 5 )
    {
      *((_DWORD *)v67 + 16) = 5;
      CAtlasedImage::SetDirtyFlags(v67, 1, 0x2000u);
    }
    v68 = (CAtlasedImage *)*((_QWORD *)this + 52);
    if ( *((_DWORD *)v68 + 16) != 10 )
    {
      *((_DWORD *)v68 + 16) = 10;
      CAtlasedImage::SetDirtyFlags(v68, 1, 0x2000u);
    }
    v69 = (CAtlasedImage *)*((_QWORD *)this + 53);
    if ( *((_DWORD *)v69 + 16) != 8 )
    {
      *((_DWORD *)v69 + 16) = 8;
      CAtlasedImage::SetDirtyFlags(v69, 1, 0x2000u);
    }
    v70 = (CAtlasedImage *)*((_QWORD *)this + 54);
    if ( *((_DWORD *)v70 + 16) != 9 )
    {
      *((_DWORD *)v70 + 16) = 9;
      CAtlasedImage::SetDirtyFlags(v70, 1, 0x2000u);
    }
    v71 = (CAtlasedImage *)*((_QWORD *)this + 55);
    if ( *((_DWORD *)v71 + 16) != 2 )
    {
      *((_DWORD *)v71 + 16) = 2;
      CAtlasedImage::SetDirtyFlags(v71, 1, 0x2000u);
    }
    v72 = (CAtlasedImage *)*((_QWORD *)this + 56);
    if ( *((_DWORD *)v72 + 16) != 1 )
    {
      *((_DWORD *)v72 + 16) = 1;
      CAtlasedImage::SetDirtyFlags(v72, 1, 0x2000u);
    }
    v73 = (CAtlasedImage *)*((_QWORD *)this + 57);
    if ( *((_DWORD *)v73 + 16) != 6 )
    {
      *((_DWORD *)v73 + 16) = 6;
      CAtlasedImage::SetDirtyFlags(v73, 1, 0x2000u);
    }
    v74 = (CAtlasedImage *)*((_QWORD *)this + 58);
    if ( *((_DWORD *)v74 + 16) != 4 )
    {
      *((_DWORD *)v74 + 16) = 4;
      CAtlasedImage::SetDirtyFlags(v74, 1, 0x2000u);
    }
    v75 = (CAtlasedImage *)*((_QWORD *)this + 59);
    if ( *((_DWORD *)v75 + 16) != 5 )
    {
      *((_DWORD *)v75 + 16) = 5;
      goto LABEL_159;
    }
  }
  else
  {
    if ( *((_DWORD *)v60 + 16) )
    {
      *((_DWORD *)v60 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v60, 1, 0x2000u);
    }
    v76 = (CAtlasedImage *)*((_QWORD *)this + 44);
    if ( *((_DWORD *)v76 + 16) )
    {
      *((_DWORD *)v76 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v76, 1, 0x2000u);
    }
    v77 = (CAtlasedImage *)*((_QWORD *)this + 45);
    if ( *((_DWORD *)v77 + 16) )
    {
      *((_DWORD *)v77 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v77, 1, 0x2000u);
    }
    v78 = (CAtlasedImage *)*((_QWORD *)this + 46);
    if ( *((_DWORD *)v78 + 16) )
    {
      *((_DWORD *)v78 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v78, 1, 0x2000u);
    }
    v79 = (CAtlasedImage *)*((_QWORD *)this + 47);
    if ( *((_DWORD *)v79 + 16) )
    {
      *((_DWORD *)v79 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v79, 1, 0x2000u);
    }
    v80 = (CAtlasedImage *)*((_QWORD *)this + 48);
    if ( *((_DWORD *)v80 + 16) )
    {
      *((_DWORD *)v80 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v80, 1, 0x2000u);
    }
    v81 = (CAtlasedImage *)*((_QWORD *)this + 49);
    if ( *((_DWORD *)v81 + 16) )
    {
      *((_DWORD *)v81 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v81, 1, 0x2000u);
    }
    v82 = (CAtlasedImage *)*((_QWORD *)this + 50);
    if ( *((_DWORD *)v82 + 16) )
    {
      *((_DWORD *)v82 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v82, 1, 0x2000u);
    }
    v83 = (CAtlasedImage *)*((_QWORD *)this + 52);
    if ( *((_DWORD *)v83 + 16) )
    {
      *((_DWORD *)v83 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v83, 1, 0x2000u);
    }
    v84 = (CAtlasedImage *)*((_QWORD *)this + 53);
    if ( *((_DWORD *)v84 + 16) )
    {
      *((_DWORD *)v84 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v84, 1, 0x2000u);
    }
    v85 = (CAtlasedImage *)*((_QWORD *)this + 54);
    if ( *((_DWORD *)v85 + 16) )
    {
      *((_DWORD *)v85 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v85, 1, 0x2000u);
    }
    v86 = (CAtlasedImage *)*((_QWORD *)this + 55);
    if ( *((_DWORD *)v86 + 16) )
    {
      *((_DWORD *)v86 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v86, 1, 0x2000u);
    }
    v87 = (CAtlasedImage *)*((_QWORD *)this + 56);
    if ( *((_DWORD *)v87 + 16) )
    {
      *((_DWORD *)v87 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v87, 1, 0x2000u);
    }
    v88 = (CAtlasedImage *)*((_QWORD *)this + 57);
    if ( *((_DWORD *)v88 + 16) )
    {
      *((_DWORD *)v88 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v88, 1, 0x2000u);
    }
    v89 = (CAtlasedImage *)*((_QWORD *)this + 58);
    if ( *((_DWORD *)v89 + 16) )
    {
      *((_DWORD *)v89 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v89, 1, 0x2000u);
    }
    v75 = (CAtlasedImage *)*((_QWORD *)this + 59);
    if ( *((_DWORD *)v75 + 16) )
    {
      *((_DWORD *)v75 + 16) = 0;
LABEL_159:
      CAtlasedImage::SetDirtyFlags(v75, 1, 0x2000u);
    }
  }
LABEL_26:
  v24 = (unsigned __int64 *)((char *)this + 576);
  if ( (*((_DWORD *)this + 156) & 0x10080) != 0 )
  {
    if ( !*v24 )
    {
      inserted = CImage::Create((struct CImage **)this + 72);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v96 = 2366;
        goto LABEL_172;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
                   *v24,
                   *((struct CVisual **)this + 38),
                   1u,
                   v94);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v96 = 2367;
        goto LABEL_172;
      }
      v51 = *((_DWORD *)this + 22);
      if ( (v51 & 0x20000) == 0 )
      {
        *((_DWORD *)this + 22) = v51 | 0x20000;
        CVisual::PropagateDirtyChildren(this);
      }
    }
    v50 = 2;
    if ( *((char *)this + 624) < 0 )
      v50 = 3;
    *(_DWORD *)(*v24 + 200) = v50;
    CVisual::SetRTLMirror((CVisual *)*v24, v14);
    goto LABEL_28;
  }
  v25 = (struct CVisual *)*v24;
  if ( *v24 )
  {
    v54 = *((_QWORD *)v25 + 3);
    if ( v54 )
    {
      inserted = VisualCollection::Remove((VisualCollection *)(v54 + 32), v25);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v96 = 2382;
        goto LABEL_172;
      }
      v55 = *((_DWORD *)this + 22);
      if ( (v55 & 0x1000) == 0 )
      {
        *((_DWORD *)this + 22) = v55 | 0x1000;
        CVisual::PropagateDirtyChildren(this);
      }
    }
    if ( *v24 )
    {
      CBaseObject::Release((CBaseObject *)*v24);
      *v24 = 0LL;
    }
  }
LABEL_28:
  inserted = CTopLevelWindow::EnsureClientAreaNode(this);
  v2 = inserted;
  if ( inserted < 0 )
  {
    v96 = 2391;
  }
  else
  {
    v30 = CTopLevelWindow::CalculateBackgroundType((__int64)this, v27, v28, v29);
    v32 = (*((_BYTE *)this + 249) & 2) == 0;
    *((_DWORD *)this + 210) = v30;
    if ( v32 )
    {
      v33 = (CBaseObject *)*((_QWORD *)this + 101);
      if ( v33 )
      {
        CBaseObject::Release(v33);
        v91 = *((_QWORD *)this + 65);
        v92 = (VisualCollection *)(*((_QWORD *)this + 102) + 32LL);
        *((_QWORD *)this + 101) = 0LL;
        VisualCollection::InsertRelative(v92, v91, 0LL, 1u, v94);
        v93 = (CBaseObject *)*((_QWORD *)this + 102);
        if ( v93 )
        {
          CBaseObject::Release(v93);
          *((_QWORD *)this + 102) = 0LL;
        }
      }
    }
    else
    {
      HolographicSlate = CTopLevelWindow::CreateHolographicSlate(this);
      v2 = HolographicSlate;
      if ( HolographicSlate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HolographicSlate, 0x13Au, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x95Cu, 0LL);
        return v2;
      }
    }
    inserted = CTopLevelWindow::UpdateSystemBackdropVisual(this, v31);
    v2 = inserted;
    if ( inserted < 0 )
    {
      v96 = 2398;
    }
    else
    {
      inserted = CTopLevelWindow::UpdateButtonVisuals((struct CButton **)this, v13);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v96 = 2401;
      }
      else
      {
        inserted = CTopLevelWindow::UpdateCaptionAccentColor(this, v34, v35, v36);
        v2 = inserted;
        if ( inserted < 0 )
        {
          v96 = 2403;
        }
        else
        {
          inserted = CTopLevelWindow::UpdateText(this, v13);
          v2 = inserted;
          if ( inserted >= 0 )
            return v2;
          v96 = 2406;
        }
      }
    }
  }
LABEL_172:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v96, 0LL);
  return v2;
}
