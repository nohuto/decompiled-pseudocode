/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180028C20
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18002A510 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x18000DFDC (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x180010000 (-CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180029520 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x180029550 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x18002977C (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800298A4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180035720 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180057E00 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@A.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005E5E8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateIn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z @ 0x1800C23C8 (-CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z.c)
 *     ?Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z @ 0x1800D198C (-Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x1800E4240 (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x1800E4AB0 (-EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801077F0 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this)
{
  __int64 v1; // rax
  int v2; // r12d
  int v3; // r14d
  char v5; // si
  char v6; // si
  __int64 v7; // rcx
  int v8; // r15d
  int v9; // r14d
  int v10; // r13d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  __int64 v13; // rax
  int GeometryFromHRGN; // eax
  signed int v15; // ebx
  CRgnGeometryProxy *v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // r9d
  int v20; // r10d
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // ebx
  int v24; // esi
  CTopLevelWindow *v25; // rcx
  int v26; // r10d
  LONG v27; // ebx
  int v28; // eax
  int v29; // r13d
  int v30; // ecx
  HRGN RoundRectRgnCoerceInvalid; // rax
  HRGN v32; // rsi
  signed int LastError; // eax
  int v34; // edx
  unsigned int v35; // ecx
  int v36; // r8d
  HRGN v37; // rbx
  signed int v38; // eax
  int v39; // r9d
  LONG v40; // r15d
  int v41; // esi
  LONG v42; // ebx
  int v43; // r14d
  int v44; // ecx
  HRGN v45; // rsi
  signed int v46; // eax
  int v47; // edx
  unsigned int v48; // ecx
  int v49; // r8d
  LONG v50; // edx
  int left; // eax
  LONG v52; // eax
  HRGN v53; // r15
  signed int v54; // eax
  int v55; // edx
  unsigned int v56; // ecx
  int v57; // r8d
  signed int v58; // eax
  HRGN v59; // rbx
  signed int v60; // eax
  unsigned int v62; // [rsp+20h] [rbp-E0h]
  int v63; // [rsp+40h] [rbp-C0h]
  HRGN hrgnDst; // [rsp+48h] [rbp-B8h] BYREF
  int v65; // [rsp+50h] [rbp-B0h]
  int v66; // [rsp+54h] [rbp-ACh] BYREF
  char v67; // [rsp+58h] [rbp-A8h]
  int v68; // [rsp+5Ch] [rbp-A4h] BYREF
  char v69; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+68h] [rbp-98h]
  HRGN v71; // [rsp+70h] [rbp-90h] BYREF
  HRGN RectRgn; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v73; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h]
  _BYTE v75[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v76[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v77; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v78; // [rsp+B8h] [rbp-48h] BYREF
  struct tagRECT Src; // [rsp+D0h] [rbp-30h] BYREF
  LONG v80; // [rsp+E0h] [rbp-20h]
  int v81; // [rsp+E4h] [rbp-1Ch]
  int v82; // [rsp+E8h] [rbp-18h]
  int v83; // [rsp+ECh] [rbp-14h]
  int v84; // [rsp+F0h] [rbp-10h]
  int v85; // [rsp+F4h] [rbp-Ch]
  LONG right; // [rsp+F8h] [rbp-8h]
  int v87; // [rsp+FCh] [rbp-4h]
  LONG v88; // [rsp+100h] [rbp+0h]
  int v89; // [rsp+104h] [rbp+4h]
  int v90; // [rsp+108h] [rbp+8h]
  int v91; // [rsp+10Ch] [rbp+Ch]
  struct tagRECT v92; // [rsp+110h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 94);
  v2 = 0;
  v3 = *((_DWORD *)this + 152);
  v71 = 0LL;
  RectRgn = 0LL;
  v5 = *(_BYTE *)(v1 + 667);
  hrgnDst = 0LL;
  IsOpenThemeDataPresent();
  v6 = v5 & 0x10;
  if ( (v3 & 0x20) != 0 )
  {
    if ( v6 || (v3 & 0x40) != 0 )
      v7 = 2LL;
    else
      v7 = 3LL;
  }
  else if ( v6 || (v3 & 0x40) != 0 )
  {
    v7 = (v3 & 2) != 0 ? 4 : 0;
  }
  else
  {
    v7 = 5LL;
    if ( (v3 & 2) == 0 )
      v7 = 1LL;
  }
  v74 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * v7);
  CTopLevelWindow::GetActualWindowRect(this, &v77, 1, 0, 0);
  v8 = *((_DWORD *)this + 157) - *((_DWORD *)this + 161);
  v9 = *((_DWORD *)this + 158) - *((_DWORD *)this + 162);
  v10 = *((_DWORD *)this + 160) - *((_DWORD *)this + 164);
  v11 = `wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl;
  v63 = *((_DWORD *)this + 159) - *((_DWORD *)this + 163);
  v65 = (int)((double)dword_180142CC0 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 51));
  if ( (`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v70 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
                       v75);
    v11 = v70;
  }
  v66 = 0;
  v67 = 3;
  wil::details::ReportUsageToService(&unk_180146740, 29718541LL, (v11 >> 8) & 1, (v11 >> 9) & 1, &v66, 1, 3);
  v12 = `wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v70 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
                       v76);
    v12 = v70;
  }
  v68 = 0;
  v69 = 3;
  wil::details::ReportUsageToService(&unk_1801464A0, 220937958LL, (v12 >> 8) & 1, (v12 >> 9) & 1, &v68, 1, 3);
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) )
  {
    v17 = *((_QWORD *)this + 43);
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( v17 )
    {
      v21 = *((_QWORD *)this + 44);
      if ( v21 )
      {
        v22 = *((_QWORD *)this + 46);
        if ( v22 )
        {
          v18 = *(_DWORD *)(v17 + 24);
          v19 = *(_DWORD *)(v21 + 24);
          v20 = *(_DWORD *)(v22 + 28);
        }
      }
    }
    v23 = 0;
    v24 = 0;
    if ( v8 - v18 >= 0 )
      v23 = v8 - v18;
    if ( v9 - v19 >= 0 )
      v24 = v9 - v19;
    if ( v10 - v20 >= 0 )
      v2 = v10 - v20;
    if ( CTopLevelWindow::TreatAsActiveWindow(this) || (unsigned int)CTopLevelWindow::EdgeBorderMustBeOpaque(v25) )
      v26 = 0;
    else
      v26 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 51);
    v27 = v26 + v77.left + v23;
    Src.left = v27;
    Src.bottom = v77.top + v65;
    Src.top = v77.top + v26;
    v80 = v27;
    v82 = v8 + v77.left;
    Src.right = v77.right - v24 - v26;
    v28 = v77.bottom - v10;
    v81 = v77.top + v65;
    v29 = v63;
    v85 = v77.top + v65;
    right = Src.right;
    v84 = v77.right - v9;
    if ( v63 + v77.top <= v28 )
    {
      v83 = v28;
      v87 = v28;
    }
    else
    {
      v83 = v63 + v77.top;
      v87 = v63 + v77.top;
    }
    v88 = v27;
    v90 = v77.right - v24 - v26;
    if ( v28 < 0 )
      v28 = 0;
    v30 = v77.bottom - v2 - v26;
    v89 = v28;
    if ( v30 < 0 )
      v30 = 0;
    v91 = v30;
    SetLastError(0);
    RoundRectRgnCoerceInvalid = CreateRoundRectRgnCoerceInvalid(
                                  v77.left,
                                  v77.top,
                                  v77.right,
                                  v77.bottom,
                                  2 * *(_DWORD *)(v74 + 1864),
                                  2 * *(_DWORD *)(v74 + 1864));
    v71 = RoundRectRgnCoerceInvalid;
    v32 = RoundRectRgnCoerceInvalid;
    if ( !RoundRectRgnCoerceInvalid )
    {
      LastError = GetLastError();
      v15 = LastError;
      if ( LastError > 0 )
        v15 = (unsigned __int16)LastError | 0x80070000;
      if ( v15 >= 0 )
        v15 = CheckGUIHandleQuota(v35, v34, v36);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A480, 10LL, v15, 0x139Fu);
      goto LABEL_129;
    }
    GeometryFromHRGN = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgnCoerceInvalid);
    v15 = GeometryFromHRGN;
    if ( GeometryFromHRGN < 0 )
    {
      v62 = 5025;
      goto LABEL_127;
    }
    GeometryFromHRGN = HrgnFromRects(&Src, 4u, &hrgnDst);
    v15 = GeometryFromHRGN;
    if ( GeometryFromHRGN < 0 )
    {
      v62 = 5031;
      goto LABEL_127;
    }
    SetLastError(0);
    v37 = hrgnDst;
    if ( !CombineRgn(hrgnDst, hrgnDst, v32, 1) )
    {
      v38 = GetLastError();
      v15 = v38;
      if ( v38 > 0 )
        v15 = (unsigned __int16)v38 | 0x80070000;
      v62 = 5033;
      if ( v15 >= 0 )
        v15 = -2003304445;
      v39 = v15;
      goto LABEL_128;
    }
    GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v37, (struct CRgnGeometryProxy **)this + 71);
    v15 = GeometryFromHRGN;
    if ( GeometryFromHRGN < 0 )
    {
      v62 = 5034;
      goto LABEL_127;
    }
    ReleaseGDIObject<HRGN__ *>(&hrgnDst);
  }
  else
  {
    v13 = *((_QWORD *)this + 94);
    if ( (*(_DWORD *)(v13 + 96) || *(_DWORD *)(v13 + 100) || *(_DWORD *)(v13 + 108)) && (*(_BYTE *)(v13 + 665) & 4) == 0 )
    {
      if ( !*((_QWORD *)this + 71) )
      {
        GeometryFromHRGN = CCompositor::CreateProxy<CRgnGeometryProxy>(
                             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                             (CBaseObject **)this + 71);
        v15 = GeometryFromHRGN;
        if ( GeometryFromHRGN < 0 )
        {
          v62 = 5043;
LABEL_127:
          v39 = GeometryFromHRGN;
LABEL_128:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A480, 10LL, v39, v62);
          goto LABEL_129;
        }
      }
      CTopLevelWindow::GetActualWindowRect(this, &v78, 1, 1, 0);
      GeometryFromHRGN = CRgnGeometryProxy::Update(*((CRgnGeometryProxy **)this + 71), &v78, 1u);
      v15 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        v62 = 5050;
        goto LABEL_127;
      }
    }
    else
    {
      v16 = (CRgnGeometryProxy *)*((_QWORD *)this + 71);
      if ( v16 )
      {
        GeometryFromHRGN = CRgnGeometryProxy::Update(v16, 0LL, 0);
        v15 = GeometryFromHRGN;
        if ( GeometryFromHRGN < 0 )
        {
          v62 = 5056;
          goto LABEL_127;
        }
      }
    }
    v29 = v63;
  }
  if ( v8 < 0 )
    v8 = 0;
  v40 = v77.left + v8;
  v41 = v77.top + v65;
  v92.left = v40;
  v92.top = v77.top + v65;
  if ( v9 < 0 )
    v9 = 0;
  v42 = v77.right - v9;
  v43 = v77.top + v29;
  v92.bottom = v77.top + v29;
  v92.right = v42;
  SetLastError(0);
  v44 = 0x7FFFFFF;
  if ( v43 <= -134217728 )
  {
    v43 = -134217728;
  }
  else if ( v43 >= 0x7FFFFFF )
  {
    v43 = 0x7FFFFFF;
  }
  if ( v42 <= -134217728 )
  {
    v42 = -134217728;
  }
  else if ( v42 >= 0x7FFFFFF )
  {
    v42 = 0x7FFFFFF;
  }
  if ( v41 <= -134217728 )
  {
    v41 = -134217728;
  }
  else if ( v41 >= 0x7FFFFFF )
  {
    v41 = 0x7FFFFFF;
  }
  if ( v40 <= -134217728 )
  {
    v40 = -134217728;
    goto LABEL_90;
  }
  if ( v40 < 0x7FFFFFF )
LABEL_90:
    v44 = v40;
  RectRgn = CreateRectRgn(v44, v41, v42, v43);
  v45 = RectRgn;
  if ( RectRgn )
  {
    v15 = 0;
    if ( (*((_BYTE *)this + 248) & 4) != 0 )
    {
      v50 = *((_DWORD *)this + 167);
      left = *((_DWORD *)this + 32) - *((_DWORD *)this + 166);
      v73.left = *((_DWORD *)this + 165);
      v73.top = v50;
      if ( v73.left > left )
        left = v73.left;
      v73.right = left;
      v52 = *((_DWORD *)this + 33) - *((_DWORD *)this + 168);
      if ( v50 > v52 )
        v52 = v50;
      v73.bottom = v52;
      SetLastError(0);
      v53 = CreateRectRgnCoerceInvalid(&v73);
      if ( v53 )
      {
        SetLastError(0);
        if ( !CombineRgn(v45, v45, v53, 1) )
        {
          v58 = GetLastError();
          v15 = v58;
          if ( v58 > 0 )
            v15 = (unsigned __int16)v58 | 0x80070000;
          if ( v15 >= 0 )
            v15 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A480, 10LL, v15, 0x1347u);
        }
        DeleteObject(v53);
      }
      else
      {
        v54 = GetLastError();
        v15 = v54;
        if ( v54 > 0 )
          v15 = (unsigned __int16)v54 | 0x80070000;
        if ( v15 >= 0 )
          v15 = CheckGUIHandleQuota(v56, v55, v57);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A480, 10LL, v15, 0x1345u);
      }
    }
    if ( v15 >= 0 )
    {
      GeometryFromHRGN = HrgnFromRects(&v92, 1u, &hrgnDst);
      v15 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        v62 = 5075;
        goto LABEL_127;
      }
      SetLastError(0);
      v59 = hrgnDst;
      if ( !CombineRgn(hrgnDst, hrgnDst, v45, 1) )
      {
        v60 = GetLastError();
        v15 = v60;
        if ( v60 > 0 )
          v15 = (unsigned __int16)v60 | 0x80070000;
        v62 = 5077;
        if ( v15 >= 0 )
          v15 = -2003304445;
        v39 = v15;
        goto LABEL_128;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v59, (struct CRgnGeometryProxy **)this + 72);
      v15 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        v62 = 5078;
        goto LABEL_127;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A480, 10LL, v15, 0x13CDu);
    }
  }
  else
  {
    v46 = GetLastError();
    v15 = v46;
    if ( v46 > 0 )
      v15 = (unsigned __int16)v46 | 0x80070000;
    if ( v15 >= 0 )
      v15 = CheckGUIHandleQuota(v48, v47, v49);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A480, 10LL, v15, 0x13CBu);
  }
LABEL_129:
  ReleaseGDIObject<HRGN__ *>(&hrgnDst);
  ReleaseGDIObject<HRGN__ *>(&v71);
  ReleaseGDIObject<HRGN__ *>(&RectRgn);
  return (unsigned int)v15;
}
