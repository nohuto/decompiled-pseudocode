/*
 * XREFs of ?GetNamedNumber@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@N@Z @ 0x180287C58
 * Callers:
 *     GetStoredEnterprisePinGeneration @ 0x180287CFC (GetStoredEnterprisePinGeneration.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??B?$require_one@UJsonObject@Json@Data@Windows@winrt@@UIJsonObjectWithDefaultValues@2345@@impl@winrt@@QEBA?AUIJsonObjectWithDefaultValues@Json@Data@Windows@2@XZ @ 0x1803E2FE0 (--B-$require_one@UJsonObject@Json@Data@Windows@winrt@@UIJsonObjectWithDefaultValues@2345@@impl@w.c)
 */

// Hidden C++ exception states: #wind=1
double __fastcall winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedNumber(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  double v7; // [rsp+38h] [rbp-30h] BYREF

  v7 = 0.0;
  winrt::impl::require_one<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>::operator winrt::Windows::Data::Json::IJsonObjectWithDefaultValues(
    a1,
    &v6);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, double *))(*(_QWORD *)v6 + 80LL))(v6, *a2, v3, &v7);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v6);
  return v7;
}
