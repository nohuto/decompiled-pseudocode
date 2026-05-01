/*
 * XREFs of ?Stringify@?$consume_Windows_Data_Json_IJsonValue@UIJsonArray@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802887C4
 * Callers:
 *     PersistEnterprisePinDataToRegistry @ 0x180287EFC (PersistEnterprisePinDataToRegistry.c)
 *     PersistEnterprisePinDataToRegistry_Old @ 0x180288158 (PersistEnterprisePinDataToRegistry_Old.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??B?$require_one@UIJsonObject@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA?AUIJsonValue@Json@Data@Windows@2@XZ @ 0x1803E2F88 (--B-$require_one@UIJsonObject@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA-AUIJso.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Data_Json_IJsonValue<winrt::Windows::Data::Json::IJsonArray>::Stringify(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  winrt::impl::require_one<winrt::Windows::Data::Json::IJsonObject,winrt::Windows::Data::Json::IJsonValue>::operator winrt::Windows::Data::Json::IJsonValue(
    a1,
    v5);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v5[0] + 56LL))(v5[0], &v6);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v5);
  *a2 = v6;
  return a2;
}
