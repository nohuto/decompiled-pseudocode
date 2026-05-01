/*
 * XREFs of ??$call@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@?$factory_cache_entry@UGuidHelper@Foundation@Windows@winrt@@UIGuidHelperStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUguid@2@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@Z @ 0x1803F748C
 * Callers:
 *     ??$call_factory_cast@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@ZUGuidHelper@452@U3452@V_lambda_ea5e3329626312b463edf2c9eea0dadc_@@@impl@winrt@@YA?A_P$$QEAV_lambda_ea5e3329626312b463edf2c9eea0dadc_@@@Z @ 0x1803F75D8 (--$call_factory_cast@P6A-AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@ZUGuidHelper.c)
 *     ??$call_factory_cast@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@ZUGuidHelper@452@U3452@V_lambda_c3d528fab69363bea486f57b2866680a_@@@impl@winrt@@YA?A_P$$QEAV_lambda_c3d528fab69363bea486f57b2866680a_@@@Z @ 0x180635B2C (--$call_factory_cast@P6A-AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@_ea_180635B2C.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIGuidHelperStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIGuidHelperStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1803F7B54 (--$get_activation_factory@UIGuidHelperStatics@Foundation@Windows@winrt@@@winrt@@YA-AUIGuidHelper.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>::call<winrt::guid (*)(winrt::Windows::Foundation::IGuidHelperStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp+10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v7, L"Windows.Foundation.GuidHelper", 29);
  winrt::get_activation_factory<winrt::Windows::Foundation::IGuidHelperStatics>(&v8, v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_180990808;
    _InterlockedIncrement64(&qword_180990808);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180990810);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>);
    _InterlockedDecrement64(&qword_180990808);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v8);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
