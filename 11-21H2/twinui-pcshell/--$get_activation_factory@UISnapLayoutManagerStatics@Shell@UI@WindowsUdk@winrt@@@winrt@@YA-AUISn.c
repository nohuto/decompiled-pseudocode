/*
 * XREFs of ??$get_activation_factory@UISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUISnapLayoutManagerStatics@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180067FBC
 * Callers:
 *     ??$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@?$factory_cache_entry@USnapLayoutManager@Shell@UI@WindowsUdk@winrt@@UISnapLayoutManagerStatics@2345@@impl@winrt@@QEAA?AUSnapLayoutManager@Shell@UI@WindowsUdk@2@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@Z @ 0x18006758C (--$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@-$factory_cache_entry@USnapLayoutManager.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068C94 (--$get_runtime_activation_factory@UISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@impl@wi.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
