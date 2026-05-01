/*
 * XREFs of ??$call@AEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@?$factory_cache_entry@UCompositionTarget@Media@Xaml@UI@Windows@winrt@@UICompositionTargetStatics3@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_b9509f33d83c0e476f815cbceb4935ba_@@@Z @ 0x18077871C
 * Callers:
 *     ?Rendered@CompositionTarget@Media@Xaml@UI@Windows@winrt@@SA?AU?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@6@Uauto_revoke_t@6@AEBU?$EventHandler@URenderedEventArgs@Media@Xaml@UI@Windows@winrt@@@Foundation@56@@Z @ 0x1802ED216 (-Rendered@CompositionTarget@Media@Xaml@UI@Windows@winrt@@SA-AU-$factory_event_revoker@UIComposit.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@winrt@@YA?AUICompositionTargetStatics3@Media@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1807788AC (--$get_activation_factory@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@winrt@@YA-AU.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>::call<_lambda_b9509f33d83c0e476f815cbceb4935ba_ &>(
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
    L"Windows.UI.Xaml.Media.CompositionTarget",
    39);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>(&v9, v7);
  v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
  if ( v9 && (v8 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8), (v10 = v8) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
    _InterlockedIncrement64(&qword_18098EB38);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098EB40);
    }
    *(_QWORD *)a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::CompositionTarget,winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>;
    winrt::Windows::Foundation::IUnknown::add_ref(a2);
    _InterlockedDecrement64(&qword_18098EB38);
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
