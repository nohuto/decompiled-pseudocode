/*
 * XREFs of ??$call@AEAV_lambda_24df58806cc5abd3d861a8c193996bf4_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_24df58806cc5abd3d861a8c193996bf4_@@@Z @ 0x180286F64
 * Callers:
 *     ?CreateNumberValue@JsonValue@Json@Data@Windows@winrt@@SA@N@Z @ 0x1802878A0 (-CreateNumberValue@JsonValue@Json@Data@Windows@winrt@@SA@N@Z.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087AA4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??R_lambda_24df58806cc5abd3d861a8c193996bf4_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt@@@Z @ 0x180287800 (--R_lambda_24df58806cc5abd3d861a8c193996bf4_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CECBA (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ??$get_activation_factory@UIJsonValueStatics@Json@Data@Windows@winrt@@@winrt@@YA?AUIJsonValueStatics@Json@Data@Windows@0@AEBUhstring@param@0@@Z @ 0x1803E2AD0 (--$get_activation_factory@UIJsonValueStatics@Json@Data@Windows@winrt@@@winrt@@YA-AUIJsonValueSta.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_24df58806cc5abd3d861a8c193996bf4_ &>(
        signed __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v9; // [rsp+80h] [rbp+20h] BYREF
  __int64 v10; // [rsp+98h] [rbp+38h] BYREF

  v9 = a1;
  v7[0] = L"Windows.Data.Json.JsonValue";
  v7[1] = 27LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v8, (__int64)v7);
  winrt::get_activation_factory<winrt::Windows::Data::Json::IJsonValueStatics>(&v9, v8);
  v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v9, &v10);
  if ( v10 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
  if ( v5 )
  {
    _InterlockedIncrement64(&qword_18098DEE8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
            v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098DEF0);
    }
    _lambda_24df58806cc5abd3d861a8c193996bf4_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>);
    _InterlockedDecrement64(&qword_18098DEE8);
  }
  else
  {
    _lambda_24df58806cc5abd3d861a8c193996bf4_::operator()(a3, a2, &v9);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v9);
  return a2;
}
