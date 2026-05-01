/*
 * XREFs of ??$get_activation_factory@UIWindowingEnvironmentStatics@WindowManagement@UI@Windows@winrt@@@winrt@@YA?AUIWindowingEnvironmentStatics@WindowManagement@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1805B79A8
 * Callers:
 *     ??$call@P6A?AU?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIWindowingEnvironmentStatics@WindowManagement@UI@45@@Z@?$factory_cache_entry@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@UIWindowingEnvironmentStatics@2345@@impl@winrt@@QEAA?AU?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@2@$$QEAP6A?AU34562@AEBUIWindowingEnvironmentStatics@WindowManagement@UI@62@@Z@Z @ 0x1805B77A8 (--$call@P6A-AU-$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collection.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIWindowingEnvironmentStatics@WindowManagement@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1805B7CC0 (--$get_runtime_activation_factory@UIWindowingEnvironmentStatics@WindowManagement@UI@Windows@winr.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::WindowManagement::IWindowingEnvironmentStatics>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::WindowManagement::IWindowingEnvironmentStatics>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
