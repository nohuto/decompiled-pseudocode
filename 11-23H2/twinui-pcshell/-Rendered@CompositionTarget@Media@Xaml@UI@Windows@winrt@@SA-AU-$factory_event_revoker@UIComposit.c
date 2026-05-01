/*
 * XREFs of ?Rendered@CompositionTarget@Media@Xaml@UI@Windows@winrt@@SA?AU?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@6@Uauto_revoke_t@6@AEBU?$EventHandler@URenderedEventArgs@Media@Xaml@UI@Windows@winrt@@@Foundation@56@@Z @ 0x1802ED216
 * Callers:
 *     ?RegisterForEvents@?QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18077A124 (-RegisterForEvents@-QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHo.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180789E34 (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@?$factory_cache_entry@UCompositionTarget@Media@Xaml@UI@Windows@winrt@@UICompositionTargetStatics3@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@Z @ 0x18077871C (--$call@AEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@-$factory_cache_entry@UCompositionTarget.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::UI::Xaml::Media::CompositionTarget::Rendered(
        winrt::Windows::Foundation::IUnknown *this,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_18098EB38);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3> )
  {
    v9 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    _InterlockedDecrement64(&qword_18098EB38);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098EB38);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>::call<_lambda_b9509f33d83c0e476f815cbceb4935ba_ &>(
      this,
      &v9);
  }
  v10 = 0LL;
  v5 = v9;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, *a3, &v10);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v10;
  *(_QWORD *)this = v5;
  winrt::Windows::Foundation::IUnknown::add_ref(this);
  *((_QWORD *)this + 1) = v7;
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return this;
}
