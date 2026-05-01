/*
 * XREFs of ??$get_activation_factory@UITaskGroupProviderStatics@TaskGroups@Shell@Internal@Windows@winrt@@@winrt@@YA?AUITaskGroupProviderStatics@TaskGroups@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180067D58
 * Callers:
 *     ??$call@P6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProviderStatics@23456@@Z@?$factory_cache_entry@UTaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupProviderStatics@23456@@impl@winrt@@QEAA?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@2@$$QEAP6A?AU345672@AEBUITaskGroupProviderStatics@45672@@Z@Z @ 0x180067C38 (--$call@P6A-AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProvider.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UITaskGroupProviderStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068938 (--$get_runtime_activation_factory@UITaskGroupProviderStatics@TaskGroups@Shell@Internal@Windows@w.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
