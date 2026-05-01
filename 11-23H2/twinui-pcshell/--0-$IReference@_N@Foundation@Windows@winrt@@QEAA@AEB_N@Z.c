/*
 * XREFs of ??0?$IReference@_N@Foundation@Windows@winrt@@QEAA@AEB_N@Z @ 0x1806AB35C
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@U?$IReference@_N@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@_N@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1806990F8 (--$as@U-$IReference@_N@Foundation@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@.c)
 *     ??$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@Z @ 0x180699160 (--$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ?CreateBoolean@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180699488 (-CreateBoolean@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundat.c)
 */

// Hidden C++ exception states: #wind=2
void (__fastcall ***__fastcall winrt::Windows::Foundation::IReference<bool>::IReference<bool>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _BYTE *a2))(_QWORD, __int64 *, __int64 *)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp+10h] BYREF
  _BYTE *v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 *v7; // [rsp+48h] [rbp+20h]

  v4 = a1;
  LOBYTE(v4) = *a2;
  v6 = &v4;
  v7 = &qword_18098DA28;
  _InterlockedIncrement64(&qword_18098DA28);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics> )
  {
    winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateBoolean(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>,
      &v5,
      (char)v4);
    _InterlockedDecrement64(&qword_18098DA28);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098DA28);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_30c050dc9be2b5b829416e08712c22ad_ &>(
      a1,
      (__int64)&v5,
      &v6);
  }
  winrt::impl::as<winrt::Windows::Foundation::IReference<bool>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    a1,
    v5);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  return a1;
}
