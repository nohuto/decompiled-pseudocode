/*
 * XREFs of ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x1800DA828
 * Callers:
 *     ?_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DE070 (-_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DE370 (-_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DE3F0 (-_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180048534 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x1800BFC10 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x1800BFE70 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D0EB0 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x1800D73C4 (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800D7484 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800D99CC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800ED060 (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CFade::_FadeWindow(CFade *this, struct CWindowData *a2, char a3)
{
  bool IsWindowTrackedAndCloakChanged; // r14
  int v7; // eax
  char IsLauncherShownAboveWindow; // al
  bool v9; // dl
  float v10; // xmm7_4
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  int v14; // eax
  struct tagPOINT **v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct tagRECT *v19; // rbx
  bool v20; // cf
  struct tagRECT *v21; // rax
  struct tagRECT v22; // xmm6
  struct tagPOINT *v23; // rcx
  struct tagPOINT *v24; // rcx
  CBaseObject *v26; // [rsp+58h] [rbp-29h] BYREF
  CImmersiveState *v27; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v28; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp-9h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  if ( (*((_DWORD *)a2 + 168) & 0x100000) != 0 )
    IsWindowTrackedAndCloakChanged = (*((_BYTE *)a2 + 668) & 1) == 0
                                  && a3 == CTransitionVisualController::HasVisibleStyle(*((HWND *)a2 + 5));
  else
    IsWindowTrackedAndCloakChanged = CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 22)
                                                                + 48LL),
                                       *((HWND *)a2 + 5),
                                       a3 ^ 1);
  v7 = CImmersiveState::Create(&v27, *((_QWORD *)a2 + 17));
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x1F6u);
    goto LABEL_33;
  }
  IsLauncherShownAboveWindow = CImmersiveState::IsLauncherShownAboveWindow(v27, (const struct tagRECT *)a2);
  v9 = 0;
  if ( !IsLauncherShownAboveWindow )
    v9 = IsWindowTrackedAndCloakChanged;
  if ( !a3 && v9 )
  {
    if ( CStoryboard::HasAnimatingOwnerWindow((CStoryboard *)IsWindowTrackedAndCloakChanged, a2) )
      goto LABEL_33;
LABEL_14:
    v10 = FLOAT_0_99000001;
    goto LABEL_15;
  }
  if ( !v9 )
    goto LABEL_33;
  if ( !a3 )
    goto LABEL_14;
  v10 = 0.0;
LABEL_15:
  if ( (*((_DWORD *)a2 + 168) & 0x20000) == 0 )
  {
    v16 = (*(__int64 (__fastcall **)(CFade *))(*(_QWORD *)this + 112LL))(this);
    v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v16, 0LL, 0LL, -1, 1, &v26);
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x219u);
      goto LABEL_18;
    }
    v15 = (struct tagPOINT **)v26;
    v28 = *(struct tagRECT *)((char *)v26 + 88);
LABEL_26:
    v18 = *((_DWORD *)a2 + 168);
    v19 = (struct tagRECT *)((char *)a2 + 692);
    if ( (v18 & 0x1000000) != 0 )
      v28 = *v19;
    v20 = (v18 & 0x800000) != 0;
    v21 = &v28;
    if ( v20 )
      v21 = v19;
    v22 = *v21;
    CAnimatedTransitionVisual::SetBeginRect(v15[5], &v28);
    v23 = v15[5];
    *(struct tagRECT *)&v23[109].x = v22;
    CVisual::SetDirtyFlags((CVisual *)&v23[1], 4096);
    CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)v15[5], v10);
    v24 = v15[5];
    *(float *)&v24[116].y = 1.0 - v10;
    CVisual::SetDirtyFlags((CVisual *)&v24[1], 4096);
    goto LABEL_31;
  }
  CTransitionVisualController::GetOwnedInclusiveClipRect(
    *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
    a2,
    &v28);
  v11 = -*((_DWORD *)a2 + 13);
  v12 = -*((_DWORD *)a2 + 12);
  rc = v28;
  OffsetRect(&rc, v12, v11);
  v13 = (*(__int64 (__fastcall **)(CFade *, _QWORD))(*(_QWORD *)this + 112LL))(this, *((unsigned int *)a2 + 168));
  v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v13, &rc, 0LL, -1, 1, &v26);
  if ( v14 >= 0 )
  {
    v15 = (struct tagPOINT **)v26;
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x215u);
LABEL_18:
  v15 = (struct tagPOINT **)v26;
LABEL_31:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
LABEL_33:
  if ( v27 )
    CBaseObject::Release(v27);
  return 0LL;
}
