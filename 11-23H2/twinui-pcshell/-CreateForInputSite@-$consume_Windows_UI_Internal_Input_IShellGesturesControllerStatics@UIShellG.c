/*
 * XREFs of ?CreateForInputSite@?$consume_Windows_UI_Internal_Input_IShellGesturesControllerStatics@UIShellGesturesControllerStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUInputSite@Input@Internal@UI@Windows@3@@Z @ 0x180173CF4
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x1801734F4 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     ??$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@?$factory_cache_entry@UShellGesturesController@Input@Internal@UI@Windows@winrt@@UIShellGesturesControllerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@Z @ 0x180173B9C (--$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@-$factory_cache_entry@UShellGesturesCont.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesControllerStatics<winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>::CreateForInputSite(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
