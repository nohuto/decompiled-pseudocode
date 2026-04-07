/*
 * XREFs of ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x18000DA7C (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18001B3F8 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseWin32kMargins@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001B8FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseWin32kMargins@@@details@wil@@QEAAX_NW4.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18001EF48 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800299A4 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180029D90 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18002A510 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18002A830 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002CD50 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18002D8C0 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18002DB10 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18002FD80 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@AEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800353A4 (-GetWindowColorizationColor@CTopLevelWindow@@AEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180035F24 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18004621C (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800463E8 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180046464 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x18004BB54 (-UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x18005F104 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x180069FD8 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800B2C94 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D0860 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800E5124 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::ValidateVisual(CTopLevelWindow *this)
{
  int v1; // eax
  char v3; // di
  int v4; // ecx
  int v5; // r8d
  int v6; // r12d
  int v7; // r15d
  int v8; // r13d
  char v9; // r14
  int v10; // esi
  _DWORD *v11; // rax
  int v12; // r9d
  int v13; // r11d
  int v14; // r10d
  int v15; // edi
  int v16; // ecx
  int v17; // ecx
  int v18; // r8d
  _DWORD *v19; // rsi
  int v20; // r8d
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // r9d
  int v25; // ecx
  int v26; // r10d
  int v27; // eax
  int v28; // r8d
  int v29; // r11d
  int v30; // edi
  char v31; // bp
  char v32; // bp
  int v33; // esi
  char v34; // r14
  int CurrentStyle; // eax
  float *v36; // rcx
  __int64 v37; // rax
  int v38; // r12d
  char v39; // si
  int v40; // edi
  char v41; // al
  bool v42; // r12
  bool v43; // cl
  char v44; // si
  bool v45; // bp
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  CAccent *v49; // rcx
  int v50; // eax
  int v52; // eax
  unsigned int v53; // ebp
  int v54; // eax
  unsigned int v55; // r14d
  int v56; // eax
  unsigned int v57; // r14d
  int v58; // eax
  unsigned int v59; // r14d
  int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  unsigned int v63; // ebp
  int v64; // eax
  unsigned int v65; // r14d
  struct CWindowData *v66; // rdx
  CProjectionBorderVisual *v67; // rcx
  int updated; // eax
  unsigned int v69; // ebp
  char v70; // di
  char v71; // al
  CText *v72; // rcx
  struct CWindowData *v73; // rdx
  CProjectionBorderVisual *v74; // rcx
  int v75; // eax
  unsigned int v76; // ebp
  __int64 v77; // r9
  bool v78; // al
  int v79; // eax
  unsigned int v80; // edi
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // r15d
  CDesktopManager *v83; // r14
  __int64 v84; // rdx
  __int64 v85; // rax
  unsigned int v86; // ecx
  __int64 i; // r12
  __int64 v88; // rcx
  CTopLevelWindow *v89; // rcx
  int v90; // eax
  int v91; // eax
  unsigned int v92; // ebp
  int v93; // eax
  unsigned int v94; // edi
  int v95; // eax
  unsigned int v96; // edi
  __int64 v97; // r10
  unsigned __int64 v98; // r9
  __int64 v99; // rdx
  int v100; // eax
  int v101; // eax
  int v102; // [rsp+30h] [rbp-58h]
  int v103; // [rsp+34h] [rbp-54h]
  int v104; // [rsp+38h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char v106; // [rsp+90h] [rbp+8h] BYREF
  char v107; // [rsp+98h] [rbp+10h]
  char v108; // [rsp+A0h] [rbp+18h]
  int v109; // [rsp+A8h] [rbp+20h]

  v1 = *((_DWORD *)this + 22);
  v3 = 0;
  v4 = v1 & 2;
  v108 = 0;
  v102 = v4;
  v5 = v1 & 8;
  v103 = v5;
  v104 = v1 & 0x4000;
  v6 = v1 & 0x1000000;
  v7 = v1 & 0x100000;
  v8 = v1 & 0x200000;
  v109 = v1 & 0x1000000;
  v9 = 0;
  LOBYTE(v10) = 0;
  if ( (*((_BYTE *)this + 248) & 8) != 0 )
  {
    v93 = CVisual::ValidateVisual(this);
    v94 = v93;
    if ( v93 >= 0 )
    {
      if ( (*((_DWORD *)this + 22) & 0x800000) != 0 )
      {
        CTopLevelWindow::UpdateLivePreviewAnimation(this);
        *((_DWORD *)this + 22) &= ~0x800000u;
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F2,
      (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v93);
    return v94;
  }
  if ( (v1 & 0x40000) != 0 )
  {
    CTopLevelWindow::UpdateWindowScale(this);
    *((_DWORD *)this + 22) &= ~0x40000u;
    v1 = *((_DWORD *)this + 22);
    v4 = v102;
    v5 = v103;
    v108 = 1;
  }
  if ( (v1 & 0x40E000) != 0 || v8 || v4 || v5 || v6 || v7 )
  {
    v11 = (_DWORD *)*((_QWORD *)this + 94);
    v12 = v11[16];
    v13 = v11[18];
    v14 = v11[17];
    v15 = v11[19];
    if ( v12 != *((_DWORD *)this + 153) )
    {
      *((_DWORD *)this + 153) = v12;
      v9 = 1;
    }
    if ( v14 != *((_DWORD *)this + 154) )
    {
      *((_DWORD *)this + 154) = v14;
      v9 = 1;
    }
    if ( v13 != *((_DWORD *)this + 155) )
    {
      *((_DWORD *)this + 155) = v13;
      v9 = 1;
    }
    if ( v15 != *((_DWORD *)this + 156) )
    {
      *((_DWORD *)this + 156) = v15;
      v9 = 1;
    }
    v16 = v11[14] - v11[12];
    if ( v16 < 0 )
      v16 = 0;
    v17 = v16 - v14 - v12;
    v18 = v11[15] - v11[13];
    if ( v18 < 0 )
      v18 = 0;
    v19 = (_DWORD *)*((_QWORD *)this + 94);
    v20 = v18 - v15 - v13;
    v21 = v19[24];
    if ( *((_QWORD *)v19 + 12) == 0x7FFFFFFF7FFFFFFFLL && v19[26] == 0x7FFFFFFF && v19[27] == 0x7FFFFFFF )
    {
      v24 = v17 / 2 + v12;
      v26 = (v17 + 1) / 2 + v14;
      v29 = v20 / 2 + v13;
      v27 = (v20 + 1) / 2;
    }
    else
    {
      v22 = v19[25];
      if ( v17 < v21 )
        v21 = v17;
      v23 = v17 - v21;
      v24 = v21 + v12;
      if ( v23 < v22 )
        v22 = v23;
      v25 = v19[26];
      v26 = v22 + v14;
      v27 = v19[27];
      if ( v20 < v25 )
        v25 = v20;
      v28 = v20 - v25;
      v29 = v25 + v13;
      if ( v28 < v27 )
        v27 = v28;
    }
    v30 = v27 + v15;
    v31 = 0;
    if ( v24 != *((_DWORD *)this + 157) )
    {
      *((_DWORD *)this + 157) = v24;
      v31 = 1;
    }
    if ( v26 != *((_DWORD *)this + 158) )
    {
      *((_DWORD *)this + 158) = v26;
      v31 = 1;
    }
    if ( v29 != *((_DWORD *)this + 159) )
    {
      *((_DWORD *)this + 159) = v29;
      v31 = 1;
    }
    if ( v30 != *((_DWORD *)this + 160) )
    {
      *((_DWORD *)this + 160) = v30;
      v31 = 1;
    }
    v32 = v9 | v31;
    if ( v32 )
    {
      v73 = (struct CWindowData *)*((_QWORD *)this + 94);
      v74 = (CProjectionBorderVisual *)*((_QWORD *)v73 + 58);
      if ( v74 )
        CProjectionBorderVisual::UpdateRectFromWindow(v74, v73);
    }
    v33 = *((_DWORD *)this + 152);
    v106 = (unsigned __int8)IsOpenThemeDataPresent() && (v33 & 6) != 0;
    v34 = 0;
    CurrentStyle = CTopLevelWindow::GetCurrentStyle(*((_QWORD *)this + 94), 0LL);
    if ( CurrentStyle != *((_DWORD *)this + 152) )
    {
      *((_DWORD *)this + 152) = CurrentStyle;
      v34 = 1;
    }
    if ( (int)CTopLevelWindow::UpdateColorizationColor(this) >= 0
      && (v36 = (float *)*((_QWORD *)this + 75)) != 0LL
      && (v37 = *((_QWORD *)this + 94)) != 0
      && (*(_BYTE *)(v37 + 664) & 8) != 0
      && (*((_DWORD *)this + 157) || *((_DWORD *)this + 159) || *((_DWORD *)this + 158) || *((_DWORD *)this + 160))
      && (1.0 != *((float *)this + 186)
       || (float)(v36[8] * v36[4]) != *((float *)this + 183)
       || (float)(v36[8] * v36[5]) != *((float *)this + 184)
       || (float)(v36[8] * v36[6]) != *((float *)this + 185)) )
    {
      v38 = *((_DWORD *)this + 152);
      v34 = 1;
      v107 = 1;
      v70 = v33 ^ v38;
      v10 = ((unsigned __int8)v33 ^ (unsigned __int8)v38) & 0x20;
      v40 = v70 & 0x40;
    }
    else
    {
      v38 = *((_DWORD *)this + 152);
      v107 = v34;
      v39 = v33 ^ v38;
      v40 = v39 & 0x40;
      v10 = v39 & 0x20;
      if ( !v34 )
        goto LABEL_50;
    }
    v71 = (unsigned __int8)IsOpenThemeDataPresent() && (v38 & 6) != 0;
    if ( v106 != v71 )
    {
      v41 = 1;
LABEL_51:
      if ( v10 || v40 || v8 || v41 )
        LOBYTE(v10) = 1;
      v42 = !*((_QWORD *)this + 62) && *(_QWORD *)(*((_QWORD *)this + 94) + 144LL);
      v3 = v32 | CTopLevelWindow::UpdateMarginsDependentOnStyle(this);
      if ( v109 || v3 || v34 || (_BYTE)v10 || v42 || v7 )
      {
        v66 = (struct CWindowData *)*((_QWORD *)this + 94);
        v67 = (CProjectionBorderVisual *)*((_QWORD *)v66 + 58);
        if ( v67 )
        {
          if ( v3 )
            CProjectionBorderVisual::UpdateRectFromWindow(v67, v66);
          if ( v8 )
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 94) + 464LL) + 24LL))(
              *(_QWORD *)(*((_QWORD *)this + 94) + 464LL),
              0x4000LL);
        }
        updated = CTopLevelWindow::UpdateWindowVisuals(this);
        v69 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1170u);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1210,
            (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
            (const char *)v69);
          return v69;
        }
      }
      *((_DWORD *)this + 22) &= 0xFE9F1FFF;
      v1 = *((_DWORD *)this + 22);
      v9 = v107;
      v6 = v109;
      goto LABEL_64;
    }
LABEL_50:
    v41 = 0;
    goto LABEL_51;
  }
LABEL_64:
  if ( (v1 & 0x4000000) != 0 )
  {
    v52 = CTopLevelWindow::UpdateClientAreaBounds(this);
    v53 = v52;
    if ( v52 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1217,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v52);
      return v53;
    }
    *((_DWORD *)this + 22) &= ~0x4000000u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x2000000) != 0 )
  {
    v61 = *((_QWORD *)this + 94);
    if ( (*(_BYTE *)(v61 + 665) & 0x20) != 0 )
    {
      if ( *((_QWORD *)this + 62) )
      {
        v62 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v61 + 24) + 368LL))(*(_QWORD *)(v61 + 24));
        v63 = v62;
        if ( v62 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v62, 0x14FBu);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x121E,
            (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
            (const char *)v63);
          return v63;
        }
      }
    }
    *((_DWORD *)this + 22) &= ~0x2000000u;
    v1 = *((_DWORD *)this + 22);
  }
  v43 = v7 || v8;
  v44 = v43 | v10;
  if ( (v1 & 0x10000) != 0 )
  {
    v72 = (CText *)*((_QWORD *)this + 67);
    if ( v72 )
    {
      v91 = CText::SetText(v72, *(const unsigned __int16 **)(*((_QWORD *)this + 94) + 16LL));
      v92 = v91;
      if ( v91 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v91, 0x13F3u);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1229,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)v92);
        return v92;
      }
    }
    *((_DWORD *)this + 22) &= ~0x10000u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x20000) != 0 )
  {
    v75 = CTopLevelWindow::UpdateIcon(this);
    v76 = v75;
    if ( v75 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122F,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v75);
      return v76;
    }
    *((_DWORD *)this + 22) &= ~0x20000u;
  }
  v45 = v3 || v102;
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && ((*((_DWORD *)this + 22) & 0x1000) != 0 || v9 || v3 || v108 || v6 || v7) )
  {
    v64 = CTopLevelWindow::UpdateNCAreaPositionsAndSizes(this);
    v65 = v64;
    if ( v64 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x123F,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v64);
      return v65;
    }
    *((_DWORD *)this + 22) &= ~0x1000u;
  }
  if ( *((_QWORD *)this + 67) && v44 )
  {
    CurrentDefaultColorizationFlags = (_DWORD *)CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, &v106);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(this, *CurrentDefaultColorizationFlags | 8u);
    CText::SetBackgroundColor(*((CText **)this + 67), WindowColorizationColor);
    v83 = CDesktopManager::s_pDesktopManagerInstance;
    v84 = 0LL;
    v46 = *((_QWORD *)this + 94);
    v85 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 55);
    v86 = *(_DWORD *)(v85 + 368);
    if ( v86 )
    {
      v97 = *(_QWORD *)(v85 + 344);
      while ( *(_QWORD *)(v97 + 48 * v84 + 8) != v46 )
      {
        v84 = (unsigned int)(v84 + 1);
        if ( (unsigned int)v84 >= v86 )
          goto LABEL_153;
      }
      CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(
        *(CTopLevelWindow **)(v97 + 48 * v84),
        WindowColorizationColor);
      v83 = CDesktopManager::s_pDesktopManagerInstance;
    }
LABEL_153:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v83 + 184); i = (unsigned int)(i + 1) )
      CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
        *(CDesktopThumbnailBase **)(*((_QWORD *)v83 + 89) + 8 * i),
        this,
        WindowColorizationColor);
    v88 = *(_QWORD *)(*((_QWORD *)this + 94) + 480LL);
    if ( v88 )
    {
      v89 = *(CTopLevelWindow **)(v88 + 24);
      if ( v89 )
        CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(v89, WindowColorizationColor);
    }
  }
  v48 = *((_DWORD *)this + 22);
  if ( (v48 & 2) != 0 )
  {
    v60 = (*(__int64 (__fastcall **)(CTopLevelWindow *, _QWORD))(*(_QWORD *)this + 88LL))(this, 0LL);
    v55 = v60;
    if ( v60 < 0 )
    {
      v98 = (unsigned int)v60;
      v99 = 129LL;
      goto LABEL_202;
    }
    *((_DWORD *)this + 22) &= ~2u;
    v48 = *((_DWORD *)this + 22);
  }
  if ( (v48 & 8) != 0 )
  {
    v54 = (*(__int64 (__fastcall **)(CTopLevelWindow *))(*(_QWORD *)this + 176LL))(this);
    v55 = v54;
    if ( v54 < 0 )
    {
      v98 = (unsigned int)v54;
      v99 = 136LL;
      goto LABEL_202;
    }
    *((_DWORD *)this + 22) &= ~8u;
    v48 = *((_DWORD *)this + 22);
  }
  if ( (v48 & 0x10) != 0 )
  {
    v100 = CVisual::UpdateTransform(this);
    v55 = v100;
    if ( v100 < 0 )
    {
      v98 = (unsigned int)v100;
      v99 = 143LL;
      goto LABEL_202;
    }
    *((_DWORD *)this + 22) &= ~0x10u;
    v48 = *((_DWORD *)this + 22);
  }
  if ( (v48 & 0x20) != 0 )
  {
    v90 = (*(__int64 (__fastcall **)(CTopLevelWindow *))(*(_QWORD *)this + 160LL))(this);
    v55 = v90;
    if ( v90 < 0 )
    {
      v98 = (unsigned int)v90;
      v99 = 150LL;
      goto LABEL_202;
    }
    *((_DWORD *)this + 22) &= ~0x20u;
    v48 = *((_DWORD *)this + 22);
  }
  if ( (v48 & 0x40) != 0 )
  {
    v101 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 16LL)
                                                             + 408LL))(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
             *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
             (char *)this + 204);
    v55 = v101;
    if ( v101 >= 0 )
    {
      *((_DWORD *)this + 22) &= ~0x40u;
      goto LABEL_88;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v101, 0x3C3u);
    v98 = v55;
    v99 = 157LL;
LABEL_202:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v99,
      (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
      (const char *)v98);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1265,
      (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)v55);
    return v55;
  }
LABEL_88:
  if ( v44 || v45 || v104 )
  {
    v56 = CTopLevelWindow::UpdateNCAreaBackground(this);
    v57 = v56;
    if ( v56 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x126C,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v56);
      return v57;
    }
    *((_DWORD *)this + 22) &= ~0x100000u;
  }
  if ( (*((_DWORD *)this + 22) & 0x80000) != 0 || v45 )
  {
    v58 = CTopLevelWindow::UpdateClientBlur(this);
    v59 = v58;
    if ( v58 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1273,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v58);
      return v59;
    }
    *((_DWORD *)this + 22) &= ~0x80000u;
  }
  if ( v3 )
    CWindowData::NotifySWROfMarginOrSizeChange(
      *((CWindowData **)this + 94),
      (*((_BYTE *)this + 248) & 0x20) == 0,
      (*((_BYTE *)this + 248) & 0x20) != 0);
  v49 = (CAccent *)*((_QWORD *)this + 35);
  if ( !v49 )
    goto LABEL_96;
  v77 = *((_QWORD *)this + 94);
  v78 = (*(_BYTE *)(v77 + 172) & 2) == 0 && v44 && *(_DWORD *)(v77 + 168) == 2;
  if ( v45 || v103 )
  {
    if ( !v78 )
    {
LABEL_172:
      v95 = CAccent::UpdateAccentPolicy(
              v49,
              (const struct tagRECT *)(v77 + 48),
              (__m128i *)(v77 + 168),
              *(struct CBaseGeometryProxy **)(v77 + 424));
      v96 = v95;
      if ( v95 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x128F,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v95);
        return v96;
      }
      v49 = (CAccent *)*((_QWORD *)this + 35);
      goto LABEL_150;
    }
LABEL_206:
    *(_DWORD *)(*((_QWORD *)this + 94) + 176LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
    v49 = (CAccent *)*((_QWORD *)this + 35);
    v77 = *((_QWORD *)this + 94);
    goto LABEL_172;
  }
  if ( v78 )
    goto LABEL_206;
LABEL_150:
  v79 = (*(__int64 (__fastcall **)(CAccent *))(*(_QWORD *)v49 + 48LL))(v49);
  v80 = v79;
  if ( v79 >= 0 )
  {
LABEL_96:
    v50 = *((_DWORD *)this + 22);
    if ( (v50 & 0x800000) != 0 )
    {
      CTopLevelWindow::UpdateLivePreviewAnimation(this);
      *((_DWORD *)this + 22) &= ~0x800000u;
      v50 = *((_DWORD *)this + 22);
    }
    if ( (v50 & 0x8000000) != 0 )
    {
      CTopLevelWindow::UpdateDCompVisuals(this);
      *((_DWORD *)this + 22) &= ~0x8000000u;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseWin32kMargins>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_UseWin32kMargins>::GetImpl'::`2'::impl,
      1u,
      v46,
      v47);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1291,
    (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v79);
  return v80;
}
