/*
 * XREFs of ??$call@P6A?AUXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEBUIXamlApplicationStatics@23456@@Z@?$factory_cache_entry@UXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlApplication@XamlExplorerHost@Shell@Internal@Windows@2@AEBUIXamlApplicationStatics@45672@@Z@Z @ 0x18004B8E4
 * Callers:
 *     ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ @ 0x18004B7E4 (-EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ.c)
 * Callees:
 *     ??$get_activation_factory@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@YA?AUIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18004B9FC (--$get_activation_factory@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::call<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication (*)(winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  _QWORD v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v7,
    L"Windows.Internal.Shell.XamlExplorerHost.XamlApplication",
    0x37uLL);
  winrt::get_activation_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>(&v8, v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0LL) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = &qword_18098EA28;
    _InterlockedIncrement64(&qword_18098EA28);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098EA30);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>);
    _InterlockedDecrement64(&qword_18098EA28);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v8);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
