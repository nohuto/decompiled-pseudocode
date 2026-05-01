/*
 * XREFs of ??B?$require_one@UIJsonObject@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA?AUIJsonValue@Json@Data@Windows@2@XZ @ 0x1803E2F88
 * Callers:
 *     ShouldAddEnterprisePinToOutput @ 0x1802883A8 (ShouldAddEnterprisePinToOutput.c)
 *     ?Stringify@?$consume_Windows_Data_Json_IJsonValue@UIJsonArray@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802887C4 (-Stringify@-$consume_Windows_Data_Json_IJsonValue@UIJsonArray@Json@Data@Windows@winrt@@@impl@win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::require_one<winrt::Windows::Data::Json::IJsonObject,winrt::Windows::Data::Json::IJsonValue>::operator winrt::Windows::Data::Json::IJsonValue(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValue>, &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
