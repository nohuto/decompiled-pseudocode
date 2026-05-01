/*
 * XREFs of ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803A9758
 * Callers:
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1803A94A0 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18002555C (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x18010773C (IsUserAssignedAccessSingleApp.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180172508 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x18039DE30 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x1803A5968 (CortanaHelpers--AllowCortanaAttractModeAboveLock.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803A6FB0 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1803A8470 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x1803A87B8 (CortanaHelpers--IsCortanaInAmbientMode.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803A8EB8 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A923C (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1803AC5E4 (CortanaHelpers--SetWindowsHelloActive.c)
 *     ?IsRegisteredWithLightDismiss@SingleViewLightDismissHelper@@QEAA_NXZ @ 0x1805F319C (-IsRegisteredWithLightDismiss@SingleViewLightDismissHelper@@QEAA_NXZ.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1805F31B4 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x1805F40FC (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::OnTargetedMessage(__int64 a1, int a2, __int16 a3)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  int v18; // eax
  bool v19; // sf
  int v20; // eax
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rdi
  SingleViewLightDismissHelper *v24; // rcx
  __int64 *ViewWrapper; // rax
  int v26; // eax
  bool v27; // sf
  int v28; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v30; // [rsp+68h] [rbp+10h] BYREF
  __int64 v31; // [rsp+78h] [rbp+20h] BYREF

  if ( !a2 )
  {
    *(_BYTE *)(a1 + 245) = a3 != 0;
    CortanaDesktopExperienceView::NotifyShellModeChanged((CortanaDesktopExperienceView *)a1);
    return 0LL;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v30 = 0;
    v26 = _RegSetKeyValueWithSDDL(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
            L"AnyAboveLockAppsActive",
            4u,
            (BYTE *)&v30,
            4u);
    v27 = v26 < 0;
    if ( v26 > 0 )
    {
      v26 = (unsigned __int16)v26 | 0x80070000;
      v27 = v26 < 0;
    }
    if ( v27 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"internal\\shell\\private\\inc\\CortanaHelpers.h",
        (const char *)(unsigned int)v26);
    CortanaHelpers::SetWindowsHelloActive();
    v28 = IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL);
    CortanaHelpers::SetIsAssignedAccess(v28 != 0);
    return 0LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v23 = a1 + 296;
    v24 = (SingleViewLightDismissHelper *)(a1 + 296);
    if ( a3 )
    {
      if ( !SingleViewLightDismissHelper::IsRegisteredWithLightDismiss(v24) )
      {
        ViewWrapper = CortanaDesktopExperienceView::GetViewWrapper(a1, &v31);
        SingleViewLightDismissHelper::RegisterWithLightDismiss(
          v23,
          1795LL,
          (a1 + 32) & -(__int64)(a1 != 0),
          *ViewWrapper);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
      }
    }
    else
    {
      SingleViewLightDismissHelper::UnregisterWithLightDismiss(v24);
    }
    return 0LL;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v6 )
  {
    *(_BYTE *)(a1 + 247) = a3 != 0;
    if ( !a3 )
      goto LABEL_68;
    *(_BYTE *)(a1 + 243) = 0;
    if ( *(_BYTE *)(a1 + 246) )
      *(_BYTE *)(a1 + 250) = 1;
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock(a1, v6) )
    {
      if ( !*(_BYTE *)(a1 + 237) )
      {
        v15 = LaunchCortanaApp(L"StartMode=Attract&QuerySource=AttractAboveLock", v14, 0LL);
        v16 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x588,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v15);
          return v16;
        }
      }
    }
    else
    {
LABEL_68:
      if ( *(_BYTE *)(a1 + 247) )
      {
        if ( *(_BYTE *)(a1 + 237) )
          goto LABEL_40;
      }
      else if ( *(_DWORD *)(a1 + 140) != 4 )
      {
        goto LABEL_40;
      }
      v17 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x593,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v17);
    }
LABEL_40:
    if ( *(_BYTE *)(a1 + 246) )
    {
      if ( !*(_BYTE *)(a1 + 247) )
      {
        CortanaHelpers::SetWindowsHelloActive();
LABEL_54:
        *(_BYTE *)(a1 + 237) = 0;
        return 0LL;
      }
    }
    else if ( !*(_BYTE *)(a1 + 247) )
    {
      v30 = 0;
      v18 = _RegSetKeyValueWithSDDL(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
              L"AnyAboveLockAppsActive",
              4u,
              (BYTE *)&v30,
              4u);
      v19 = v18 < 0;
      if ( v18 > 0 )
      {
        v18 = (unsigned __int16)v18 | 0x80070000;
        v19 = v18 < 0;
      }
      if ( v19 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8D,
          (__int64)"internal\\shell\\private\\inc\\CortanaHelpers.h",
          (const char *)(unsigned int)v18);
      CortanaHelpers::SetWindowsHelloActive();
      v20 = IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL);
      CortanaHelpers::SetIsAssignedAccess(v20 != 0);
      v21 = CortanaDesktopExperienceView::NotifyView(
              (CortanaDesktopExperienceView *)a1,
              L"NotifyLockStatusChanged",
              0LL);
      v22 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59E,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v21);
        return v22;
      }
      if ( *(_BYTE *)(a1 + 248) )
      {
        *(_BYTE *)(a1 + 248) = 0;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 64LL))(*(_QWORD *)(a1 + 96));
      }
      goto LABEL_54;
    }
    if ( !*(_BYTE *)(a1 + 248) )
    {
      *(_BYTE *)(a1 + 248) = 1;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 56LL))(*(_QWORD *)(a1 + 96));
    }
    goto LABEL_54;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      v8 = -2147418113;
      v9 = 1523LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    if ( !a3 )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 247) )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 242) )
      return 0LL;
    if ( CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      return 0LL;
    v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
    if ( v10 >= 0 )
      return 0LL;
    v11 = 1517LL;
    goto LABEL_14;
  }
  if ( !a3 )
  {
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock(a1, v7) )
    {
      if ( *(_BYTE *)(a1 + 247) )
      {
        if ( !*(_BYTE *)(a1 + 242) )
        {
          v8 = LaunchCortanaApp(L"StartMode=Attract&QuerySource=AttractAboveLock", v12, 0LL);
          if ( v8 < 0 )
          {
            v9 = 1501LL;
            goto LABEL_26;
          }
        }
      }
    }
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 247) )
  {
    if ( *(_BYTE *)(a1 + 242) )
    {
      if ( !CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      {
        v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
        if ( v10 < 0 )
        {
          v11 = 1487LL;
LABEL_14:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v11,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v10);
        }
      }
    }
  }
  return 0LL;
}
