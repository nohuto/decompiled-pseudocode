/*
 * XREFs of ??$get_activation_factory@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUITaskbarLayoutStatics@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1800678B4
 * Callers:
 *     ??$call@P6A?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@?$factory_cache_entry@UTaskbarLayout@Shell@UI@WindowsUdk@winrt@@UITaskbarLayoutStatics@2345@@impl@winrt@@QEAA?AUTaskbarLayout@Shell@UI@WindowsUdk@2@$$QEAP6A?AU34562@AEBUITaskbarLayoutStatics@4562@@Z@Z @ 0x180067794 (--$call@P6A-AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@-$facto.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800685DC (--$get_runtime_activation_factory@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
