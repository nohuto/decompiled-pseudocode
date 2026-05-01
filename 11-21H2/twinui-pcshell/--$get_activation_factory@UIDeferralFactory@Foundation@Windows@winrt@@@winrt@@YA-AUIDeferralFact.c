/*
 * XREFs of ??$get_activation_factory@UIDeferralFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIDeferralFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x180067980
 * Callers:
 *     ??$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@?$factory_cache_entry@UDeferral@Foundation@Windows@winrt@@UIDeferralFactory@234@@impl@winrt@@QEAA?AUDeferral@Foundation@Windows@2@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@Z @ 0x1800667BC (--$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@-$factory_cache_entry@UDeferral@Foundati.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIDeferralFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800687E0 (--$get_runtime_activation_factory@UIDeferralFactory@Foundation@Windows@winrt@@@impl@winrt@@YA-AU.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Foundation::IDeferralFactory>(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IDeferralFactory>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
