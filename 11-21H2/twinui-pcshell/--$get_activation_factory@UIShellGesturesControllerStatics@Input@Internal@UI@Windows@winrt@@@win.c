/*
 * XREFs of ??$get_activation_factory@UIShellGesturesControllerStatics@Input@Internal@UI@Windows@winrt@@@winrt@@YA?AUIShellGesturesControllerStatics@Input@Internal@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180067F78
 * Callers:
 *     ??$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@?$factory_cache_entry@UShellGesturesController@Input@Internal@UI@Windows@winrt@@UIShellGesturesControllerStatics@23456@@impl@winrt@@QEAA?AUShellGesturesController@Input@Internal@UI@Windows@2@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@Z @ 0x180066B90 (--$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@-$factory_cache_entry@UShellGesturesCont.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIShellGesturesControllerStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068BE8 (--$get_runtime_activation_factory@UIShellGesturesControllerStatics@Input@Internal@UI@Windows@win.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
