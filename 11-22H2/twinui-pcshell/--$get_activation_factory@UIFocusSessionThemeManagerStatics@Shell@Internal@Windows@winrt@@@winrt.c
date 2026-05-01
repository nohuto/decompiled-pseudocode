/*
 * XREFs of ??$get_activation_factory@UIFocusSessionThemeManagerStatics@Shell@Internal@Windows@winrt@@@winrt@@YA?AUIFocusSessionThemeManagerStatics@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18019C4BC
 * Callers:
 *     ??$call@P6A?AUFocusSessionThemeManager@Shell@Internal@Windows@winrt@@AEBUIFocusSessionThemeManagerStatics@2345@@Z@?$factory_cache_entry@UFocusSessionThemeManager@Shell@Internal@Windows@winrt@@UIFocusSessionThemeManagerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUFocusSessionThemeManager@Shell@Internal@Windows@2@AEBUIFocusSessionThemeManagerStatics@4562@@Z@Z @ 0x18019C3A4 (--$call@P6A-AUFocusSessionThemeManager@Shell@Internal@Windows@winrt@@AEBUIFocusSessionThemeManag.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>,
    (__int64)&v5);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a1 = v5;
  return a1;
}
