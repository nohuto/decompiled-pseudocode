/*
 * XREFs of ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x1800DD90C
 * Callers:
 *     ?_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0E60 (-_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1170 (-_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E11F0 (-_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000E3C0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000F38C (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000F520 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180045FD8 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x1800C4AE0 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D62E8 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x1800DB344 (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800EBD4C (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
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
  int v18; // edx
  struct tagRECT *v19; // rax
  struct tagRECT v20; // xmm6
  struct tagPOINT *v21; // rax
  CVisual *v22; // rcx
  LONG x; // eax
  struct tagPOINT *v24; // rax
  CVisual *v25; // rcx
  LONG v26; // eax
  CBaseObject *v28; // [rsp+58h] [rbp-29h] BYREF
  CImmersiveState *v29; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v30; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp-9h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  if ( (*((_DWORD *)a2 + 170) & 0x100000) != 0 )
    IsWindowTrackedAndCloakChanged = (*((_BYTE *)a2 + 676) & 1) == 0
                                  && a3 == CTransitionVisualController::HasVisibleStyle(*((HWND *)a2 + 5));
  else
    IsWindowTrackedAndCloakChanged = CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 23)
                                                                + 48LL),
                                       *((HWND *)a2 + 5),
                                       a3 ^ 1);
  v7 = CImmersiveState::Create(&v29, *((_QWORD *)a2 + 17));
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x1E2u);
    goto LABEL_36;
  }
  IsLauncherShownAboveWindow = CImmersiveState::IsLauncherShownAboveWindow(v29, (const struct tagRECT *)a2);
  v9 = 0;
  if ( !IsLauncherShownAboveWindow )
    v9 = IsWindowTrackedAndCloakChanged;
  if ( !a3 && v9 )
  {
    if ( CStoryboard::HasAnimatingOwnerWindow((CStoryboard *)IsWindowTrackedAndCloakChanged, a2) )
      goto LABEL_36;
LABEL_14:
    v10 = FLOAT_0_99000001;
    goto LABEL_15;
  }
  if ( !v9 )
    goto LABEL_36;
  if ( !a3 )
    goto LABEL_14;
  v10 = 0.0;
LABEL_15:
  if ( (*((_DWORD *)a2 + 170) & 0x20000) == 0 )
  {
    v16 = (*(__int64 (__fastcall **)(CFade *))(*(_QWORD *)this + 112LL))(this);
    v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v16, 0LL, 0LL, 0xFFFFFFFF, 1, &v28);
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x205u);
      goto LABEL_18;
    }
    v15 = (struct tagPOINT **)v28;
    v30 = *(struct tagRECT *)((char *)v28 + 88);
LABEL_26:
    v18 = *((_DWORD *)a2 + 170);
    if ( (v18 & 0x1000000) != 0 )
      v30 = *(struct tagRECT *)((char *)a2 + 700);
    v19 = &v30;
    if ( (v18 & 0x800000) != 0 )
      v19 = (struct tagRECT *)((char *)a2 + 700);
    v20 = *v19;
    CAnimatedTransitionVisual::SetBeginRect(v15[5], &v30);
    v21 = v15[5];
    v22 = (CVisual *)&v21[1];
    *(struct tagRECT *)&v21[109].x = v20;
    x = v21[12].x;
    if ( (x & 0x1000) == 0 )
    {
      *((_DWORD *)v22 + 22) = x | 0x1000;
      CVisual::PropagateDirtyChildren(v22);
    }
    CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)v15[5], v10);
    v24 = v15[5];
    v25 = (CVisual *)&v24[1];
    *(float *)&v24[116].y = 1.0 - v10;
    v26 = v24[12].x;
    if ( (v26 & 0x1000) == 0 )
    {
      *((_DWORD *)v25 + 22) = v26 | 0x1000;
      CVisual::PropagateDirtyChildren(v25);
    }
    goto LABEL_34;
  }
  CTransitionVisualController::GetOwnedInclusiveClipRect(
    *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
    a2,
    &v30);
  v11 = -*((_DWORD *)a2 + 13);
  v12 = -*((_DWORD *)a2 + 12);
  rc = v30;
  OffsetRect(&rc, v12, v11);
  v13 = (*(__int64 (__fastcall **)(CFade *, _QWORD))(*(_QWORD *)this + 112LL))(this, *((unsigned int *)a2 + 170));
  v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v13, &rc, 0LL, 0xFFFFFFFF, 1, &v28);
  if ( v14 >= 0 )
  {
    v15 = (struct tagPOINT **)v28;
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x201u);
LABEL_18:
  v15 = (struct tagPOINT **)v28;
LABEL_34:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
LABEL_36:
  if ( v29 )
    CBaseObject::Release(v29);
  return 0LL;
}
