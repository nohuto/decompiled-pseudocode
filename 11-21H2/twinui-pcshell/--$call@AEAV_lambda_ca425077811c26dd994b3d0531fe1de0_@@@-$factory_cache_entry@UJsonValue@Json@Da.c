/*
 * XREFs of ??$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?AUJsonValue@Json@Data@Windows@2@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@Z @ 0x1801C252C
 * Callers:
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x1800FB0DC (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800FC56C (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_runtime_activation_factory@UIJsonValueStatics@Json@Data@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1801C2A28 (--$get_runtime_activation_factory@UIJsonValueStatics@Json@Data@Windows@winrt@@@impl@winrt@@YA-AU.c)
 *     ??R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA?AUJsonValue@Json@Data@Windows@winrt@@AEBUIJsonValueStatics@2345@@Z @ 0x1801C5768 (--R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA-AUJsonValue@Json@Data@Windows@winrt@@AEBUIJso.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int *v5; // rax
  __int64 v6; // rsi
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 v9[2]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v11[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+20h] BYREF
  void (__fastcall ***v13)(_QWORD, __int64 *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF

  v12 = a1;
  v10[0] = L"Windows.Data.Json.JsonValue";
  v10[1] = 27LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, (__int64)v10);
  v8 = 0LL;
  v5 = (unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Data::Json::IJsonValueStatics>(
                         &v12,
                         v11,
                         &v8);
  winrt::check_hresult(*v5);
  v13 = v8;
  v6 = *winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v13, v9);
  if ( v9[0] )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v9);
  if ( v6 )
  {
    v9[1] = (__int64)&qword_1807B4768;
    _InterlockedIncrement64(&qword_1807B4768);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v13 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B4770);
    }
    _lambda_ca425077811c26dd994b3d0531fe1de0_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>);
    _InterlockedDecrement64(&qword_1807B4768);
  }
  else
  {
    _lambda_ca425077811c26dd994b3d0531fe1de0_::operator()(a3, a2, &v13);
  }
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v13);
  return a2;
}
