/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080
 * Callers:
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180012904 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180005C30 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800067F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18000E4C8 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000E838 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA-ATw.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x18000EA18 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180021080 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800318A0 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180031960 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180033FB4 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180034138 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180034220 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180034A88 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x1800352B0 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@AEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800353A4 (-GetWindowColorizationColor@CTopLevelWindow@@AEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18003551C (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x1800356C8 (-GetShadowStyle@CTopLevelWindow@@AEAA-AW4ShadowStyle@CWindowBorder@@XZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180035720 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x180035748 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x180035D7C (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x180035D9C (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180035DBC (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x180035E60 (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180035F24 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800361F4 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x180036734 (-BlendColors@@YAKKKM@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800367E4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x1800374F8 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180037630 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800376C0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x1800391BC (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CText@@SAJPEAPEAV1@@Z @ 0x180046FCC (-Create@CText@@SAJPEAPEAV1@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180057E00 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@A.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180068B28 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x1800972F0 (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x1800A8134 (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800E47A4 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x1800E5210 (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x1800E5294 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  struct CAtlasedImage *v1; // r12
  unsigned int v3; // ebx
  float v4; // xmm6_4
  int EffectiveCornerStyle; // eax
  unsigned int v6; // r8d
  int v7; // ebx
  __int64 v8; // r15
  int ShadowStyle; // r14d
  unsigned int v10; // ebx
  struct _D3DCOLORVALUE *RoundedBorderColor; // rsi
  unsigned int v12; // edi
  struct tagRECT *BorderRect; // rax
  __int64 v14; // r8
  int v15; // eax
  CWindowBorder *v16; // rcx
  int BorderStructure; // eax
  __int64 v18; // rbx
  struct CVisual *v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  char v22; // si
  __int64 v23; // rdx
  __int64 v24; // r9
  char v25; // si
  struct CTopLevelWindow::WindowFrame *WindowFramePart; // r14
  __int64 v27; // rcx
  __int64 *v28; // r8
  int v29; // ebx
  char v30; // cl
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // r8d
  int v38; // ebx
  char v39; // r15
  unsigned int v40; // esi
  struct CAtlasedImage **v41; // rdi
  struct CAtlasedImage *v42; // rcx
  int v43; // eax
  int v44; // eax
  CAtlasedImage *v45; // r9
  CAtlasedImage *v46; // rcx
  CAtlasedImage *v47; // rcx
  CAtlasedImage *v48; // rcx
  CAtlasedImage *v49; // rcx
  CAtlasedImage *v50; // rcx
  CAtlasedImage *v51; // rcx
  CAtlasedImage *v52; // rcx
  CAtlasedImage *v53; // rcx
  CAtlasedImage *v54; // rcx
  CAtlasedImage *v55; // rcx
  CAtlasedImage *v56; // rcx
  CAtlasedImage *v57; // rcx
  CAtlasedImage *v58; // rcx
  CAtlasedImage *v59; // rcx
  CAtlasedImage *v60; // rcx
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
  struct CTopLevelWindow::WindowFrame *v75; // rdi
  int updated; // eax
  int v77; // ecx
  __int64 v78; // rax
  int v79; // eax
  int inserted; // eax
  bool v81; // si
  bool v82; // dl
  __int64 v83; // rcx
  int v84; // eax
  struct CVisual *v85; // rdx
  int v86; // eax
  int v87; // eax
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // eax
  _DWORD *v90; // r8
  unsigned int v91; // ebx
  unsigned int v92; // edx
  unsigned int v93; // r8d
  __int64 v94; // rcx
  __int64 *v95; // rcx
  int v96; // edx
  __int64 v97; // rax
  CWindowData *v98; // rcx
  double *v99; // rcx
  double v100; // xmm1_8
  __int64 v101; // rax
  int v102; // eax
  CBaseObject *v103; // rcx
  int v104; // eax
  int HolographicSlate; // eax
  CBaseObject *v106; // rcx
  struct CVisual *v107; // rdx
  VisualCollection *v108; // rcx
  CBaseObject *v109; // rcx
  int v110; // eax
  BOOL v112; // [rsp+48h] [rbp-C0h] BYREF
  char v113; // [rsp+4Ch] [rbp-BCh]
  struct CTopLevelWindow::WindowFrame *v114; // [rsp+50h] [rbp-B8h] BYREF
  int v115; // [rsp+58h] [rbp-B0h] BYREF
  char v116; // [rsp+5Ch] [rbp-ACh]
  __int128 v117; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v118[8]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v119[16]; // [rsp+78h] [rbp-90h] BYREF
  tagLOGFONTW v120; // [rsp+88h] [rbp-80h] BYREF
  struct _D3DCOLORVALUE v121; // [rsp+E8h] [rbp-20h] BYREF
  struct tagRECT v122; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v1 = 0LL;
  v3 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v3;
  if ( *((_BYTE *)this + 888) )
    goto LABEL_28;
  v4 = 0.0;
  if ( (*((_BYTE *)this + 608) & 0x20) == 0 && (*(_DWORD *)(*((_QWORD *)this + 94) + 128LL) & 0x1000) == 0 )
  {
    EffectiveCornerStyle = CTopLevelWindow::GetEffectiveCornerStyle(this);
    if ( EffectiveCornerStyle == 2 )
    {
LABEL_8:
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCachedVariantState(
        (volatile signed __int64 *)&`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
        (__int64)&v114);
      v4 = (float)SHIDWORD(v114);
      goto LABEL_9;
    }
    if ( EffectiveCornerStyle != 3 )
    {
      if ( EffectiveCornerStyle != 4 )
        goto LABEL_9;
      goto LABEL_8;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCachedVariantState(
      (volatile signed __int64 *)&`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
      (__int64)&v114);
    v4 = (float)SHIDWORD(v114) * 0.5;
  }
LABEL_9:
  v6 = `wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v114 = *(struct CTopLevelWindow::WindowFrame **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCachedFeatureEnabledState(
                                                      &`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
                                                      &v117);
    v6 = (unsigned int)v114;
  }
  v112 = 0;
  v113 = 3;
  wil::details::ReportUsageToService(&unk_180146740, 29718541LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v112, 1, 3);
  v7 = *((_DWORD *)this + 152);
  if ( (v7 & 0x20) == 0 && ((unsigned __int8)IsOpenThemeDataPresent() && (v7 & 6) != 0 || v4 > 0.0) )
  {
    v8 = *((_QWORD *)this + 33);
    ShadowStyle = CTopLevelWindow::GetShadowStyle(this);
    v10 = *(unsigned __int8 *)(*((_QWORD *)this + 94) + 665LL);
    RoundedBorderColor = CTopLevelWindow::GetRoundedBorderColor(this, &v121);
    v12 = *(_DWORD *)(*((_QWORD *)this + 94) + 348LL);
    BorderRect = CTopLevelWindow::GetBorderRect(this, &v122, 0);
    v15 = CWindowBorder::SetBorderParameters(v8, BorderRect, v14, v12, RoundedBorderColor, (v10 >> 2) & 1, ShadowStyle);
    v3 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88D,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v15);
      return v3;
    }
    v16 = (CWindowBorder *)*((_QWORD *)this + 33);
    if ( !*((_QWORD *)v16 + 31) )
    {
      BorderStructure = CWindowBorder::CreateBorderStructure(v16);
      v3 = BorderStructure;
      if ( BorderStructure < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
          (const char *)(unsigned int)BorderStructure);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x88E,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)v3);
        return v3;
      }
    }
  }
  else
  {
    v18 = *((_QWORD *)this + 33);
    v19 = *(struct CVisual **)(v18 + 248);
    if ( v19 )
    {
      VisualCollection::Remove((VisualCollection *)(v18 + 32), v19);
      if ( *(_QWORD *)(v18 + 264) )
      {
        v20 = *(_QWORD *)(v18 + 256);
        if ( v20 )
        {
          CVisualProxy::SetClip(*(CVisualProxy **)(v20 + 16), 0LL);
          CVisual::SetIgnoreClipForHitTest(*(CVisual **)(v18 + 256), 0);
        }
      }
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)(v18 + 248));
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v18 + 272));
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v18 + 280));
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)(v18 + 264));
      v117 = 0LL;
      std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(v18 + 288, &v117);
      if ( *((_QWORD *)&v117 + 1) )
        std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v117 + 1));
      CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)v18);
    }
  }
LABEL_28:
  v21 = *((_DWORD *)this + 152);
  v22 = *(_BYTE *)(*((_QWORD *)this + 94) + 667LL);
  if ( (unsigned __int8)IsOpenThemeDataPresent() && (v21 & 6) != 0 )
  {
    v25 = v22 & 0x10;
    if ( (v21 & 0x20) != 0 )
    {
      if ( v25 || (v21 & 0x40) != 0 )
        WindowFramePart = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16);
      else
        WindowFramePart = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 24);
    }
    else if ( v25 || (v21 & 0x40) != 0 )
    {
      WindowFramePart = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames
                                                                + 8LL * ((v21 & 2) != 0 ? 4 : 0));
    }
    else
    {
      v27 = 5LL;
      if ( (v21 & 2) == 0 )
        v27 = 1LL;
      WindowFramePart = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * v27);
    }
  }
  else
  {
    WindowFramePart = 0LL;
  }
  v28 = (__int64 *)*((_QWORD *)this + 34);
  v29 = *((_DWORD *)this + 152) >> 17;
  LOBYTE(v29) = (*((_DWORD *)this + 152) & 0x20000) != 0;
  v114 = WindowFramePart;
  v30 = *((_BYTE *)v28 + 92);
  v112 = v29;
  if ( (_BYTE)v29 != (v30 & 1) )
  {
    v31 = *v28;
    *((_BYTE *)v28 + 92) = v29 | v30 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v31 + 24))(v28, 16LL);
  }
  v32 = *((_QWORD *)this + 70);
  v33 = *(unsigned __int8 *)(v32 + 92);
  if ( (_BYTE)v29 != (v33 & 1) )
  {
    v34 = *(_QWORD *)v32;
    *(_BYTE *)(v32 + 92) = v29 | v33 & 0xFE;
    (*(void (__fastcall **)(__int64, __int64))(v34 + 24))(v32, 16LL);
  }
  if ( !CDesktopManager::IsHighContrastMode(v33, v23, v32, v24) )
    goto LABEL_52;
  v37 = `wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl & 2) == 0 )
  {
    *(_QWORD *)&v117 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCachedFeatureEnabledState(
                                    &`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
                                    v119);
    v37 = v117;
  }
  v115 = 0;
  v116 = 3;
  wil::details::ReportUsageToService(&unk_180146740, 29718541LL, (v37 >> 8) & 1, (v37 >> 9) & 1, &v115, 1, 3);
  v38 = *((_DWORD *)this + 152);
  if ( (unsigned __int8)IsOpenThemeDataPresent() && (v38 & 6) != 0 )
    v39 = 1;
  else
LABEL_52:
    v39 = 0;
  v40 = 0;
  v41 = (struct CAtlasedImage **)((char *)this + 320);
  while ( 1 )
  {
    if ( WindowFramePart )
      WindowFramePart = CTopLevelWindow::GetWindowFramePart(WindowFramePart, v40);
    if ( !v39 || !WindowFramePart )
      goto LABEL_61;
    if ( v40 - 18 <= 3 )
    {
      if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) )
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
          1u,
          v35,
          v36);
LABEL_61:
      v42 = *v41;
      if ( *v41 )
      {
        if ( *((_QWORD *)v42 + 10) )
        {
          CAtlasedRectsVisual::RemoveAtlasImage(*((CAtlasedRectsVisual **)v42 + 10), *v41);
          v42 = *v41;
        }
        if ( v42 )
        {
          CBaseObject::Release(v42);
          *v41 = 0LL;
        }
      }
      goto LABEL_70;
    }
    if ( !*v41 )
    {
      v43 = CAtlasedImage::Create(v41);
      v3 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0x8B5u);
        return v3;
      }
      *((_DWORD *)*v41 + 30) = v40;
      v44 = CAtlasedRectsVisual::InsertAfterAtlasImage(*((CAtlasedRectsVisual **)this + 36), *v41, v1);
      v3 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x8BAu);
        return v3;
      }
    }
    CAtlasedImage::SetBitmapSource(*v41, WindowFramePart);
    CAtlasedImage::SetSize(*v41, (const struct tagSIZE *)WindowFramePart + 3);
    v1 = *v41;
LABEL_70:
    ++v40;
    ++v41;
    if ( v40 >= 0x16 )
      break;
    WindowFramePart = v114;
  }
  if ( v39 )
  {
    if ( CTopLevelWindow::IsSheetOfGlass(this) )
    {
      if ( *((_DWORD *)v45 + 16) != 10 )
      {
        *((_DWORD *)v45 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v45, 1, 0x2000u);
      }
      v46 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v46 + 16) != 8 )
      {
        *((_DWORD *)v46 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v46, 1, 0x2000u);
      }
      v47 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v47 + 16) != 9 )
      {
        *((_DWORD *)v47 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v47, 1, 0x2000u);
      }
      v48 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v48 + 16) != 2 )
      {
        *((_DWORD *)v48 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v48, 1, 0x2000u);
      }
      v49 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v49 + 16) != 1 )
      {
        *((_DWORD *)v49 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v49, 1, 0x2000u);
      }
      v50 = (CAtlasedImage *)*((_QWORD *)this + 45);
      if ( *((_DWORD *)v50 + 16) != 6 )
      {
        *((_DWORD *)v50 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v50, 1, 0x2000u);
      }
      v51 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v51 + 16) != 4 )
      {
        *((_DWORD *)v51 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v51, 1, 0x2000u);
      }
      v52 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v52 + 16) != 5 )
      {
        *((_DWORD *)v52 + 16) = 5;
        CAtlasedImage::SetDirtyFlags(v52, 1, 0x2000u);
      }
      v53 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v53 + 16) != 10 )
      {
        *((_DWORD *)v53 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v53, 1, 0x2000u);
      }
      v54 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v54 + 16) != 8 )
      {
        *((_DWORD *)v54 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v54, 1, 0x2000u);
      }
      v55 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v55 + 16) != 9 )
      {
        *((_DWORD *)v55 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v55, 1, 0x2000u);
      }
      v56 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v56 + 16) != 2 )
      {
        *((_DWORD *)v56 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v56, 1, 0x2000u);
      }
      v57 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( *((_DWORD *)v57 + 16) != 1 )
      {
        *((_DWORD *)v57 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v57, 1, 0x2000u);
      }
      v58 = (CAtlasedImage *)*((_QWORD *)this + 54);
      if ( *((_DWORD *)v58 + 16) != 6 )
      {
        *((_DWORD *)v58 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v58, 1, 0x2000u);
      }
      v59 = (CAtlasedImage *)*((_QWORD *)this + 55);
      if ( *((_DWORD *)v59 + 16) != 4 )
      {
        *((_DWORD *)v59 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v59, 1, 0x2000u);
      }
      v60 = (CAtlasedImage *)*((_QWORD *)this + 56);
      if ( *((_DWORD *)v60 + 16) != 5 )
      {
        *((_DWORD *)v60 + 16) = 5;
        goto LABEL_140;
      }
    }
    else
    {
      if ( *((_DWORD *)v45 + 16) )
      {
        *((_DWORD *)v45 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v45, 1, 0x2000u);
      }
      v61 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v61 + 16) )
      {
        *((_DWORD *)v61 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v61, 1, 0x2000u);
      }
      v62 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v62 + 16) )
      {
        *((_DWORD *)v62 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v62, 1, 0x2000u);
      }
      v63 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v63 + 16) )
      {
        *((_DWORD *)v63 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v63, 1, 0x2000u);
      }
      v64 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v64 + 16) )
      {
        *((_DWORD *)v64 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v64, 1, 0x2000u);
      }
      v65 = (CAtlasedImage *)*((_QWORD *)this + 45);
      if ( *((_DWORD *)v65 + 16) )
      {
        *((_DWORD *)v65 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v65, 1, 0x2000u);
      }
      v66 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v66 + 16) )
      {
        *((_DWORD *)v66 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v66, 1, 0x2000u);
      }
      v67 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v67 + 16) )
      {
        *((_DWORD *)v67 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v67, 1, 0x2000u);
      }
      v68 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v68 + 16) )
      {
        *((_DWORD *)v68 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v68, 1, 0x2000u);
      }
      v69 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v69 + 16) )
      {
        *((_DWORD *)v69 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v69, 1, 0x2000u);
      }
      v70 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v70 + 16) )
      {
        *((_DWORD *)v70 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v70, 1, 0x2000u);
      }
      v71 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v71 + 16) )
      {
        *((_DWORD *)v71 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v71, 1, 0x2000u);
      }
      v72 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( *((_DWORD *)v72 + 16) )
      {
        *((_DWORD *)v72 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v72, 1, 0x2000u);
      }
      v73 = (CAtlasedImage *)*((_QWORD *)this + 54);
      if ( *((_DWORD *)v73 + 16) )
      {
        *((_DWORD *)v73 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v73, 1, 0x2000u);
      }
      v74 = (CAtlasedImage *)*((_QWORD *)this + 55);
      if ( *((_DWORD *)v74 + 16) )
      {
        *((_DWORD *)v74 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v74, 1, 0x2000u);
      }
      v60 = (CAtlasedImage *)*((_QWORD *)this + 56);
      if ( *((_DWORD *)v60 + 16) )
      {
        *((_DWORD *)v60 + 16) = 0;
LABEL_140:
        CAtlasedImage::SetDirtyFlags(v60, 1, 0x2000u);
      }
    }
  }
  v75 = v114;
  updated = CTopLevelWindow::UpdateButtonVisuals(this, v114);
  v3 = updated;
  if ( updated >= 0 )
  {
    v77 = *((_DWORD *)this + 152);
    v78 = *((_QWORD *)this + 68);
    if ( (v77 & 0x10080) != 0 )
    {
      if ( !v78 )
      {
        v79 = CImage::Create((struct CImage **)this + 68);
        v3 = v79;
        if ( v79 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v79, 0x8FAu);
          return v3;
        }
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(*((_QWORD *)this + 34) + 32LL),
                     *((struct CVisual **)this + 68),
                     *((struct CVisual **)this + 36),
                     1,
                     1);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x8FBu);
          return v3;
        }
        CVisual::SetDirtyFlags(this, 0x20000);
        v78 = *((_QWORD *)this + 68);
        v77 = *((_DWORD *)this + 152);
      }
      v81 = v112;
      v82 = v112;
      *(_DWORD *)(v78 + 200) = (v77 & 0x80 | 0x100u) >> 7;
      CVisual::SetRTLMirror(*((CVisual **)this + 68), v82);
    }
    else
    {
      if ( v78 )
      {
        v83 = *(_QWORD *)(v78 + 24);
        if ( !v83 )
          goto LABEL_156;
        v84 = VisualCollection::Remove((VisualCollection *)(v83 + 32), *((struct CVisual **)this + 68));
        v3 = v84;
        if ( v84 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v84, 0x90Au);
          return v3;
        }
        CVisual::SetDirtyFlags(this, 4096);
        v78 = *((_QWORD *)this + 68);
        if ( v78 )
        {
LABEL_156:
          CBaseObject::Release((CBaseObject *)v78);
          *((_QWORD *)this + 68) = 0LL;
        }
      }
      v81 = v112;
    }
    v85 = (struct CVisual *)*((_QWORD *)this + 67);
    if ( (*((_BYTE *)this + 608) & 8) != 0 )
    {
      if ( !v85 )
      {
        v86 = CText::Create((struct CText **)this + 67);
        v3 = v86;
        if ( v86 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v86, 0x917u);
          return v3;
        }
        v87 = VisualCollection::InsertRelative(
                (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
                *((struct CVisual **)this + 67),
                0LL,
                1,
                1);
        v3 = v87;
        if ( v87 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v87, 0x91Au);
          return v3;
        }
        CVisual::SetDirtyFlags(this, 0x10000);
      }
      CurrentDefaultColorizationFlags = (_DWORD *)CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, v118);
      WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(this, *CurrentDefaultColorizationFlags | 8u);
      v90 = (_DWORD *)*((_QWORD *)this + 67);
      v91 = WindowColorizationColor;
      if ( v90[105] != (WindowColorizationColor & 0xFFFFFF) )
      {
        v90[105] = WindowColorizationColor & 0xFFFFFF;
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v90 + 24LL))(v90, 4096LL);
      }
      if ( v75 )
      {
        v92 = *(_DWORD *)(*((_QWORD *)this + 94) + 196LL);
        if ( !v92 )
        {
          v93 = BYTE2(v91) + 5 * BYTE1(v91) + 2 * (unsigned __int8)v91;
          if ( v93 > 0x400 == 5 * BYTE1(*((_DWORD *)v75 + 458))
                            + (unsigned __int8)BYTE2(*((_DWORD *)v75 + 458))
                            + 2 * (unsigned int)(unsigned __int8)*((_DWORD *)v75 + 458) > 0x400 )
          {
            v94 = 321LL;
            if ( v93 <= 0x400 )
              v94 = 292LL;
            ColorCache::GetColor(v94);
          }
          if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
            v92 = BlendColors(v91, v92, 0.40000001);
        }
        v95 = (__int64 *)*((_QWORD *)this + 67);
        v96 = v92 & 0xFFFFFF;
        if ( v96 != *((_DWORD *)v95 + 104) )
        {
          v97 = *v95;
          *((_DWORD *)v95 + 104) = v96;
          (*(void (__fastcall **)(__int64 *, __int64))(v97 + 24))(v95, 4096LL);
        }
      }
      v98 = (CWindowData *)*((_QWORD *)this + 94);
      memset(&v120, 0, sizeof(v120));
      CWindowData::GetNonClientCaptionFont(v98, &v120);
      CText::SetFont(*((CText **)this + 67), &v120);
      v99 = (double *)*((_QWORD *)this + 67);
      v100 = *(double *)(*((_QWORD *)this + 94) + 336LL);
      if ( v99[53] != v100 )
      {
        v101 = *(_QWORD *)v99;
        v99[53] = v100;
        (*(void (__fastcall **)(double *, __int64))(v101 + 24))(v99, 4096LL);
        v99 = (double *)*((_QWORD *)this + 67);
      }
      CVisual::SetRTLMirror((CVisual *)v99, v81);
      CText::SetRTLReading(*((CText **)this + 67), (*((_DWORD *)this + 152) & 0x80000) != 0);
      CText::SetReverseAlignment(*((CText **)this + 67), (*((_DWORD *)this + 152) & 0x400000) != 0);
    }
    else if ( v85 )
    {
      v102 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), v85);
      v3 = v102;
      if ( v102 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v102, 0x948u);
        return v3;
      }
      v103 = (CBaseObject *)*((_QWORD *)this + 67);
      if ( v103 )
      {
        CBaseObject::Release(v103);
        *((_QWORD *)this + 67) = 0LL;
      }
    }
    v104 = CTopLevelWindow::EnsureClientAreaNode(this);
    v3 = v104;
    if ( v104 >= 0 )
    {
      if ( (*((_BYTE *)this + 249) & 2) != 0 )
      {
        HolographicSlate = CTopLevelWindow::CreateHolographicSlate(this);
        v3 = HolographicSlate;
        if ( HolographicSlate < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, HolographicSlate, 0x143u);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x94Fu);
          return v3;
        }
      }
      else
      {
        v106 = (CBaseObject *)*((_QWORD *)this + 103);
        if ( v106 )
        {
          CBaseObject::Release(v106);
          v107 = (struct CVisual *)*((_QWORD *)this + 62);
          v108 = (VisualCollection *)(*((_QWORD *)this + 104) + 32LL);
          *((_QWORD *)this + 103) = 0LL;
          VisualCollection::InsertRelative(v108, v107, 0LL, 1, 1);
          v109 = (CBaseObject *)*((_QWORD *)this + 104);
          if ( v109 )
          {
            CBaseObject::Release(v109);
            *((_QWORD *)this + 104) = 0LL;
          }
        }
      }
      v110 = CTopLevelWindow::UpdateSystemBackdropVisual(this);
      v3 = v110;
      if ( v110 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v110, 0x951u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v104, 0x94Du);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x8F4u);
  }
  return v3;
}
