/*
 * XREFs of ?GetDefault@?$consume_Windows_Internal_Shell_IFocusSessionThemeManagerStatics@UIFocusSessionThemeManagerStatics@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B3978
 * Callers:
 *     ?GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ @ 0x18019C344 (-GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_0bb2dcbde4e4720f037d7e02636ac325_@@CA@AEBUIFocusSessionThemeManagerStatics@Shell@Internal@Windows@winrt@@@Z @ 0x1801B3950 (-_lambda_invoker_cdecl_@_lambda_0bb2dcbde4e4720f037d7e02636ac325_@@CA@AEBUIFocusSessionThemeMana.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_IFocusSessionThemeManagerStatics<winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>::GetDefault(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
