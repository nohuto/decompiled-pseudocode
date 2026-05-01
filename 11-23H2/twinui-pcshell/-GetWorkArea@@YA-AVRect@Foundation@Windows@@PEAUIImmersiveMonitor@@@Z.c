/*
 * XREFs of ?GetWorkArea@@YA?AVRect@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z @ 0x18006F334
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@UTaskGroupDataSourceAdapter@TaskGroups@789winrt@@PEAUIRemoteSessionWindowManager@789ABI@@@Z @ 0x18007B4D8 (-RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDe.c)
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076B524 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

float *__fastcall GetWorkArea(float *a1, __int64 *a2)
{
  __int64 v2; // rax
  int v4; // eax
  float *result; // rax
  int v6; // r9d
  int v7; // ecx
  int v8; // edx
  int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *a2;
  *(_OWORD *)v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, int *))(v2 + 88))(a2, v9);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v4,
      v9[0]);
  result = a1;
  v6 = v9[1];
  v7 = v9[2] - v9[0];
  v8 = v9[3] - v9[1];
  *a1 = (float)v9[0];
  a1[1] = (float)v6;
  a1[2] = (float)v7;
  a1[3] = (float)v8;
  return result;
}
