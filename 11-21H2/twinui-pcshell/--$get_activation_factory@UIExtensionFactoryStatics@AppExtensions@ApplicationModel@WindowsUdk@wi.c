/*
 * XREFs of ??$get_activation_factory@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180026AA4
 * Callers:
 *     ??$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@Z @ 0x1800268D4 (--$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@-$factory_cache_entry@UExtensionFactory@.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180026AE8 (--$get_runtime_activation_factory@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@Windo.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
