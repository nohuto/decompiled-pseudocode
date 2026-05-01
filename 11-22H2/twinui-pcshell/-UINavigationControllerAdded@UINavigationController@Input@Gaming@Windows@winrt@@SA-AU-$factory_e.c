/*
 * XREFs of ?UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA?AU?$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@?$abi@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@5@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x1800AA63C
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A8E70 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@?$factory_cache_entry@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@Z @ 0x1800AA880 (--$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@-$factory_cache_entry@UUINavigationContr.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Gaming::Input::UINavigationController::UINavigationControllerAdded(
        winrt::Windows::Foundation::IUnknown *this,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_18098DFD8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics> )
  {
    v9 = winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    _InterlockedDecrement64(&qword_18098DFD8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098DFD8);
    winrt::impl::factory_cache_entry<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>::call<_lambda_84c5eada3affd516c293d063c562fc4a_ &>(
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
