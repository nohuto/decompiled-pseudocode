/*
 * XREFs of ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x180069490
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180027340 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180042F50 (-Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180065F3C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180117A74 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x18044CE3C (-IsLauncherVisible@PerSessionState@@YA_N_N@Z.c)
 */

__int64 __fastcall XamlLauncher::OnShellHookMessage(XamlLauncher *this)
{
  __int64 v2; // rcx
  enum _TABLETMODESTATE *v3; // rdx
  TabletModeHelpers *v4; // rcx
  char *v5; // rcx
  unsigned int v6; // r8d
  XamlLauncher *v8; // rdi
  PerSessionState *v9; // rcx
  bool v10; // bl
  enum _TABLETMODESTATE *v11; // rdx
  PerSessionState *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  char IsTabletMode; // al
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 38);
  if ( !v2 )
    return 2147943568LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2) )
  {
    if ( *((_BYTE *)this + 281) )
    {
      *((_BYTE *)this + 281) = 0;
      v8 = (XamlLauncher *)((char *)this - 40);
      v10 = !TabletModeHelpers::IsTabletMode(v4, v3) || IsPPIEdition();
      if ( PerSessionState::HasLoginCompleted(v9) )
      {
        LOBYTE(v12) = !v10;
        if ( !PerSessionState::IsLauncherVisible(v12, (bool)v11) )
          return 0LL;
        XamlLauncher::PublishLauncherVisibilityState(v8, 0);
      }
      else if ( v10 )
      {
        return 0LL;
      }
      IsTabletMode = TabletModeHelpers::IsTabletMode(v12, v11);
      v5 = (char *)v8 + 24;
      v6 = IsTabletMode != 0 ? 4 : 0;
    }
    else
    {
      v5 = (char *)this - 16;
      v6 = 0;
    }
    XamlLauncher::ShowStartView((__int64)v5, 1u, v6);
    return 0LL;
  }
  v13 = XamlLauncher::Dismiss((__int64)this - 16);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F4,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v13,
    v16);
  return v14;
}
