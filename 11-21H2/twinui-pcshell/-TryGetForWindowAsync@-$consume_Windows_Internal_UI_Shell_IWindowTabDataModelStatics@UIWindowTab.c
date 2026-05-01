/*
 * XREFs of ?TryGetForWindowAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@3@IAEBUUser@System@63@@Z @ 0x18001A948
 * Callers:
 *     ??R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEBUIWindowTabDataModelStatics@Shell@UI@Internal@34@@Z @ 0x18001A918 (--R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA-AU-$IAsyncOperation@UWindowTabDataModel@Shell.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::TryGetForWindowAsync(
        __int64 *a1,
        _QWORD *a2,
        unsigned int a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v4 + 48LL))(v4, a3, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  *a2 = v8;
  return a2;
}
