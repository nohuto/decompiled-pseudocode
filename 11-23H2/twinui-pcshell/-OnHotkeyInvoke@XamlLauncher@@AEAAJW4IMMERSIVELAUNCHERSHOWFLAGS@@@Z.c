/*
 * XREFs of ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1800F403C
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x1800F4010 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration____Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::_)(Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___1_Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::Invoke @ 0x1801FF440 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801FF440.c)
 * Callees:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F9B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180072170 (-Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800F43A8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1800F4580 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180106170 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x1805030CC (-IsLauncherVisible@PerSessionState@@YA_N_N@Z.c)
 */

__int64 __fastcall XamlLauncher::OnHotkeyInvoke(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  TabletModeHelpers *v5; // rcx
  unsigned int v6; // r8d
  PerSessionState *v8; // rcx
  bool v9; // di
  bool v10; // dl
  PerSessionState *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 392);
  if ( !v4 )
    return 2147943568LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4) )
  {
    if ( *(_BYTE *)(a1 + 369) )
    {
      *(_BYTE *)(a1 + 369) = 0;
      v9 = !TabletModeHelpers::IsTabletMode(v5) || IsPPIEdition();
      if ( PerSessionState::HasLoginCompleted(v8) )
      {
        LOBYTE(v11) = !v9;
        if ( !PerSessionState::IsLauncherVisible(v11, v10) )
          return 0LL;
        XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)a1, 0);
      }
      else if ( v9 )
      {
        return 0LL;
      }
      v6 = TabletModeHelpers::IsTabletMode(v11) ? 4 : 0;
    }
    else
    {
      v6 = a2;
    }
    XamlLauncher::ShowStartView(a1 + 24, 1u, v6);
    return 0LL;
  }
  v12 = XamlLauncher::Dismiss(a1 + 24);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x81D,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v12,
    v14);
  return v13;
}
