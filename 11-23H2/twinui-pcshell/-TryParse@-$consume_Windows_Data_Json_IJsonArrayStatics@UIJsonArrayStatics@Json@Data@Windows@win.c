/*
 * XREFs of ?TryParse@?$consume_Windows_Data_Json_IJsonArrayStatics@UIJsonArrayStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEAUJsonArray@Json@Data@Windows@3@@Z @ 0x18028885C
 * Callers:
 *     ??$call@AEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@?$factory_cache_entry@UJsonArray@Json@Data@Windows@winrt@@UIJsonArrayStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@Z @ 0x180287074 (--$call@AEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@-$factory_cache_entry@UJsonArray@Json@Da.c)
 *     ?TryParse@JsonArray@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z @ 0x180288900 (-TryParse@JsonArray@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_Data_Json_IJsonArrayStatics<winrt::Windows::Data::Json::IJsonArrayStatics>::TryParse(
        __int64 *a1,
        _QWORD *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, winrt::Windows::Foundation::IUnknown *, _BYTE *); // rbx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-30h] BYREF

  v3 = *a1;
  v9 = 0LL;
  v10[0] = 0;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, winrt::Windows::Foundation::IUnknown *, _BYTE *))(*(_QWORD *)v3 + 56LL);
  winrt::Windows::Foundation::IUnknown::operator=(a3, (winrt::Windows::Foundation::IUnknown *)&v9);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v9);
  v7 = v6(v3, *a2, a3, v10);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  return v10[0];
}
