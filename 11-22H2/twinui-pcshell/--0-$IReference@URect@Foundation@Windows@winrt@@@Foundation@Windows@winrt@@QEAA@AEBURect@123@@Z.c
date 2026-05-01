/*
 * XREFs of ??0?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z @ 0x1800DBCB8
 * Callers:
 *     ??$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEBUhstring@6@AEAW4SearchAppActivationMode@3456@AEAURect@Foundation@Windows@6@AEAUDeferralCompletedHandler@Foundation@Windows@6@AEA_NAEAU76@AEAUSearchAppHost@3456@@winrt@@YA?A_PAEBUhstring@0@AEAW4SearchAppActivationMode@Shell@UI@WindowsUdk@0@AEAURect@Foundation@Windows@0@AEAUDeferralCompletedHandler@780@AEA_NAEAU10@AEAUSearchAppHost@3450@@Z @ 0x1800DBB80 (--$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEBUhstring@6@AEA.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@U?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800DBD50 (--$as@U-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Utype@-$abi@UIUnk.c)
 *     ??$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@Z @ 0x180193B24 (--$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ?CreateRect@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x180193C7C (-CreateRect@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>::IReference<winrt::Windows::Foundation::Rect>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+40h] [rbp+18h]

  v4 = a2;
  v6 = &qword_18098DA28;
  _InterlockedIncrement64(&qword_18098DA28);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics> )
  {
    winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateRect(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>,
      &v5,
      a2);
    _InterlockedDecrement64(&qword_18098DA28);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098DA28);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_d2d745a365ed96454831d77c0426b2fd_ &>(
      a1,
      &v5,
      &v4);
  }
  winrt::impl::as<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    a1,
    v5);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  return a1;
}
