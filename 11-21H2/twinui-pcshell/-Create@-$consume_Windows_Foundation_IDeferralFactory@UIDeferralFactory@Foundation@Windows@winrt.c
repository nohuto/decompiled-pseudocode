/*
 * XREFs of ?Create@?$consume_Windows_Foundation_IDeferralFactory@UIDeferralFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@AEBUDeferralCompletedHandler@563@@Z @ 0x1800F4040
 * Callers:
 *     ??$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@?$factory_cache_entry@UDeferral@Foundation@Windows@winrt@@UIDeferralFactory@234@@impl@winrt@@QEAA?AUDeferral@Foundation@Windows@2@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@Z @ 0x1800667BC (--$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@-$factory_cache_entry@UDeferral@Foundati.c)
 *     ??R_lambda_05b02c468eda432e9e6db40beed076d3_@@QEBA?AUDeferral@Foundation@Windows@winrt@@AEBUIDeferralFactory@234@@Z @ 0x18039FE70 (--R_lambda_05b02c468eda432e9e6db40beed076d3_@@QEBA-AUDeferral@Foundation@Windows@winrt@@AEBUIDef.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IDeferralFactory<winrt::Windows::Foundation::IDeferralFactory>::Create(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
