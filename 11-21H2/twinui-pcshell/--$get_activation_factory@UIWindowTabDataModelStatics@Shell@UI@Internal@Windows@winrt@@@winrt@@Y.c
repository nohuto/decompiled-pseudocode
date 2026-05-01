/*
 * XREFs of ??$get_activation_factory@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18001A9B0
 * Callers:
 *     ??$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@Z @ 0x18001A7F0 (--$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@-$factory_cache_entry@UWindowTabDataMode.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18001A9F4 (--$get_runtime_activation_factory@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
