/*
 * XREFs of ??$get_activation_factory@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUIViewCoordinatorStatics@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1800551AC
 * Callers:
 *     ??$call@P6A?AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?AUViewCoordinator@Shell@UI@WindowsUdk@2@$$QEAP6A?AU34562@AEBUIViewCoordinatorStatics@4562@@Z@Z @ 0x18005508C (--$call@P6A-AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@-$f.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800551F0 (--$get_runtime_activation_factory@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@impl@winr.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
