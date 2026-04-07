/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18002A510
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800067F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18000E22C (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800169E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x180018A08 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800265D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180028C20 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002CD50 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x1800E5294 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?milcolorf_cmp@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x1800E689C (-milcolorf_cmp@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  __int64 v2; // rax
  int updated; // eax
  unsigned int v4; // edi
  struct CVisual **v5; // rsi
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  float *v12; // rax
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CRenderDataVisual *v19; // rcx
  struct CBaseLegacyMilBrushProxy *v20; // rcx
  CBaseObject *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int inserted; // eax
  int v26; // eax
  float *v27; // rax
  float v28; // xmm3_4
  D3DVALUE v29; // xmm2_4
  D3DVALUE v30; // xmm1_4
  D3DVALUE v31; // xmm3_4
  __int64 v32; // rax
  int v33; // eax
  CSolidColorLegacyMilBrushProxy *v34; // rcx
  struct CBaseGeometryProxy *v35; // rdx
  CBaseObject *v36; // rax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  CBaseObject *v40; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v41; // [rsp+38h] [rbp-38h] BYREF
  _D3DCOLORVALUE v42; // [rsp+40h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v43; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v41 = 0LL;
  v40 = 0LL;
  v2 = *((_QWORD *)this + 94);
  if ( (*(_BYTE *)(v2 + 664) & 8) != 0
    && (*((_DWORD *)this + 157) || *((_DWORD *)this + 159) || *((_DWORD *)this + 158) || *((_DWORD *)this + 160))
    && !*(_DWORD *)(v2 + 204) )
  {
    updated = CTopLevelWindow::UpdateNCAreaGeometry(this);
    v4 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7A,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_18;
    }
    v5 = (struct CVisual **)((char *)this + 296);
    if ( !*((_QWORD *)this + 37) )
    {
      v24 = CCanvasVisual::Create((struct CCanvasVisual **)this + 37);
      v4 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE7F,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v24);
        goto LABEL_18;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 34) + 32LL), *v5, 0LL, 1, 1);
      v4 = inserted;
      if ( inserted < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE82,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted);
        goto LABEL_18;
      }
      *(_D3DCOLORVALUE *)&v42.r = 0LL;
      CVisual::SetInsetFromParent(*v5, (const struct _MARGINS *)&v42);
    }
    v6 = CTopLevelWindow::UpdateColorizationColor(this);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE89,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_18;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
      1u,
      v7,
      v8);
    v11 = (_DWORD *)*((_QWORD *)this + 94);
    if ( v11[24]
      || v11[25]
      || v11[27]
      || (wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
            1u,
            v9,
            v10),
          *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26)) )
    {
      if ( CTopLevelWindow::IsSheetOfGlass(this) )
        v27 = (float *)*((_QWORD *)this + 75);
      else
        v27 = (float *)*((_QWORD *)this + 74);
      v28 = v27[8];
      v29 = v28 * v27[4];
      v30 = v28 * v27[5];
      v31 = v28 * v27[6];
      v42.a = v27[7];
      v42.b = v31;
      v42.g = v30;
      v42.r = v29;
      v32 = *((_QWORD *)this + 98);
      if ( v42.a == 0.0 )
      {
        if ( v32 )
        {
          CRenderDataVisual::ClearInstructions(*v5);
          if ( *((_QWORD *)this + 98) )
          {
            CBaseObject::Release(*((CBaseObject **)this + 98));
            *((_QWORD *)this + 98) = 0LL;
          }
        }
      }
      else if ( !v32 )
      {
        v33 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                (CBaseObject **)this + 98);
        v4 = v33;
        if ( v33 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xEAD,
            (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
            (const char *)(unsigned int)v33);
          goto LABEL_18;
        }
        CRenderDataVisual::ClearInstructions(*v5);
      }
      if ( milcolorf_cmp(&v42, (const struct _D3DCOLORVALUE *)((char *)this + 716)) )
      {
        v34 = (CSolidColorLegacyMilBrushProxy *)*((_QWORD *)this + 98);
        if ( v34 )
          CSolidColorLegacyMilBrushProxy::Update(v34, v42.a, &v42);
        *(_D3DCOLORVALUE *)((char *)this + 716) = *(_D3DCOLORVALUE *)&v42.r;
      }
    }
    if ( !*((_QWORD *)this + 99) )
    {
      v26 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (CBaseObject **)this + 99);
      v4 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEC3,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_18;
      }
    }
    v12 = (float *)*((_QWORD *)this + 75);
    v13 = v12[4] * v12[8];
    v43.r = v13;
    v14 = v12[5] * v12[8];
    v43.g = v14;
    v15 = v12[6] * v12[8];
    v43.b = v15;
    v43.a = 1.0;
    if ( 1.0 != *((float *)this + 186)
      || v13 != *((float *)this + 183)
      || v14 != *((float *)this + 184)
      || v15 != *((float *)this + 185) )
    {
      CSolidColorLegacyMilBrushProxy::Update(*((CSolidColorLegacyMilBrushProxy **)this + 99), 1.0, &v43);
      *(struct _D3DCOLORVALUE *)((char *)this + 732) = *(struct _D3DCOLORVALUE *)&v43.r;
    }
    if ( *((_DWORD *)*v5 + 70) )
    {
LABEL_17:
      v4 = 0;
      goto LABEL_18;
    }
    v20 = (struct CBaseLegacyMilBrushProxy *)*((_QWORD *)this + 98);
    if ( !v20 )
      goto LABEL_29;
    v35 = (struct CBaseGeometryProxy *)*((_QWORD *)this + 71);
    if ( !v35 )
      goto LABEL_29;
    v36 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      CBaseObject::Release(v36);
      v35 = (struct CBaseGeometryProxy *)*((_QWORD *)this + 71);
      v20 = (struct CBaseLegacyMilBrushProxy *)*((_QWORD *)this + 98);
    }
    v37 = CDrawGeometryInstruction::Create(v20, v35, &v41);
    v4 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED8,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v37);
      goto LABEL_18;
    }
    v38 = CRenderDataVisual::AddInstruction(*v5, v41);
    v4 = v38;
    if ( v38 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED9,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v38);
    }
    else
    {
LABEL_29:
      v21 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        CBaseObject::Release(v21);
      }
      v22 = CDrawGeometryInstruction::Create(
              *((struct CBaseLegacyMilBrushProxy **)this + 99),
              *((struct CBaseGeometryProxy **)this + 72),
              &v40);
      v4 = v22;
      if ( v22 >= 0 )
      {
        v23 = CRenderDataVisual::AddInstruction(*v5, v40);
        v4 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xEE0,
            (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
            (const char *)(unsigned int)v23);
          goto LABEL_18;
        }
        goto LABEL_17;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEDF,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v22);
    }
  }
  else
  {
    v19 = (CRenderDataVisual *)*((_QWORD *)this + 37);
    if ( !v19 )
      goto LABEL_17;
    v39 = CRenderDataVisual::ClearInstructions(v19);
    v4 = v39;
    if ( v39 >= 0 )
      goto LABEL_17;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEE8,
      (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v39);
  }
LABEL_18:
  v16 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    CBaseObject::Release(v16);
  }
  v17 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    CBaseObject::Release(v17);
  }
  return v4;
}
