/*
 * XREFs of ?TryParse@JsonArray@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z @ 0x180288900
 * Callers:
 *     GetEnterprisePinDataFromRegistry @ 0x180287B1C (GetEnterprisePinDataFromRegistry.c)
 * Callees:
 *     ??$call@AEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@?$factory_cache_entry@UJsonArray@Json@Data@Windows@winrt@@UIJsonArrayStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@Z @ 0x180287074 (--$call@AEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@-$factory_cache_entry@UJsonArray@Json@Da.c)
 *     ?TryParse@?$consume_Windows_Data_Json_IJsonArrayStatics@UIJsonArrayStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEAUJsonArray@Json@Data@Windows@3@@Z @ 0x18028885C (-TryParse@-$consume_Windows_Data_Json_IJsonArrayStatics@UIJsonArrayStatics@Json@Data@Windows@win.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Data::Json::JsonArray::TryParse(
        const struct winrt::param::hstring *a1,
        struct winrt::Windows::Data::Json::JsonArray *a2)
{
  char result; // al
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  _InterlockedIncrement64(&qword_18098DF08);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics> )
  {
    result = winrt::impl::consume_Windows_Data_Json_IJsonArrayStatics<winrt::Windows::Data::Json::IJsonArrayStatics>::TryParse(
               &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>,
               a1,
               a2);
    _InterlockedDecrement64(&qword_18098DF08);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098DF08);
    return winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>::call<_lambda_26a4133d97793dfa5f7c7dd7c88d483b_ &>(
             (__int64)a1,
             v3);
  }
  return result;
}
