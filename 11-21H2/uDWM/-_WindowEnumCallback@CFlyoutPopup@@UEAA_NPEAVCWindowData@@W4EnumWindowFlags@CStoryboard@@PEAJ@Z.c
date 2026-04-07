/*
 * XREFs of ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DE470
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF1F0 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF590 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x180001EB0 (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180048534 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800D99CC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800D9C28 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DA18C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 */

char __fastcall CFlyoutPopup::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  struct CAnimationComponent *v4; // rbx
  int *v5; // r13
  int v8; // r14d
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  CBaseObject *v12; // rsi
  int v13; // eax
  int v14; // eax
  HWND v15; // rdx
  int WindowEndCloak; // eax
  bool v17; // r13
  int v18; // r8d
  int v19; // edx
  struct tagRECT *p_rc; // rcx
  int v21; // eax
  __int64 v22; // rcx
  CAnimatedTransitionVisual *v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  CAnimatedTransitionVisual *v28; // rcx
  __int64 v29; // rcx
  bool v31; // [rsp+50h] [rbp-39h] BYREF
  int v32; // [rsp+54h] [rbp-35h] BYREF
  int v33; // [rsp+58h] [rbp-31h] BYREF
  CBaseObject *v34; // [rsp+60h] [rbp-29h] BYREF
  struct CAnimationComponent *v35; // [rsp+68h] [rbp-21h] BYREF
  int *v36; // [rsp+70h] [rbp-19h]
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v38; // [rsp+90h] [rbp+7h] BYREF

  v36 = a4;
  v34 = 0LL;
  v4 = 0LL;
  v35 = 0LL;
  v5 = a4;
  v8 = 0;
  if ( (a3 & 1) == 0 )
    goto LABEL_46;
  if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 144LL))(a1) )
    goto LABEL_46;
  v9 = *(_DWORD *)(a2 + 672) & 0xFFF;
  v33 = 0;
  v32 = 0;
  if ( v9 < 0xC )
    goto LABEL_46;
  if ( v9 > 0x10 )
  {
    if ( v9 == 43 )
    {
      v13 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 112LL))(a1);
      v14 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, (struct CWindowData *)a2, v13, 1, &v34);
      v8 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x51Au);
      goto LABEL_12;
    }
    if ( v9 <= 0x4C || v9 > 0x52 && (v9 <= 0x57 || v9 > 0x5C) )
      goto LABEL_46;
  }
  v10 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v9);
  v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          a1,
          (struct CWindowData *)a2,
          1,
          v10,
          0LL,
          0LL,
          -1,
          1,
          &v34);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v12 = v34;
    v15 = *(HWND *)(a2 + 40);
    v38 = *(struct tagRECT *)((char *)v34 + 88);
    rc = v38;
    WindowEndCloak = CWindowPropertyTracker::GetWindowEndCloak(
                       (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                       v15,
                       &v31);
    v17 = v31;
    if ( WindowEndCloak >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *, _QWORD, int *, int *))(*(_QWORD *)a1 + 152LL))(
             a1,
             v9,
             &v33,
             &v32) )
      {
        v18 = v32;
        if ( v17 )
          v18 = -v32;
        v19 = v33;
        if ( v17 )
          v19 = -v33;
        p_rc = &v38;
        if ( !v17 )
          p_rc = &rc;
        OffsetRect(p_rc, v19, v18);
      }
      v21 = *(_DWORD *)(a2 + 672);
      if ( (v21 & 0x1000000) != 0 )
        rc = *(struct tagRECT *)(a2 + 692);
      if ( (v21 & 0x800000) != 0 )
        v38 = *(struct tagRECT *)(a2 + 724);
      CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v12 + 5), &rc);
      v22 = *((_QWORD *)v12 + 5);
      *(struct tagRECT *)(v22 + 872) = v38;
      CVisual::SetDirtyFlags((CVisual *)(v22 + 8), 4096);
      v23 = (CAnimatedTransitionVisual *)*((_QWORD *)v12 + 5);
      if ( v17 )
      {
        CAnimatedTransitionVisual::SetBeginAlpha(v23, 1.0);
        v24 = *((_QWORD *)v12 + 5);
        *(_DWORD *)(v24 + 932) = 0;
      }
      else
      {
        CAnimatedTransitionVisual::SetBeginAlpha(v23, 0.0);
        v24 = *((_QWORD *)v12 + 5);
        *(_DWORD *)(v24 + 932) = 1065353216;
      }
      CVisual::SetDirtyFlags((CVisual *)(v24 + 8), 4096);
    }
    v25 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v9);
    v26 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v25, &v35);
    v8 = v26;
    if ( v26 >= 0 )
    {
      v4 = v35;
      if ( v35 )
      {
        CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v35 + 5), &rc);
        v27 = *((_QWORD *)v4 + 5);
        *(struct tagRECT *)(v27 + 872) = v38;
        CVisual::SetDirtyFlags((CVisual *)(v27 + 8), 4096);
        *(_BYTE *)(*((_QWORD *)v4 + 5) + 987LL) = 1;
        *((_BYTE *)v4 + 74) = 1;
        v28 = (CAnimatedTransitionVisual *)*((_QWORD *)v4 + 5);
        if ( v17 )
        {
          CAnimatedTransitionVisual::SetBeginAlpha(v28, 1.0);
          v29 = *((_QWORD *)v4 + 5);
          *(_DWORD *)(v29 + 932) = 0;
        }
        else
        {
          CAnimatedTransitionVisual::SetBeginAlpha(v28, 0.0);
          v29 = *((_QWORD *)v4 + 5);
          *(_DWORD *)(v29 + 932) = 1065353216;
        }
        CVisual::SetDirtyFlags((CVisual *)(v29 + 8), 4096);
        if ( *((_DWORD *)v4 + 17) != 2 )
          *((_DWORD *)v4 + 17) = 1;
        *((_DWORD *)v12 + 14) = *((_DWORD *)v4 + 14) + 1;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v26, 0x4FCu);
      v4 = v35;
    }
    v5 = v36;
    goto LABEL_42;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x4D6u);
LABEL_12:
  v12 = v34;
LABEL_42:
  if ( v12 )
    CBaseObject::Release(v12);
  if ( v4 )
    CBaseObject::Release(v4);
LABEL_46:
  *v5 = v8;
  return 1;
}
