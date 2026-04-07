/*
 * XREFs of ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180038808
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180023EE8 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x180038ADC (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180038E08 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180038E48 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x1800390B4 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18005EEC8 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash@@@details@wil@@QEAA_NXZ @ 0x180063230 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800E4884 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800E5FC8 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x180100774 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___ @ 0x180101440 (CWindowList--ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___.c)
 */

__int64 __fastcall CWindowList::EnsureTopLevelWindow(CWindowList *this, struct CWindowData *a2)
{
  int v4; // eax
  int WindowTarget; // ebx
  __int64 v6; // rdx
  bool IsLogonDesktop; // al
  bool v9; // r9
  CTopLevelWindow *v10; // rbx
  HWND v11; // rdx
  struct CWindowData *v12; // rax
  int updated; // edi
  __int64 v14; // rdx
  struct CWindowData *v15; // rsi
  char IsEnabled; // al
  bool v17; // dl
  CTopLevelWindow *v18; // rdi
  struct CWindowData *v19; // rcx
  char v20; // al
  void *v21; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CWindowData *v23; // [rsp+58h] [rbp+28h] BYREF
  CTopLevelWindow *v24; // [rsp+60h] [rbp+30h] BYREF

  v23 = a2;
  if ( !*((_QWORD *)a2 + 55) )
  {
    v24 = 0LL;
    v4 = CTopLevelWindow::Create(&v24);
    WindowTarget = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x59u);
      v6 = 1514LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)WindowTarget);
      return (unsigned int)WindowTarget;
    }
    IsLogonDesktop = CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 17));
    v10 = v24;
    if ( !IsLogonDesktop )
    {
      v11 = (HWND)*((_QWORD *)a2 + 5);
      if ( v11 )
      {
        if ( (*((_BYTE *)a2 + 668) & 0x20) == 0 )
          CTopLevelWindow::SendTopLevelWindowCommand(v24, v11, a2, v9);
      }
    }
    v12 = v23;
    *((_QWORD *)v10 + 94) = v23;
    *((_QWORD *)v10 + 95) = *((_QWORD *)v12 + 5);
    *((_QWORD *)v23 + 55) = v10;
    updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(v10);
    if ( updated < 0 )
    {
      v14 = 1517LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    v24 = 0LL;
    updated = CTopLevelWindow3D::Create(&v24);
    if ( updated < 0 )
    {
      v14 = 1520LL;
      goto LABEL_11;
    }
    v15 = v23;
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::GetImpl'::`2'::impl);
    v18 = v24;
    if ( IsEnabled && *((_QWORD *)v24 + 42) && !v15 )
      CTopLevelWindow3D::StopAnimation(v24);
    *((_QWORD *)v18 + 42) = v15;
    if ( v15 )
      *(_OWORD *)((char *)v18 + 316) = *((_OWORD *)v15 + 3);
    *((_QWORD *)v23 + 56) = v18;
    v19 = v23;
    if ( (*((_BYTE *)v23 + 667) & 2) != 0 )
    {
      updated = CVisual::SetIsMagnifier(v10, v17);
      if ( updated < 0 )
      {
        v14 = 1526LL;
        goto LABEL_11;
      }
      *((_BYTE *)v23 + 667) &= ~2u;
      v19 = v23;
    }
    if ( (*((_BYTE *)v19 + 667) & 0x40) != 0 )
    {
      CTopLevelWindow::SetVisualProtectContent(v10, 1);
      v19 = v23;
    }
    if ( (*((_BYTE *)v19 + 668) & 2) != 0 )
    {
      updated = CVisual::SetIsCursor(v10, 1);
      if ( updated < 0 )
      {
        v14 = 1537LL;
        goto LABEL_11;
      }
      v24 = (CTopLevelWindow *)&v23;
      CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___(this, &v24);
      v19 = v23;
    }
    v20 = *((_BYTE *)v19 + 669);
    if ( (v20 & 8) != 0 )
    {
      *((_BYTE *)v19 + 669) = v20 & 0xF7;
      updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 56)
                                                                          + 80LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56),
                  *(_QWORD *)(*((_QWORD *)v23 + 82) + 40LL),
                  *((_QWORD *)v23 + 5),
                  0LL);
      if ( updated < 0 )
      {
        v14 = 1553LL;
        goto LABEL_11;
      }
      v19 = v23;
    }
    if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 3) + 432LL))(*((_QWORD *)v19 + 3)) )
    {
      v21 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v23 + 3) + 432LL))(*((_QWORD *)v23 + 3));
      WindowTarget = CTopLevelWindow::CreateWindowTarget(v10, v21);
      if ( WindowTarget < 0 )
      {
        v6 = 1558LL;
        goto LABEL_4;
      }
    }
  }
  return 0LL;
}
