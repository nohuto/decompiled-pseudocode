/*
 * XREFs of ??$get_activation_factory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18006770C
 * Callers:
 *     ??$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@?$factory_cache_entry@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@@impl@winrt@@QEAA?AUShellViewCoordinator@Shell@UI@WindowsUdk@2@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x180066DCC (--$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@-$factory_cache_entry@UShellViewCoordina.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068368 (--$get_runtime_activation_factory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@impl.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
