/*
 * XREFs of ?CreateStringValue@?$consume_Windows_Data_Json_IJsonValueStatics@UIJsonValueStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1803E33E0
 * Callers:
 *     ??$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@Z @ 0x1803E26AC (--$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 *     ??R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt@@@Z @ 0x1803E3094 (--R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt.c)
 *     ?CreateStringValue@JsonValue@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1803E3438 (-CreateStringValue@JsonValue@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@@Z.c)
 *     _anonymous_namespace_::GameMruItemToJsonObject @ 0x1803E34B8 (_anonymous_namespace_--GameMruItemToJsonObject.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Data_Json_IJsonValueStatics<winrt::Windows::Data::Json::IJsonValueStatics>::CreateStringValue(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 80LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
