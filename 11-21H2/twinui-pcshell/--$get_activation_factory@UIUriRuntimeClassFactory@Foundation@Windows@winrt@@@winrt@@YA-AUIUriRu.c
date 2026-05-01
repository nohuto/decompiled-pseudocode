/*
 * XREFs of ??$get_activation_factory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIUriRuntimeClassFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18038DA40
 * Callers:
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?AUUri@Foundation@Windows@2@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x18038D6EC (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18038DD58 (--$get_runtime_activation_factory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Foundation::IUriRuntimeClassFactory>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IUriRuntimeClassFactory>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
