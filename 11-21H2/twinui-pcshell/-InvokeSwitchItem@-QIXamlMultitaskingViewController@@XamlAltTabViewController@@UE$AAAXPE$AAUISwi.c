/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18060EDD0
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180211820 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@WBA@E$AAAXPE$AAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CB14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180420E04 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ??$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x1804479B4 (--$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA-AUISwitchItem@.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180447FB4 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 *     ?WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1804BCD04 (-WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1804BCE34 (-WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ??$cx_safe_cast@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIInspectable@@@Z @ 0x1805F8A1C (--$cx_safe_cast@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIInspectable@@@w.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlAltTabViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  __int64 v4; // rbx
  __int64 v5; // r9
  struct IApplicationView *v6; // rdx
  HWND WindowForView; // rdi
  __int64 v8; // rcx
  HANDLE PropW; // r11
  __int64 v10; // rcx
  int (__fastcall *v11)(__int64, HANDLE, GUID *, __int64 *); // rax
  __int64 v12; // rbx
  UINT v13; // eax
  const char *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  ApplicationViewHelpers *v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80));
  v4 = __abi_winrt_ptr_ctor((__int64)a2);
  v17 = v4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl,
    1u,
    3u,
    v5);
  AppViewDataSourceHelpers::TryGetApplicationViewForItem(&v18, (__int64)a2);
  if ( v18 )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v18,
                            v6);
    PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
    if ( PropW )
    {
      v16 = 0LL;
      v10 = *(_QWORD *)(a1 + 384);
      v11 = *(int (__fastcall **)(__int64, HANDLE, GUID *, __int64 *))(*(_QWORD *)v10 + 40LL);
      v16 = 0LL;
      if ( v11(v10, PropW, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v16) >= 0 )
      {
        v20 = v16;
        v12 = wil::cx_safe_cast<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,IInspectable *>(&v20);
        v20 = v12;
        __abi_winrt_ptr_assign(&v17, v12);
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v13 = dword_1807B6F5C;
        if ( dword_1807B6F5C )
          goto LABEL_10;
        v13 = RegisterWindowMessageW(L"TabSwitch");
        dword_1807B6F5C = v13;
        if ( !v13 )
        {
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x57,
            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
            v14);
          v13 = dword_1807B6F5C;
        }
        if ( v13 )
        {
LABEL_10:
          PostMessageW(WindowForView, v13, 0LL, 0LL);
          WindowTabHostTelemetry::WindowTabHostTabSwitchedToViaAltTab(v15);
        }
        v4 = v17;
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
    }
    else
    {
      WindowTabHostTelemetry::WindowTabHostWindowSwitchedToViaAltTab(v8);
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v18);
  from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(&v19, a2);
  _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
    a1 + 8,
    v4);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
