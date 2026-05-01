/*
 * XREFs of ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180484B68
 * Callers:
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1804848D0 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1800664B0 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     IsUserAssignedAccessSingleApp @ 0x1800F194C (IsUserAssignedAccessSingleApp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x18047C6D8 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x180480D74 (CortanaHelpers--AllowCortanaAttractModeAboveLock.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804823F4 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1804838A4 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x180483BC8 (CortanaHelpers--IsCortanaInAmbientMode.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804842C8 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18048464C (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1804878F0 (CortanaHelpers--SetWindowsHelloActive.c)
 *     ?IsRegisteredWithLightDismiss@SingleViewLightDismissHelper@@QEAA_NXZ @ 0x180749410 (-IsRegisteredWithLightDismiss@SingleViewLightDismissHelper@@QEAA_NXZ.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180749428 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x18074A9A4 (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
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
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  int v19; // eax
  bool v20; // sf
  int v21; // eax
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rdi
  SingleViewLightDismissHelper *v25; // rcx
  __int64 *ViewWrapper; // rax
  int v27; // eax
  bool v28; // sf
  int v29; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v31; // [rsp+68h] [rbp+10h] BYREF
  __int64 v32; // [rsp+78h] [rbp+20h] BYREF

  if ( !a2 )
  {
    *(_BYTE *)(a1 + 245) = a3 != 0;
    CortanaDesktopExperienceView::NotifyShellModeChanged((CortanaDesktopExperienceView *)a1);
    return 0LL;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v31 = 0;
    v27 = _RegSetKeyValueWithSDDL(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
            L"AnyAboveLockAppsActive",
            4u,
            (BYTE *)&v31,
            4u);
    v28 = v27 < 0;
    if ( v27 > 0 )
    {
      v27 = (unsigned __int16)v27 | 0x80070000;
      v28 = v27 < 0;
    }
    if ( v28 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8D,
        (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
        (const char *)(unsigned int)v27);
    CortanaHelpers::SetWindowsHelloActive();
    v29 = IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL);
    CortanaHelpers::SetIsAssignedAccess(v29 != 0);
    return 0LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v24 = a1 + 296;
    v25 = (SingleViewLightDismissHelper *)(a1 + 296);
    if ( a3 )
    {
      if ( !SingleViewLightDismissHelper::IsRegisteredWithLightDismiss(v25) )
      {
        ViewWrapper = CortanaDesktopExperienceView::GetViewWrapper(a1, &v32);
        SingleViewLightDismissHelper::RegisterWithLightDismiss(
          v24,
          1795LL,
          (a1 + 32) & -(__int64)(a1 != 0),
          *ViewWrapper);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
      }
    }
    else
    {
      SingleViewLightDismissHelper::UnregisterWithLightDismiss(v25);
    }
    return 0LL;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v6 )
  {
    *(_BYTE *)(a1 + 247) = a3 != 0;
    v14 = (_BYTE *)(a1 + 246);
    if ( !a3 )
      goto LABEL_68;
    *(_BYTE *)(a1 + 243) = 0;
    if ( *v14 )
      *(_BYTE *)(a1 + 250) = 1;
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock(a1, v6) )
    {
      if ( !*(_BYTE *)(a1 + 237) )
      {
        v16 = LaunchCortanaApp(L"StartMode=Attract&QuerySource=AttractAboveLock", v15, 0LL);
        v17 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x587,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v16);
          return v17;
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
      v18 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x592,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v18);
    }
LABEL_40:
    if ( *v14 )
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
      v31 = 0;
      v19 = _RegSetKeyValueWithSDDL(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
              L"AnyAboveLockAppsActive",
              4u,
              (BYTE *)&v31,
              4u);
      v20 = v19 < 0;
      if ( v19 > 0 )
      {
        v19 = (unsigned __int16)v19 | 0x80070000;
        v20 = v19 < 0;
      }
      if ( v20 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8D,
          (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
          (const char *)(unsigned int)v19);
      CortanaHelpers::SetWindowsHelloActive();
      v21 = IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL);
      CortanaHelpers::SetIsAssignedAccess(v21 != 0);
      v22 = CortanaDesktopExperienceView::NotifyView(
              (CortanaDesktopExperienceView *)a1,
              L"NotifyLockStatusChanged",
              0LL);
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v22);
        return v23;
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
      v9 = 1522LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
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
    v11 = 1516LL;
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
            v9 = 1500LL;
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
          v11 = 1486LL;
LABEL_14:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v11,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v10);
        }
      }
    }
  }
  return 0LL;
}
