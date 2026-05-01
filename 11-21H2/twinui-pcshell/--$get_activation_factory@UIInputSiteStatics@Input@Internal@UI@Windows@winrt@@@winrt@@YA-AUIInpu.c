/*
 * XREFs of ??$get_activation_factory@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@winrt@@YA?AUIInputSiteStatics@Input@Internal@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180067F34
 * Callers:
 *     ??$call@P6A?AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@?$factory_cache_entry@UInputSite@Input@Internal@UI@Windows@winrt@@UIInputSiteStatics@23456@@impl@winrt@@QEAA?AUInputSite@Input@Internal@UI@Windows@2@$$QEAP6A?AU345672@AEBUIInputSiteStatics@45672@@Z@Z @ 0x180067388 (--$call@P6A-AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@-$factor.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068B3C (--$get_runtime_activation_factory@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winr.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Internal::Input::IInputSiteStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Internal::Input::IInputSiteStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
