/*
 * XREFs of ?CreateStringValue@JsonValue@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1803E3438
 * Callers:
 *     ShouldAddEnterprisePinToOutput @ 0x1802883A8 (ShouldAddEnterprisePinToOutput.c)
 * Callees:
 *     ??$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@Z @ 0x1803E26AC (--$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 *     ?CreateStringValue@?$consume_Windows_Data_Json_IJsonValueStatics@UIJsonValueStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1803E33E0 (-CreateStringValue@-$consume_Windows_Data_Json_IJsonValueStatics@UIJsonValueStatics@Json@Data@Wi.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::param::hstring *__fastcall winrt::Windows::Data::Json::JsonValue::CreateStringValue(
        const struct winrt::param::hstring *a1,
        _QWORD *a2)
{
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_18098DEE8;
  _InterlockedIncrement64(&qword_18098DEE8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
  {
    winrt::impl::consume_Windows_Data_Json_IJsonValueStatics<winrt::Windows::Data::Json::IJsonValueStatics>::CreateStringValue(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
      a1,
      a2);
    _InterlockedDecrement64(&qword_18098DEE8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098DEE8);
    winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      &v4);
  }
  return a1;
}
