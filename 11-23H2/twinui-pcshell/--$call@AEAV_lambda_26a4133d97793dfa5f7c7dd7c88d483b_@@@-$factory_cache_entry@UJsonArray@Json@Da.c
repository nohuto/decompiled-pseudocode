/*
 * XREFs of ??$call@AEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@?$factory_cache_entry@UJsonArray@Json@Data@Windows@winrt@@UIJsonArrayStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@Z @ 0x180287074
 * Callers:
 *     ?TryParse@JsonArray@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z @ 0x180288900 (-TryParse@JsonArray@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087AA4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?TryParse@?$consume_Windows_Data_Json_IJsonArrayStatics@UIJsonArrayStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEAUJsonArray@Json@Data@Windows@3@@Z @ 0x18028885C (-TryParse@-$consume_Windows_Data_Json_IJsonArrayStatics@UIJsonArrayStatics@Json@Data@Windows@win.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CECBA (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>::call<_lambda_26a4133d97793dfa5f7c7dd7c88d483b_ &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  char v4; // bl
  int v6; // [rsp+20h] [rbp-60h] BYREF
  signed __int64 v7; // [rsp+28h] [rbp-58h] BYREF
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v10[4]; // [rsp+50h] [rbp-30h] BYREF
  signed __int64 v11; // [rsp+70h] [rbp-10h] BYREF

  v9[0] = L"Windows.Data.Json.JsonArray";
  v9[1] = 27LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, (__int64)v9);
  v11 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v6,
    v10,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonArrayStatics>,
    (__int64)&v11);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v11;
  v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v7, &v8);
  if ( v8 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
  if ( v3 )
  {
    v9[2] = &qword_18098DF08;
    _InterlockedIncrement64(&qword_18098DF08);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>,
            v11,
            0LL) )
    {
      v7 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098DF10);
    }
    v4 = winrt::impl::consume_Windows_Data_Json_IJsonArrayStatics<winrt::Windows::Data::Json::IJsonArrayStatics>::TryParse(
           &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>,
           *a2,
           a2[1]);
    _InterlockedDecrement64(&qword_18098DF08);
  }
  else
  {
    v4 = winrt::impl::consume_Windows_Data_Json_IJsonArrayStatics<winrt::Windows::Data::Json::IJsonArrayStatics>::TryParse(
           &v7,
           *a2,
           a2[1]);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v7);
  return v4;
}
