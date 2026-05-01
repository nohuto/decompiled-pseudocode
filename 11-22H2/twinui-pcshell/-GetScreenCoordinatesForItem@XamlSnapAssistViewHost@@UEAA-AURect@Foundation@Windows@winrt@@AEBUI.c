/*
 * XREFs of ?GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@UEAA?AURect@Foundation@Windows@winrt@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@45@@Z @ 0x18076CA30
 * Callers:
 *     ?GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@WBA@EAA?AURect@Foundation@Windows@winrt@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@45@@Z @ 0x1802AE600 (-GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@WBA@EAA-AURect@Foundation@Windows@winrt@@AE.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Window@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067D160 (-Window@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorer.c)
 *     ??$to_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBUIUnknown@Foundation@4winrt@@@Z @ 0x180769980 (--$to_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItem@Multi.c)
 *     ?GetItemLocationForAnimation@__ISnapAssistPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVRect@Foundation@Windows@@PE$AAUISwitchItem@Multitasking@4Internal@8@@Z @ 0x18076C98C (-GetItemLocationForAnimation@__ISnapAssistPublicNonVirtuals@Switcher@Experiences@ComposableShell.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall XamlSnapAssistViewHost::GetScreenCoordinatesForItem(
        __int64 a1,
        _OWORD *a2,
        __int64 (__fastcall ****a3)(_QWORD, __int64, __int64 *))
{
  _OWORD *v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  HWND v9; // rax
  const char *v10; // r9
  float v12; // [rsp+20h] [rbp-78h] BYREF
  float v13; // [rsp+24h] [rbp-74h]
  float v14; // [rsp+28h] [rbp-70h]
  float v15; // [rsp+2Ch] [rbp-6Ch]
  __int128 v16; // [rsp+30h] [rbp-68h]
  _OWORD *v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  struct tagPOINT Points; // [rsp+50h] [rbp-48h] BYREF
  int v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+5Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = a2;
  v17 = a2;
  *a2 = 0LL;
  try
  {
    v6 = __abi_winrt_cast_to(
           0,
           *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 152),
           (__int64)&_uuidof__AVSnapAssist_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v7 = __abi_winrt_ptr_ctor(v6);
    v18 = v7;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v8 = to_cx<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(a3);
    *(_QWORD *)&v16 = v8;
    WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistPublicNonVirtuals::GetItemLocationForAnimation(
      v7,
      (__int64)&v12,
      v8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    Points.x = (int)v12;
    Points.y = (int)v13;
    v20 = (int)(float)(v12 + v14);
    v21 = (int)(float)(v13 + v15);
    v9 = (HWND)winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::Window((__int64 *)(a1 + 160));
    MapWindowPoints(v9, 0LL, &Points, 2u);
    *(float *)&v16 = (float)Points.x;
    *((float *)&v16 + 1) = (float)Points.y;
    *((float *)&v16 + 2) = (float)(v20 - Points.x);
    *((float *)&v16 + 3) = (float)(v21 - Points.y);
    *v4 = v16;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1BF,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      v10);
    return v17;
  }
  return v4;
}
