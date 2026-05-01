/*
 * XREFs of ??$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@?$factory_cache_entry@UDeferral@Foundation@Windows@winrt@@UIDeferralFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@Z @ 0x1800B21D8
 * Callers:
 *     ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x1800B20A0 (-GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA-AUDeferr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$get_activation_factory@UIDeferralFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIDeferralFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800B22E4 (--$get_activation_factory@UIDeferralFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIDeferralFact.c)
 *     ?Create@?$consume_Windows_Foundation_IDeferralFactory@UIDeferralFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUDeferralCompletedHandler@Foundation@Windows@3@@Z @ 0x1800B2330 (-Create@-$consume_Windows_Foundation_IDeferralFactory@UIDeferralFactory@Foundation@Windows@winrt.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>::call<_lambda_05b02c468eda432e9e6db40beed076d3_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"Windows.Foundation.Deferral", 0x1BuLL);
  winrt::get_activation_factory<winrt::Windows::Foundation::IDeferralFactory>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_18098DA08;
    _InterlockedIncrement64(&qword_18098DA08);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098DA10);
    }
    winrt::impl::consume_Windows_Foundation_IDeferralFactory<winrt::Windows::Foundation::IDeferralFactory>::Create(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_18098DA08);
    v6 = v10 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_Foundation_IDeferralFactory<winrt::Windows::Foundation::IDeferralFactory>::Create(
      &v10,
      a2,
      *a3);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
