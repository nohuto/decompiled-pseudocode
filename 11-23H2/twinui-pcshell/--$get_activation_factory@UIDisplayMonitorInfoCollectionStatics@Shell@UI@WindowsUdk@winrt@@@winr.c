/*
 * XREFs of ??$get_activation_factory@UIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1801888CC
 * Callers:
 *     ??$call@P6A?AU?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@AEBUIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@4@@Z@?$factory_cache_entry@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UIDisplayMonitorInfoCollectionStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@2@AEBUIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@2@@Z@Z @ 0x1801887B4 (--$call@P6A-AU-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Founda.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics>,
    (__int64)&v5);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a1 = v5;
  return a1;
}
