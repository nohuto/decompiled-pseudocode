/*
 * XREFs of ??$get_activation_factory@UIUriEscapeStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIUriEscapeStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18038D9FC
 * Callers:
 *     ??$call@AEAV_lambda_d5baf9e97843045c2618cd983def5f01_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriEscapeStatics@234@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_d5baf9e97843045c2618cd983def5f01_@@@Z @ 0x18038D848 (--$call@AEAV_lambda_d5baf9e97843045c2618cd983def5f01_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIUriEscapeStatics@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18038DA84 (--$get_runtime_activation_factory@UIUriEscapeStatics@Foundation@Windows@winrt@@@impl@winrt@@YA-A.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Foundation::IUriEscapeStatics>(_QWORD *a1, __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IUriEscapeStatics>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
