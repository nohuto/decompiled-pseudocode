/*
 * XREFs of ?CreateNumberValue@JsonValue@Json@Data@Windows@winrt@@SA@N@Z @ 0x1802878A0
 * Callers:
 *     ShouldAddEnterprisePinToOutput @ 0x1802883A8 (ShouldAddEnterprisePinToOutput.c)
 * Callees:
 *     ??$call@AEAV_lambda_24df58806cc5abd3d861a8c193996bf4_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_24df58806cc5abd3d861a8c193996bf4_@@@Z @ 0x180286F64 (--$call@AEAV_lambda_24df58806cc5abd3d861a8c193996bf4_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 *     ??R_lambda_24df58806cc5abd3d861a8c193996bf4_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt@@@Z @ 0x180287800 (--R_lambda_24df58806cc5abd3d861a8c193996bf4_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Data::Json::JsonValue::CreateNumberValue(double a1, double a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  double v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v3 = v2;
  v5[0] = &v6;
  v5[2] = &qword_18098DEE8;
  _InterlockedIncrement64(&qword_18098DEE8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
  {
    _lambda_24df58806cc5abd3d861a8c193996bf4_::operator()(
      (__int64)v5,
      v2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>);
    _InterlockedDecrement64(&qword_18098DEE8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098DEE8);
    winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_24df58806cc5abd3d861a8c193996bf4_ &>(
      v2,
      v2,
      (__int64)v5);
  }
  return v3;
}
