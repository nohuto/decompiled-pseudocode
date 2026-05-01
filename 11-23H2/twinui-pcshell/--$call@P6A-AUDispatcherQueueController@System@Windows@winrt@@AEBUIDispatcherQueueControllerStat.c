/*
 * XREFs of ??$call@P6A?AUDispatcherQueueController@System@Windows@winrt@@AEBUIDispatcherQueueControllerStatics@234@@Z@?$factory_cache_entry@UDispatcherQueueController@System@Windows@winrt@@UIDispatcherQueueControllerStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueueController@System@Windows@2@AEBUIDispatcherQueueControllerStatics@452@@Z@Z @ 0x1800AEE3C
 * Callers:
 *     ?CreateOnDedicatedThread@DispatcherQueueController@System@Windows@winrt@@SA@XZ @ 0x1800AF65C (-CreateOnDedicatedThread@DispatcherQueueController@System@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ??$get_activation_factory@UIDispatcherQueueControllerStatics@System@Windows@winrt@@@winrt@@YA?AUIDispatcherQueueControllerStatics@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800AEF54 (--$get_activation_factory@UIDispatcherQueueControllerStatics@System@Windows@winrt@@@winrt@@YA-AU.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics>::call<winrt::Windows::System::DispatcherQueueController (*)(winrt::Windows::System::IDispatcherQueueControllerStatics const &)>(
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
    L"Windows.System.DispatcherQueueController",
    0x28uLL);
  winrt::get_activation_factory<winrt::Windows::System::IDispatcherQueueControllerStatics>(&v8, v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0LL) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = &qword_18098E028;
    _InterlockedIncrement64(&qword_18098E028);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E030);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics>);
    _InterlockedDecrement64(&qword_18098E028);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v8);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
