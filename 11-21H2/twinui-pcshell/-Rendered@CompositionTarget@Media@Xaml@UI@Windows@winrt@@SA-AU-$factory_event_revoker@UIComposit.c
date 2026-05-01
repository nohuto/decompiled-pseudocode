/*
 * XREFs of ?Rendered@CompositionTarget@Media@Xaml@UI@Windows@winrt@@SA?AU?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@6@Uauto_revoke_t@6@AEBU?$EventHandler@URenderedEventArgs@Media@Xaml@UI@Windows@winrt@@@Foundation@56@@Z @ 0x18060F554
 * Callers:
 *     ?RegisterForEvents@XamlAltTabViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@9Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18060F194 (-RegisterForEvents@XamlAltTabViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@.c)
 *     ?RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@9Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180611A18 (-RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerH.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_2b28915c4d6d16a60eaba9d305044a7a_@@@?$factory_cache_entry@UCompositionTarget@Media@Xaml@UI@Windows@winrt@@UICompositionTargetStatics3@23456@@impl@winrt@@QEAA?AUICompositionTargetStatics3@Media@Xaml@UI@Windows@2@AEAV_lambda_2b28915c4d6d16a60eaba9d305044a7a_@@@Z @ 0x18060D820 (--$call@AEAV_lambda_2b28915c4d6d16a60eaba9d305044a7a_@@@-$factory_cache_entry@UCompositionTarget.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::UI::Xaml::Media::CompositionTarget::Rendered(
        winrt::Windows::Foundation::IUnknown *this,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  __int64 v5; // rdi
  signed int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_1807B4628);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3> )
  {
    v9 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    _InterlockedDecrement64(&qword_1807B4628);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B4628);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>::call<_lambda_2b28915c4d6d16a60eaba9d305044a7a_ &>(
      (__int64)this,
      (winrt::Windows::Foundation::IUnknown *)&v9,
      a3);
  }
  v10 = 0LL;
  v5 = v9;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, *a3, &v10);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  v7 = v10;
  *(_QWORD *)this = v5;
  winrt::Windows::Foundation::IUnknown::add_ref(this);
  *((_QWORD *)this + 1) = v7;
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return this;
}
