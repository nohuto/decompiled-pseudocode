/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180025840 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180030C60 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EC040 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009DA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180011CB0 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180014240 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x18001BA88 (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18001EDE0 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002E744 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180038E38 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003A440 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003A9F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x180040DF0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x1800527CC (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     floor @ 0x18005D2C8 (floor.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180065E4C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@QEAAX_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006D852 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800AD184 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180107A2C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     PixelAligningFactor @ 0x180108594 (PixelAligningFactor.c)
 *     ?UpdateRect@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@AEBW4ShellTransition@Transitions@Udwm@3@@Z @ 0x18010D50C (-UpdateRect@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@w.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CWindowList::UpdateWindowScale(struct CWindowData **this, struct CWindowData *a2, int a3)
{
  struct CWindowData *v4; // rbx
  int v6; // r15d
  char v7; // r12
  double v8; // xmm6_8
  double v9; // xmm9_8
  float v10; // xmm1_4
  float v11; // xmm1_4
  int v12; // esi
  int v13; // edi
  float v14; // xmm7_4
  struct tagRECT *v15; // rcx
  __int64 v16; // rdi
  struct CWindowData *v17; // rax
  _DWORD *v19; // rdx
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // edx
  int left; // esi
  LONG top; // r8d
  LONG bottom; // ecx
  LONG v26; // r9d
  _DWORD *v27; // rax
  struct tagPOINT v28; // rax
  CVisual *v29; // rcx
  CButton *v30; // rcx
  CBaseObject *v31; // rsi
  int v32; // eax
  __int64 i; // rdi
  CWindowIconic *v34; // rcx
  int v35; // eax
  unsigned int j; // edi
  unsigned int k; // edi
  __int64 v38; // rdx
  CWindowList *v39; // rcx
  CTopLevelWindow *v40; // rcx
  int v41; // edi
  int v42; // edi
  int v43; // esi
  int v44; // esi
  double v45; // xmm10_8
  __int64 v46; // rcx
  double v47; // xmm0_8
  double v48; // xmm1_8
  float v49; // xmm2_4
  float v50; // xmm1_4
  CBaseObject *v51; // rcx
  __int64 v52; // rcx
  int updated; // eax
  unsigned int v54; // edi
  CTopLevelWindow3D *v55; // rcx
  int v56; // eax
  unsigned int v57; // edi
  int v58; // eax
  int v59; // [rsp+20h] [rbp-D8h]
  int v60; // [rsp+20h] [rbp-D8h]
  bool v61; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+38h] [rbp-C0h] BYREF
  struct tagPOINT v63; // [rsp+40h] [rbp-B8h] BYREF
  struct tagPOINT v64; // [rsp+48h] [rbp-B0h] BYREF
  double v65; // [rsp+50h] [rbp-A8h] BYREF
  float v66; // [rsp+58h] [rbp-A0h]
  float v67; // [rsp+5Ch] [rbp-9Ch]
  double v68; // [rsp+60h] [rbp-98h] BYREF
  struct tagRECT v69; // [rsp+68h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v4 = a2;
  v6 = 0;
  v7 = 0;
  v8 = *((double *)a2 + 42);
  v9 = v8;
  v10 = v8;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 83) - v10) & _xmm) > 0.0000011920929 )
  {
    *((float *)a2 + 83) = v10;
    v7 = 1;
  }
  if ( v8 == 1.0 )
  {
    v11 = FLOAT_1_0;
    if ( *((float *)a2 + 52) != 1.0 || *((float *)a2 + 53) != 1.0 )
    {
      *((_DWORD *)a2 + 53) = 1065353216;
      *((_DWORD *)a2 + 52) = 1065353216;
      v7 = 1;
    }
  }
  else
  {
    v41 = 0;
    if ( *((_DWORD *)a2 + 56) - *((_DWORD *)a2 + 54) >= 0 )
      v41 = *((_DWORD *)a2 + 56) - *((_DWORD *)a2 + 54);
    v42 = v41 - *((_DWORD *)a2 + 67) - *((_DWORD *)a2 + 66);
    v43 = 0;
    if ( *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55) >= 0 )
      v43 = *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55);
    v44 = v43 - *((_DWORD *)a2 + 69) - *((_DWORD *)a2 + 68);
    if ( v44 && v42 )
    {
      v45 = PixelAligningFactor(this, (unsigned int)v42, &v68, &v64);
      v47 = PixelAligningFactor(v46, (unsigned int)v44, &v65, &v63);
      if ( *(double *)&v64 <= 0.02 && *(double *)&v63 <= 0.02 )
      {
        v48 = ((double)v42 / (double)v44 - v68 / v65) / ((double)v42 / (double)v44);
        if ( v48 < 0.0 )
          *(_QWORD *)&v48 ^= _xmm;
        if ( v48 <= 0.02 )
        {
          v8 = v45;
          v9 = v47;
        }
      }
      v49 = v8;
      v50 = v9;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 52) - v49) & _xmm) > 0.0000011920929
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 53) - v50) & _xmm) > 0.0000011920929 )
      {
        *((float *)v4 + 52) = v49;
        *((float *)v4 + 53) = v50;
        v7 = 1;
      }
    }
    v11 = FLOAT_1_0;
  }
  v12 = *((_DWORD *)v4 + 56) - *((_DWORD *)v4 + 54);
  if ( v12 < 0 )
    v12 = 0;
  v13 = *((_DWORD *)v4 + 57) - *((_DWORD *)v4 + 55);
  if ( v13 < 0 )
    v13 = 0;
  v14 = *((float *)v4 + 83);
  if ( v14 != v11 )
  {
    v12 = (int)floor((float)((float)v12 * v14) + 0.5);
    v13 = (int)floor((float)((float)v13 * v14) + 0.5);
  }
  *((_DWORD *)v4 + 14) = v12 + *((_DWORD *)v4 + 12);
  v15 = (struct tagRECT *)(unsigned int)(v13 + *((_DWORD *)v4 + 13));
  *((_DWORD *)v4 + 15) = (_DWORD)v15;
  v16 = *((_QWORD *)v4 + 55);
  if ( !v16 )
    goto LABEL_13;
  v19 = *(_DWORD **)(v16 + 752);
  v20 = v19[14] - v19[12];
  if ( v20 < 0 )
    v20 = 0;
  LODWORD(v62) = v20;
  v21 = v19[15] - v19[13];
  if ( v21 < 0 )
    v21 = 0;
  HIDWORD(v62) = v21;
  if ( *(_DWORD *)(v16 + 128) != v20 || *(_DWORD *)(v16 + 132) != v21 )
  {
    *(_QWORD *)(v16 + 128) = v62;
    if ( (*(_BYTE *)(v16 + 92) & 1) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, 16LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, 2LL);
  }
  v63 = *(struct tagPOINT *)(v16 + 272);
  if ( (*(_BYTE *)(v16 + 624) & 0x20) != 0 )
  {
    v69 = *(struct tagRECT *)(v16 + 676);
    bottom = v69.bottom;
    LODWORD(v62) = v69.right;
    top = v69.top;
    left = v69.left;
  }
  else
  {
    LOBYTE(v19) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
      v19);
    LODWORD(v62) = 0;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) )
    {
      left = 0;
      top = 0;
    }
    else
    {
      v22 = (*(_DWORD *)(*(_QWORD *)(v16 + 752) + 348LL) + 48) / 0x60u;
      left = *(_DWORD *)(v16 + 628) - v22;
      if ( left < 0 )
        left = 0;
      top = *(_DWORD *)(v16 + 632) - v22;
      if ( top < 0 )
        top = 0;
      bottom = *(_DWORD *)(v16 + 640) - v22;
      if ( bottom >= 0 )
        goto LABEL_32;
    }
    bottom = 0;
  }
LABEL_32:
  v69.left = left;
  v26 = v62;
  v69.top = v62;
  v27 = *(_DWORD **)(v16 + 752);
  v69.right = v27[14] - v27[12] - top;
  v69.bottom = v27[15] - v27[13] - bottom;
  v28 = v63;
  *(struct tagRECT *)(*(_QWORD *)&v63 + 304LL) = v69;
  v29 = *(CVisual **)(*(_QWORD *)&v28 + 248LL);
  if ( v29 )
  {
    v64.x = left;
    v64.y = v26;
    CVisual::SetOffset(v29, &v64);
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v63 + 248LL) + 16LL) + 16LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v38 + 16) + 304LL))(
      *(_QWORD *)(v38 + 16),
      *(unsigned int *)(v38 + 24));
    CWindowBorder::SetClipRectangle(
      *(CWindowBorder **)&v63,
      *(struct CRectangleGeometryProxy **)(*(_QWORD *)&v63 + 264LL),
      &v69);
  }
  v30 = *(CButton **)(v16 + 776);
  if ( v30 )
  {
    CButton::SetMouseCapture(v30, 0);
    v51 = *(CBaseObject **)(v16 + 776);
    if ( v51 )
    {
      CBaseObject::Release(v51);
      *(_QWORD *)(v16 + 776) = 0LL;
    }
  }
  v31 = *(CBaseObject **)(v16 + 768);
  if ( v31 )
  {
    *(_QWORD *)(v16 + 768) = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v31 + 128LL))(v31);
    v52 = *(_QWORD *)(v16 + 768);
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 120LL))(v52);
    CBaseObject::Release(v31);
  }
  v32 = *(_DWORD *)(v16 + 88);
  if ( (v32 & 0x4000000) == 0 )
  {
    *(_DWORD *)(v16 + 88) = v32 | 0x4000000;
    for ( i = *(_QWORD *)(v16 + 24); i; i = *(_QWORD *)(i + 24) )
    {
      if ( (*(_BYTE *)(i + 88) & 1) != 0 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
    }
  }
  v34 = (CWindowIconic *)*((_QWORD *)v4 + 61);
  if ( v34 )
  {
    updated = CWindowIconic::UpdateSizeOrMargins(v34, 0);
    v54 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D0,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
        (const char *)(unsigned int)updated,
        v59);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFCC,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v54,
        v60);
      return v54;
    }
  }
  v35 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 58)
                                                                + 104LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
          v4);
  v15 = (struct tagRECT *)retaddr;
  if ( v35 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
      (const char *)(unsigned int)v35,
      v59);
  for ( j = 0; j < *((_DWORD *)v4 + 130); ++j )
  {
    v15 = *(struct tagRECT **)(*((_QWORD *)v4 + 62) + 8LL * j);
    v69 = v15[4];
    if ( *(struct CWindowData **)&v69.left == v4 && ((v69.right - 1) & 0xFFFFFFFD) == 0 )
      CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated((CSecondaryWindowRepresentation *)v15, (__int64)a2);
  }
  for ( k = 0; k < *((_DWORD *)v4 + 140); ++k )
  {
    v15 = *(struct tagRECT **)(*(_QWORD *)(*((_QWORD *)v4 + 67) + 8LL * k) + 88LL);
    if ( v15 )
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)v15, 4096);
  }
LABEL_13:
  if ( v7 || a3 )
  {
    CWindowList::OnClientMarginsChange((CWindowList *)v15, v4);
    CWindowList::OnClientGlassChange(v39, v4);
    v40 = (CTopLevelWindow *)*((_QWORD *)v4 + 55);
    if ( v40 )
      CTopLevelWindow::OnWindowScaleUpdated(v40);
    v61 = 0;
    v63 = *(struct tagPOINT *)((char *)v4 + 48);
    CWindowPropertyTracker::GetWindowEndPosition(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
      *((HWND *)v4 + 5),
      &v63);
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      v4,
      v63,
      &v61);
    if ( !v61 )
      CWindowList::OnPositionChange((CWindowList *)this, v4, 1);
  }
  v17 = this[88];
  if ( v17 == v4
    && (*((_BYTE *)v17 + 677) & 0x10) != 0
    && (v55 = (CTopLevelWindow3D *)*((_QWORD *)v4 + 56)) != 0LL
    && *((_DWORD *)v55 + 96) == 10
    && (v56 = CTopLevelWindow3D::StopAnimation(v55), v57 = v56, v56 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF2,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v56,
      v59);
    return v57;
  }
  else
  {
    if ( *((_BYTE *)this + 696) && (*((_DWORD *)v4 + 170) & 0xFFF) == 0x5E )
    {
      CTopLevelWindow::GetActualWindowRect(*((CTopLevelWindow **)v4 + 55), &v69, 0, 1, 1);
      v58 = 0;
      if ( v69.right - v69.left >= 0 )
        v58 = v69.right - v69.left;
      if ( v69.bottom - v69.top >= 0 )
        v6 = v69.bottom - v69.top;
      *(float *)&v65 = (float)v69.left;
      *((float *)&v65 + 1) = (float)v69.top;
      v66 = (float)v58;
      v67 = (float)v6;
      winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v63);
      LODWORD(v62) = 6;
      winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::UpdateRect(
        &v63,
        &v65,
        &v62);
      if ( *(double *)&v63 != 0.0 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v63);
    }
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapToSnapAnimation>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SnapToSnapAnimation>::GetImpl'::`2'::impl,
      a2);
    return 0LL;
  }
}
