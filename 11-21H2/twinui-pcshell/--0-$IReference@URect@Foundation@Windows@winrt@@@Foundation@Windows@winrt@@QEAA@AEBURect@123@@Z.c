/*
 * XREFs of ??0?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z @ 0x1800FA4B8
 * Callers:
 *     ??$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEBUhstring@6@AEAW4SearchAppActivationMode@3456@AEAURect@Foundation@Windows@6@AEAUDeferralCompletedHandler@Foundation@Windows@6@AEA_NAEAU76@AEAUSearchAppHost@3456@@winrt@@YA?AUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@0@AEBUhstring@0@AEAW4SearchAppActivationMode@2340@AEAURect@Foundation@Windows@0@AEAUDeferralCompletedHandler@890@AEA_NAEAU50@AEAUSearchAppHost@2340@@Z @ 0x18019A35C (--$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEBUhstring@6@AEA.c)
 *     ??$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEAY0BD@$$CBGAEAW4SearchAppActivationMode@3456@AEBURect@Foundation@Windows@6@$$T_N@winrt@@YA?AUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@0@AEAY0BD@$$CBGAEAW4SearchAppActivationMode@2340@AEBURect@Foundation@Windows@0@$$QEA$$T$$QEA_N@Z @ 0x1803A099C (--$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEAY0BD@$$CBGAEAW.c)
 * Callees:
 *     ??$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@Z @ 0x180066694 (--$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@U?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800FA40C (--$as@U-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Utype@-$abi@UIUnk.c)
 *     ?CreateRect@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@AEBURect@563@@Z @ 0x1800FAB90 (-CreateRect@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation.c)
 */

// Hidden C++ exception states: #wind=2
void (__fastcall ***__fastcall winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>::IReference<winrt::Windows::Foundation::Rect>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2))(_QWORD, __int64 *, __int64 *)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+40h] [rbp+18h]

  v4 = a2;
  v6 = &qword_1807B3EA8;
  _InterlockedIncrement64(&qword_1807B3EA8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics> )
  {
    winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateRect(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>,
      &v5,
      a2);
    _InterlockedDecrement64(&qword_1807B3EA8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B3EA8);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_d2d745a365ed96454831d77c0426b2fd_ &>(
      a1,
      (__int64)&v5,
      &v4);
  }
  winrt::impl::as<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    a1,
    v5);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  return a1;
}
