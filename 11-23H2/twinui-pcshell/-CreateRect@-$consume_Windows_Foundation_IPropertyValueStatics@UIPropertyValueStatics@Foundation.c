/*
 * XREFs of ?CreateRect@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x180193C7C
 * Callers:
 *     ??0?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z @ 0x1800DBCB8 (--0-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z.c)
 *     ??$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@Z @ 0x180193B24 (--$call@AEAV_lambda_d2d745a365ed96454831d77c0426b2fd_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateRect(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 *v3; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rax
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = *a3;
  v10 = 0LL;
  v6 = *v3;
  v9 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v6 + 200))(v3, &v9, &v10);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  *a2 = v10;
  return a2;
}
