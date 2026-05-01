/*
 * XREFs of ??0?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@QEAA@AEBUhstring@3@@Z @ 0x1806588D4
 * Callers:
 *     ?box_value@winrt@@YA?AUIInspectable@Foundation@Windows@1@AEBUhstring@param@1@@Z @ 0x18065CAA0 (-box_value@winrt@@YA-AUIInspectable@Foundation@Windows@1@AEBUhstring@param@1@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@U?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@Uhstring@winrt@@@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180657AF4 (--$as@U-$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@.c)
 *     ??$call@AEAV_lambda_dc044eb08ded96795f7764053d914671_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_dc044eb08ded96795f7764053d914671_@@@Z @ 0x180658054 (--$call@AEAV_lambda_dc044eb08ded96795f7764053d914671_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ?CreateString@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180659830 (-CreateString@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundati.c)
 */

// Hidden C++ exception states: #wind=2
void (__fastcall ***__fastcall winrt::Windows::Foundation::IReference<winrt::hstring>::IReference<winrt::hstring>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2))(_QWORD, __int64 *, __int64 *)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v6)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp+10h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+18h]

  v5 = a1;
  v4[0] = *a2;
  v5 = v4;
  v7 = &qword_18098DA28;
  _InterlockedIncrement64(&qword_18098DA28);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics> )
  {
    winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateString(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>,
      &v6,
      v4);
    _InterlockedDecrement64(&qword_18098DA28);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098DA28);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_dc044eb08ded96795f7764053d914671_ &>(
      a1,
      (__int64)&v6,
      &v5);
  }
  winrt::impl::as<winrt::Windows::Foundation::IReference<winrt::hstring>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    a1,
    v6);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return a1;
}
