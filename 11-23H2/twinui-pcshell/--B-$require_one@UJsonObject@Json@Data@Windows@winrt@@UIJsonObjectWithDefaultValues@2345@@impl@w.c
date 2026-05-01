/*
 * XREFs of ??B?$require_one@UJsonObject@Json@Data@Windows@winrt@@UIJsonObjectWithDefaultValues@2345@@impl@winrt@@QEBA?AUIJsonObjectWithDefaultValues@Json@Data@Windows@2@XZ @ 0x1803E2FE0
 * Callers:
 *     ?GetNamedNumber@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@N@Z @ 0x180287C58 (-GetNamedNumber@-$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::require_one<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>::operator winrt::Windows::Data::Json::IJsonObjectWithDefaultValues(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>, &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
