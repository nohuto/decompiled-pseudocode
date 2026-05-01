/*
 * XREFs of ??$call@P6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@AEBUIDispatcherQueueControllerStatics@2345@@Z@?$factory_cache_entry@UDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@UIDispatcherQueueControllerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@2@AEBUIDispatcherQueueControllerStatics@4562@@Z@Z @ 0x18002E960
 * Callers:
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x18002E800 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 *     ?CreateOnCurrentThread@DispatcherQueueController@Dispatching@UI@Microsoft@winrt@@SA@XZ @ 0x1804F56B4 (-CreateOnCurrentThread@DispatcherQueueController@Dispatching@UI@Microsoft@winrt@@SA@XZ.c)
 * Callees:
 *     ??$get_activation_factory@UIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@winrt@@@winrt@@YA?AUIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x18002EA90 (--$get_activation_factory@UIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@winrt@@@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>::call<winrt::Microsoft::UI::Dispatching::DispatcherQueueController (*)(winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-30h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, _QWORD *); // [rsp+60h] [rbp-10h] BYREF

  v6 = a2;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v8,
    L"Microsoft.UI.Dispatching.DispatcherQueueController",
    0x32uLL);
  winrt::get_activation_factory<winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>(&v9, v8);
  if ( v9 && (v7[0] = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v7), (v6 = v7[0]) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v6);
    v7[2] = &qword_18098E788;
    _InterlockedIncrement64(&qword_18098E788);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E790);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>);
    _InterlockedDecrement64(&qword_18098E788);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v9);
  }
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return a2;
}
