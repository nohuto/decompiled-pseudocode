/*
 * XREFs of ??$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@Z @ 0x180699160
 * Callers:
 *     ??0?$IReference@_N@Foundation@Windows@winrt@@QEAA@AEB_N@Z @ 0x1806AB35C (--0-$IReference@_N@Foundation@Windows@winrt@@QEAA@AEB_N@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$get_activation_factory@UIPropertyValueStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIPropertyValueStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x180193C30 (--$get_activation_factory@UIPropertyValueStatics@Foundation@Windows@winrt@@@winrt@@YA-AUIPropert.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateBoolean@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180699488 (-CreateBoolean@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundat.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_30c050dc9be2b5b829416e08712c22ad_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _BYTE **a3)
{
  __int64 v5; // r8
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v7; // r8
  bool v8; // zf
  __int64 v10[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF

  v12 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v11, L"Windows.Foundation.PropertyValue", 32);
  winrt::get_activation_factory<winrt::Windows::Foundation::IPropertyValueStatics>(&v12, v11);
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 && (v13 = 0LL, (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13), (v10[0] = v13) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v10);
    v10[1] = (__int64)&qword_18098DA28;
    _InterlockedIncrement64(&qword_18098DA28);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098DA30);
    }
    LOBYTE(v7) = **a3;
    winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateBoolean(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>,
      a2,
      v7);
    _InterlockedDecrement64(&qword_18098DA28);
    v8 = v12 == 0LL;
  }
  else
  {
    LOBYTE(v5) = **a3;
    winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateBoolean(
      &v12,
      a2,
      v5);
    v8 = v6 == 0LL;
  }
  if ( !v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
