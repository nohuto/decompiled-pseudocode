/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031990 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EDF64 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180007ADC (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000D05C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?WindowMaximizeSnapPostTransition@?$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x180013F3C (-WindowMaximizeSnapPostTransition@-$consume_Udwm_Transitions_Private_IWindowStateTransitionManag.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18001ADD0 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B534 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18001CE70 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020448 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180021188 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002190C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800298A4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800318A0 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035F78 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18004ABB8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800540C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@A.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C4DC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@AE.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C830 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     floor @ 0x180060EC8 (floor.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ @ 0x180062F14 (-UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     PixelAligningFactor @ 0x1801050FC (PixelAligningFactor.c)
 *     ?UpdateRect@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXAEBURect@Foundation@Windows@3@AEBW4ShellTransition@Transitions@Udwm@3@@Z @ 0x180106C6C (-UpdateRect@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@w.c)
 *     ?WindowMaximizeSnapCancel@?$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x1801071B8 (-WindowMaximizeSnapCancel@-$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWin.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWindowList::UpdateWindowScale(struct CWindowData **this, struct CWindowData *a2, int a3)
{
  int v3; // r15d
  char v6; // r12
  double v7; // xmm6_8
  double v8; // xmm10_8
  float v9; // xmm1_4
  float v10; // xmm7_4
  float v11; // xmm1_4
  double v12; // rbx
  int v13; // esi
  int v14; // esi
  int v15; // r14d
  int v16; // r14d
  double v17; // xmm7_8
  __int64 v18; // rcx
  double v19; // xmm0_8
  double v20; // xmm1_8
  float v21; // xmm2_4
  float v22; // xmm1_4
  int v23; // esi
  int v24; // r14d
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rsi
  _DWORD *v27; // rdx
  int v28; // ecx
  int v29; // eax
  int v30; // r8d
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  __int64 v34; // r15
  struct tagRECT *BorderRect; // rax
  struct tagRECT *v36; // r14
  _QWORD *v37; // rcx
  LONG top; // eax
  float v39; // xmm5_4
  int updated; // eax
  unsigned int v41; // r14d
  unsigned __int64 v42; // r9
  __int64 v43; // rdx
  CButton *v44; // rcx
  CBaseObject *v45; // rcx
  CBaseObject *v46; // r14
  __int64 v47; // rcx
  CWindowIconic *v48; // rcx
  int v49; // eax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int i; // esi
  unsigned int j; // esi
  CWindowList *v57; // rcx
  CTopLevelWindow *v58; // rcx
  struct CWindowData *v59; // rax
  CTopLevelWindow3D *v60; // rcx
  int v61; // eax
  unsigned int v62; // esi
  unsigned int v63; // r8d
  int v64; // eax
  float v65; // xmm3_4
  int v66; // eax
  const char *v67; // r9
  unsigned int v68; // r8d
  unsigned int v69; // r8d
  __int64 v70; // rax
  double v71; // rdi
  int v72; // eax
  const char *v73; // r9
  double *v74; // rcx
  double v75; // rdi
  int v76; // eax
  int v77; // [rsp+20h] [rbp-158h]
  bool v78; // [rsp+80h] [rbp-F8h] BYREF
  double v79; // [rsp+88h] [rbp-F0h] BYREF
  int v80; // [rsp+90h] [rbp-E8h] BYREF
  char v81; // [rsp+94h] [rbp-E4h]
  struct tagPOINT v82; // [rsp+98h] [rbp-E0h] BYREF
  double v83; // [rsp+A0h] [rbp-D8h] BYREF
  double v84; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-C8h]
  int v86; // [rsp+B8h] [rbp-C0h] BYREF
  char v87; // [rsp+BCh] [rbp-BCh]
  __int128 v88; // [rsp+C0h] [rbp-B8h] BYREF
  char v89[8]; // [rsp+D0h] [rbp-A8h] BYREF
  char v90[8]; // [rsp+D8h] [rbp-A0h] BYREF
  char v91[8]; // [rsp+E0h] [rbp-98h] BYREF
  struct tagRECT v92; // [rsp+E8h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v3 = a3;
  v80 = a3;
  v6 = 0;
  v7 = *((double *)a2 + 42);
  v8 = v7;
  v9 = v7;
  v10 = *((float *)a2 + 83);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - v9) & _xmm) > 0.0000011920929 )
  {
    *((float *)a2 + 83) = v9;
    v6 = 1;
    v10 = v7;
  }
  if ( v7 == 1.0 )
  {
    v11 = FLOAT_1_0;
    if ( *((float *)a2 + 52) == 1.0 && *((float *)a2 + 53) == 1.0 )
    {
      v12 = 0.0;
    }
    else
    {
      *((_DWORD *)a2 + 53) = 1065353216;
      *((_DWORD *)a2 + 52) = 1065353216;
      v6 = 1;
      v12 = 0.0;
    }
  }
  else
  {
    v12 = 0.0;
    v13 = 0;
    if ( *((_DWORD *)a2 + 56) - *((_DWORD *)a2 + 54) >= 0 )
      v13 = *((_DWORD *)a2 + 56) - *((_DWORD *)a2 + 54);
    v14 = v13 - *((_DWORD *)a2 + 67) - *((_DWORD *)a2 + 66);
    v15 = 0;
    if ( *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55) >= 0 )
      v15 = *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55);
    v16 = v15 - *((_DWORD *)a2 + 69) - *((_DWORD *)a2 + 68);
    if ( v16 && v14 )
    {
      v17 = PixelAligningFactor(this, (unsigned int)v14, &v79, &v84);
      v19 = PixelAligningFactor(v18, (unsigned int)v16, &v82, &v83);
      if ( v84 <= 0.02 && v83 <= 0.02 )
      {
        v20 = ((double)v14 / (double)v16 - v79 / *(double *)&v82) / ((double)v14 / (double)v16);
        if ( v20 < 0.0 )
          *(_QWORD *)&v20 ^= _xmm;
        if ( v20 <= 0.02 )
        {
          v7 = v17;
          v8 = v19;
        }
      }
      v21 = v7;
      v22 = v8;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 52) - v21) & _xmm) > 0.0000011920929
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 53) - v22) & _xmm) > 0.0000011920929 )
      {
        *((float *)a2 + 52) = v21;
        *((float *)a2 + 53) = v22;
        v6 = 1;
      }
    }
    v10 = *((float *)a2 + 83);
    v11 = FLOAT_1_0;
  }
  v23 = 0;
  if ( *((_DWORD *)a2 + 56) - *((_DWORD *)a2 + 54) >= 0 )
    v23 = *((_DWORD *)a2 + 56) - *((_DWORD *)a2 + 54);
  v24 = 0;
  if ( *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55) >= 0 )
    v24 = *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55);
  if ( v10 != v11 )
  {
    v23 = (int)floor((float)((float)v23 * v10) + 0.5);
    v24 = (int)floor((float)((float)v24 * v10) + 0.5);
  }
  *((_DWORD *)a2 + 14) = v23 + *((_DWORD *)a2 + 12);
  v25 = (unsigned int)(v24 + *((_DWORD *)a2 + 13));
  *((_DWORD *)a2 + 15) = v25;
  v26 = (_QWORD *)*((_QWORD *)a2 + 55);
  if ( v26 )
  {
    v27 = (_DWORD *)v26[94];
    v28 = v27[14] - v27[12];
    v29 = v28;
    if ( v28 < 0 )
      v29 = 0;
    LODWORD(v79) = v29;
    v30 = 0;
    if ( v28 >= 0 )
      v30 = v28;
    v31 = v27[15] - v27[13];
    v32 = v31;
    if ( v31 < 0 )
      v32 = 0;
    HIDWORD(v79) = v32;
    v33 = 0;
    if ( v31 >= 0 )
      v33 = v31;
    if ( *((_DWORD *)v26 + 32) != v30 || *((_DWORD *)v26 + 33) != v33 )
    {
      v26[16] = *(_QWORD *)&v79;
      if ( (*((_BYTE *)v26 + 92) & 1) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*v26 + 24LL))(v26, 16LL);
      (*(void (__fastcall **)(_QWORD *, __int64))(*v26 + 24LL))(v26, 2LL);
    }
    v34 = v26[33];
    BorderRect = CTopLevelWindow::GetBorderRect((CTopLevelWindow *)v26, &v92, 0);
    v36 = BorderRect;
    *(struct tagRECT *)(v34 + 304) = *BorderRect;
    v37 = *(_QWORD **)(v34 + 248);
    if ( v37 )
    {
      top = BorderRect->top;
      LODWORD(v79) = v36->left;
      HIDWORD(v79) = top;
      if ( __PAIR64__(top, LODWORD(v79)) != v37[15] )
      {
        v37[15] = *(_QWORD *)&v79;
        (*(void (__fastcall **)(_QWORD *, __int64))(*v37 + 24LL))(v37, 8LL);
        v37 = *(_QWORD **)(v34 + 248);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v37[2] + 16LL) + 16LL) + 360LL))(
        *(_QWORD *)(*(_QWORD *)(v37[2] + 16LL) + 16LL),
        *(unsigned int *)(*(_QWORD *)(v37[2] + 16LL) + 24LL));
      v39 = 0.0;
      if ( *(float *)(v34 + 344) > 0.0 )
        v39 = (float)((*(_DWORD *)(v34 + 324) + 48) / 96);
      *(float *)&v77 = (float)v36->right - v39;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v34 + 264) + 16LL) + 16LL) + 616LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 264) + 16LL) + 16LL),
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v34 + 264) + 16LL) + 24LL));
    }
    if ( v26[38] )
    {
      updated = CTopLevelWindow::UpdateSystemBackdropVisualBorderRect((CTopLevelWindow *)v26);
      v41 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C2,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)updated);
        v42 = v41;
        v43 = 8361LL;
LABEL_63:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v43,
          (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)v42);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF5B,
          (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)v41);
        return v41;
      }
    }
    v44 = (CButton *)v26[97];
    if ( v44 )
    {
      CButton::SetMouseCapture(v44, 0);
      v45 = (CBaseObject *)v26[97];
      if ( v45 )
      {
        CBaseObject::Release(v45);
        v26[97] = 0LL;
      }
    }
    v46 = (CBaseObject *)v26[96];
    if ( v46 )
    {
      v26[96] = 0LL;
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v46 + 120LL))(v46);
      v47 = v26[96];
      if ( v47 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 112LL))(v47);
      CBaseObject::Release(v46);
    }
    v48 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    if ( v48 )
    {
      v49 = CWindowIconic::UpdateSizeOrMargins(v48, 0);
      v41 = v49;
      if ( v49 < 0 )
      {
        v42 = (unsigned int)v49;
        v43 = 8366LL;
        goto LABEL_63;
      }
    }
    v51 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 56)
                                                                  + 104LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56),
            a2);
    v25 = (unsigned __int64)retaddr;
    if ( v51 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20B1,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v51,
        v77);
    for ( i = 0; i < *((_DWORD *)a2 + 130); ++i )
    {
      v25 = *(_QWORD *)(*((_QWORD *)a2 + 62) + 8LL * i);
      v88 = *(_OWORD *)(v25 + 64);
      if ( (struct CWindowData *)v88 == a2 && ((DWORD2(v88) - 1) & 0xFFFFFFFD) == 0 )
        CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated((CSecondaryWindowRepresentation *)v25, v52, v53, v54);
    }
    for ( j = 0; j < *((_DWORD *)a2 + 140); ++j )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 67) + 8LL * j) + 88LL);
      if ( v25 )
        CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)v25, 4096);
    }
    v3 = v80;
  }
  if ( v6 || v3 )
  {
    CWindowList::OnClientMarginsChange((CWindowList *)v25, a2);
    CWindowList::OnClientGlassChange(v57, a2);
    v58 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    if ( v58 )
      CTopLevelWindow::OnWindowScaleUpdated(v58);
    v78 = 0;
    v82 = *(struct tagPOINT *)((char *)a2 + 48);
    CWindowPropertyTracker::GetWindowEndPosition(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
      *((HWND *)a2 + 5),
      &v82);
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
      a2,
      v82,
      &v78);
    if ( !v78 )
      CWindowList::OnPositionChange((CWindowList *)this, a2, 1);
  }
  v59 = this[88];
  if ( v59 == a2 && (*((_BYTE *)v59 + 669) & 0x10) != 0 )
  {
    v60 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
    if ( v60 )
    {
      if ( *((_DWORD *)v60 + 96) == 10 )
      {
        v61 = CTopLevelWindow3D::StopAnimation(v60);
        v62 = v61;
        if ( v61 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF81,
            (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v61);
          return v62;
        }
      }
    }
  }
  v63 = `wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v85 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
                       v89);
    v63 = v85;
  }
  v80 = 1;
  v81 = 3;
  wil::details::ReportUsageToService(&unk_180146750, 29680678LL, (v63 >> 8) & 1, (v63 >> 9) & 1, &v80, 1, 3);
  if ( *((_BYTE *)this + 698) && (*((_DWORD *)a2 + 168) & 0xFFF) == 0x5E )
  {
    try
    {
      CTopLevelWindow::GetActualWindowRect(*((CTopLevelWindow **)a2 + 55), &v92, 0, 1, 1);
      v64 = 0;
      if ( v92.right - v92.left >= 0 )
        v64 = v92.right - v92.left;
      v65 = (float)v64;
      v66 = 0;
      if ( v92.bottom - v92.top >= 0 )
        v66 = v92.bottom - v92.top;
      *(float *)&v88 = (float)v92.left;
      *((float *)&v88 + 1) = (float)v92.top;
      *((float *)&v88 + 2) = v65;
      *((float *)&v88 + 3) = (float)v66;
      winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v79);
      v80 = 6;
      winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::UpdateRect(
        &v79,
        &v88,
        &v80);
      if ( *(_QWORD *)&v79 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v79);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xF97,
                             (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                             v67);
    }
  }
  v68 = `wil::Feature<__WilFeatureTraits_Feature_MSARTest>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_MSARTest>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v85 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_MSARTest>::GetImpl'::`2'::impl,
                       v90);
    v68 = v85;
  }
  v86 = 1;
  v87 = 3;
  wil::details::ReportUsageToService(&unk_180146798, 29698828LL, (v68 >> 8) & 1, (v68 >> 9) & 1, &v86, 1, 3);
  v69 = `wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v85 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
                       v91);
    v69 = v85;
  }
  v82.x = 0;
  LOBYTE(v82.y) = 3;
  wil::details::ReportUsageToService(&unk_1801467A8, 31692694LL, (v69 >> 8) & 1, (v69 >> 9) & 1, &v82, 1, 3);
  if ( *((_BYTE *)this + 697) )
  {
    *((_BYTE *)this + 697) = 0;
    try
    {
      v70 = *((_QWORD *)a2 + 56);
      if ( !v70 || (*((_DWORD *)a2 + 29) & 0x20000000) != 0 || *(_BYTE *)(v70 + 536) )
      {
        winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v83);
        v75 = v83;
        if ( v83 != 0.0 )
        {
          v84 = 0.0;
          v76 = (***(__int64 (__fastcall ****)(double, __int64 *, double *))&v83)(
                  COERCE_DOUBLE(*(_QWORD *)&v83),
                  &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>,
                  &v84);
          if ( v76 < 0 )
            winrt::throw_hresult((unsigned int)v76);
          v12 = v84;
        }
        v79 = v12;
        winrt::impl::consume_Udwm_Transitions_Private_IWindowStateTransitionManager<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::WindowMaximizeSnapCancel(&v79);
        if ( v12 != 0.0 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v79);
        if ( v75 == 0.0 )
          return 0LL;
        v74 = &v83;
      }
      else
      {
        winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v84);
        v71 = v84;
        if ( v84 != 0.0 )
        {
          v83 = 0.0;
          v72 = (***(__int64 (__fastcall ****)(double, __int64 *, double *))&v84)(
                  COERCE_DOUBLE(*(_QWORD *)&v84),
                  &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>,
                  &v83);
          if ( v72 < 0 )
            winrt::throw_hresult((unsigned int)v72);
          v12 = v83;
        }
        v79 = v12;
        winrt::impl::consume_Udwm_Transitions_Private_IWindowStateTransitionManager<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>::WindowMaximizeSnapPostTransition(&v79);
        if ( v12 != 0.0 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v79);
        if ( v71 == 0.0 )
          return 0LL;
        v74 = &v84;
      }
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v74);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xFB9,
                             (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                             v73);
    }
  }
  return 0LL;
}
