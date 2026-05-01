/*
 * XREFs of ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180027340
 * Callers:
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x180065EFC (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x180069490 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1801AB3D0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     ?OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18044B880 (-OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMI.c)
 * Callees:
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x180027450 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18002765C (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?IsForegroundOnLockZBand@ImmersiveMonitorHelper@@QEBA_NXZ @ 0x1800276C8 (-IsForegroundOnLockZBand@ImmersiveMonitorHelper@@QEBA_NXZ.c)
 *     ?DismissPopupMenu@@YA_NXZ @ 0x180027710 (-DismissPopupMenu@@YA_NXZ.c)
 *     ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x180045588 (-LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180046C78 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180069A9C (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180069B88 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_180069B88.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ @ 0x18044BE70 (-ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x18044BEE8 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?StartInvokeSkipped_ForegroundOnLockZBand@StartWindowTelemetry@@SAXXZ @ 0x18044BF94 (-StartInvokeSkipped_ForegroundOnLockZBand@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall XamlLauncher::ShowStartView(__int64 a1, unsigned int a2, unsigned int a3)
{
  ImmersiveMonitorHelper *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  int v12[80]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 320) )
    return 2147943568LL;
  if ( !DismissPopupMenu() && (a3 & 4) == 0 )
  {
    StartWindowTelemetry::ShowAttemptSkippedDueToOpenContextMenu();
    return 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 56LL))(*(_QWORD *)(a1 + 168));
  if ( ImmersiveMonitorHelper::IsForegroundOnLockZBand(v6) )
  {
    StartWindowTelemetry::StartInvokeSkipped_ForegroundOnLockZBand();
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 296) || *(_BYTE *)(a1 + 298) )
  {
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      v12,
      "LauncherInvokeActivity");
    *(_QWORD *)v12 = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    CommonStartTelemetry::LauncherInvokeActivity::StartActivity((CommonStartTelemetry::LauncherInvokeActivity *)v12);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened(v12, a2, a3, *(_BYTE *)(a1 + 296) != 0 ? 3 : 21);
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v12,
      0LL);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v12);
    return 0LL;
  }
  if ( a2 == 1 )
  {
    if ( XamlLauncher::DidHolographicHandleHotKey((XamlLauncher *)(a1 - 24)) )
      return 0LL;
  }
  else if ( a2 == 11 )
  {
    goto LABEL_9;
  }
  v7 = ImmersiveMonitorHelper::AdjustMonitorConnectedIfNeeded(*(ImmersiveMonitorHelper **)(a1 + 184));
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v7,
      v12[0]);
    return v8;
  }
LABEL_9:
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 56LL))(
         *(_QWORD *)(a1 + 320),
         a2,
         a3);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14B,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v9,
    v12[0]);
  return v10;
}
