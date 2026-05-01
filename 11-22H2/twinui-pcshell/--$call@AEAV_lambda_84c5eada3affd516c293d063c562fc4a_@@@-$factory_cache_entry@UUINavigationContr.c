/*
 * XREFs of ??$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@?$factory_cache_entry@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@Z @ 0x1800AA880
 * Callers:
 *     ?UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA?AU?$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@?$abi@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@5@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x1800AA63C (-UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA-AU-$factory_e.c)
 * Callees:
 *     ??$get_activation_factory@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@winrt@@YA?AUIUINavigationControllerStatics@Input@Gaming@Windows@0@AEBUhstring@param@0@@Z @ 0x1800AA974 (--$get_activation_factory@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@winrt@@YA.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>::call<_lambda_84c5eada3affd516c293d063c562fc4a_ &>(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  bool v5; // zf
  _BYTE v7[40]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+30h] BYREF
  __int64 v10; // [rsp+88h] [rbp+38h] BYREF

  v9 = a3;
  v8 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v7,
    L"Windows.Gaming.Input.UINavigationController",
    0x2BuLL);
  winrt::get_activation_factory<winrt::Windows::Gaming::Input::IUINavigationControllerStatics>(&v9, v7);
  v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
  if ( v9 && (v8 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8), (v10 = v8) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
    _InterlockedIncrement64(&qword_18098DFD8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098DFE0);
    }
    *(_QWORD *)a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>;
    winrt::Windows::Foundation::IUnknown::add_ref(a2);
    _InterlockedDecrement64(&qword_18098DFD8);
    v5 = v9 == 0LL;
  }
  else
  {
    *(_QWORD *)a2 = v4;
    winrt::Windows::Foundation::IUnknown::add_ref(a2);
    v5 = v4 == 0LL;
  }
  if ( !v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return a2;
}
