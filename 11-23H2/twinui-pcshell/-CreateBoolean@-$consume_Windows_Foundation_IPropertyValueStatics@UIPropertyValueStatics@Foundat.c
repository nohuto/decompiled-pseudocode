/*
 * XREFs of ?CreateBoolean@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180699488
 * Callers:
 *     ??$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@Z @ 0x180699160 (--$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ??0?$IReference@_N@Foundation@Windows@winrt@@QEAA@AEB_N@Z @ 0x1806AB35C (--0-$IReference@_N@Foundation@Windows@winrt@@QEAA@AEB_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateBoolean(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  signed int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v4 = a2;
  LOBYTE(a2) = a3;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v3 + 136LL))(v3, a2, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *v4 = v7;
  return v4;
}
