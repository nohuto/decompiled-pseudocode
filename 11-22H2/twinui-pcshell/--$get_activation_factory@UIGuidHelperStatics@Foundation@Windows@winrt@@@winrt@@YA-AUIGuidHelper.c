/*
 * XREFs of ??$get_activation_factory@UIGuidHelperStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIGuidHelperStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1803F7B54
 * Callers:
 *     ??$call@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@?$factory_cache_entry@UGuidHelper@Foundation@Windows@winrt@@UIGuidHelperStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUguid@2@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@Z @ 0x1803F748C (--$call@P6A-AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@-$factory_cache_entry@U.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Foundation::IGuidHelperStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Foundation::IGuidHelperStatics>,
    (__int64)&v5);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v5;
  return a1;
}
