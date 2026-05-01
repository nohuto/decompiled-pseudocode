/*
 * XREFs of ??$get_activation_factory@UIWindowStatics@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIWindowStatics@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1800679C4
 * Callers:
 *     ??$call@P6A?AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@?$factory_cache_entry@UWindow@Xaml@UI@Windows@winrt@@UIWindowStatics@2345@@impl@winrt@@QEAA?AUWindow@Xaml@UI@Windows@2@$$QEAP6A?AU34562@AEBUIWindowStatics@4562@@Z@Z @ 0x180067148 (--$call@P6A-AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@-$factory_cache_entry@UWi.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18006888C (--$get_runtime_activation_factory@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@YA-AUhresu.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Xaml::IWindowStatics>(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::IWindowStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
