/*
 * XREFs of ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F9B0
 * Callers:
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1800F403C (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x1800F4D94 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1802000A0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     ?OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1805016E0 (-OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMI.c)
 * Callees:
 *     ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x18002CCAC (-LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z.c)
 *     _anonymous_namespace_::IsUndockingDisabled @ 0x1800A8784 (_anonymous_namespace_--IsUndockingDisabled.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x1800BAB98 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18018D0F4 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x18019845C (-IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z.c)
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x1801B3A68 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Start@$$V@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@XZ @ 0x1804FF9D8 (--$Start@$$V@LauncherInvokeActivity@CommonStartTelemetry@@SA-AV01@XZ.c)
 *     ?ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ @ 0x180501FBC (-ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ.c)
 *     ?StartInvokeSkipped_ForegroundOnLockZBand@StartWindowTelemetry@@SAXXZ @ 0x1805020E4 (-StartInvokeSkipped_ForegroundOnLockZBand@StartWindowTelemetry@@SAXXZ.c)
 *     ?StartInvokeSkipped_UndockingDisabled@StartWindowTelemetry@@SAXXZ @ 0x18050214C (-StartInvokeSkipped_UndockingDisabled@StartWindowTelemetry@@SAXXZ.c)
 *     ?Stop@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXJ@Z @ 0x180502378 (-Stop@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXJ@Z.c)
 *     ?DismissPopupMenu@@YA_NXZ @ 0x180502A2C (-DismissPopupMenu@@YA_NXZ.c)
 */

__int64 __fastcall XamlLauncher::ShowStartView(__int64 a1, unsigned int a2, unsigned int a3)
{
  HWND ForegroundWindow; // rax
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // ebx
  int v12[4]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v13[320]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 368) )
    return 2147943568LL;
  if ( (a3 & 8) == 0 )
  {
    if ( !DismissPopupMenu() && (a3 & 4) == 0 )
    {
      StartWindowTelemetry::ShowAttemptSkippedDueToOpenContextMenu();
      return 0LL;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 176) + 56LL))(*(_QWORD *)(a1 + 176));
    ForegroundWindow = GetForegroundWindow();
    if ( (unsigned int)GetWindowBand(ForegroundWindow, v12) && v12[0] == 17 )
    {
      StartWindowTelemetry::StartInvokeSkipped_ForegroundOnLockZBand();
      return 0LL;
    }
  }
  if ( (unsigned __int8)anonymous_namespace_::IsUndockingDisabled() )
  {
    StartWindowTelemetry::StartInvokeSkipped_UndockingDisabled();
    return 0LL;
  }
  v12[0] = 0;
  if ( !XamlLauncher::IsStartMenuEnabled((XamlLauncher *)(a1 - 24), (enum LauncherTelemetry::Mode *)v12) )
  {
    CommonStartTelemetry::LauncherInvokeActivity::Start<>((CommonStartTelemetry::LauncherInvokeActivity *)v13);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened((__int64)v13, a2, a3, v12[0]);
    CommonStartTelemetry::LauncherInvokeActivity::Stop((CommonStartTelemetry::LauncherInvokeActivity *)v13, 0);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v13);
    return 0LL;
  }
  if ( a2 == 1 )
  {
    if ( XamlLauncher::DidHolographicHandleHotKey((XamlLauncher *)(a1 - 24)) )
      return 0LL;
  }
  else if ( a2 == 11 || a2 == 16 )
  {
    goto LABEL_20;
  }
  v8 = ImmersiveMonitorHelper::AdjustMonitorConnectedIfNeeded(*(ImmersiveMonitorHelper **)(a1 + 192));
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x188,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v8,
      v12[0]);
    return v9;
  }
LABEL_20:
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 368) + 56LL))(
          *(_QWORD *)(a1 + 368),
          a2,
          a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v10,
      v12[0]);
    return v11;
  }
  return 0LL;
}
