/*
 * XREFs of ??$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA?AUhstring@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18070DEA4
 * Callers:
 *     ??$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEAUhstring@winrt@@@Z @ 0x180709D4C (--$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV-$basic_stri.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_no_interface@winrt@@QEAA@XZ @ 0x1804F9730 (--0hresult_no_interface@winrt@@QEAA@XZ.c)
 *     ??$as@U?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@Uhstring@winrt@@@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180657AF4 (--$as@U-$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Uhstring@4@@impl@winrt@@QEBA@XZ @ 0x1806FDCC8 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@Uhstring@winrt@@@Foundation@Windows.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall winrt::impl::unbox_value_type<winrt::hstring,winrt::Windows::Foundation::IInspectable const &>(
        volatile signed __int32 **a1,
        __int64 (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rdx
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  if ( !v3 )
  {
    winrt::hresult_no_interface::hresult_no_interface((winrt::hresult_no_interface *)pExceptionObject);
    throw (winrt::hresult_no_interface *)pExceptionObject;
  }
  winrt::impl::as<winrt::Windows::Foundation::IReference<winrt::hstring>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v6,
    v3);
  winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::hstring>,winrt::hstring>::Value(
    &v6,
    a1);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return a1;
}
