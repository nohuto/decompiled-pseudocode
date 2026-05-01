/*
 * XREFs of ?GetThumbnailAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUBitmapSize@Imaging@Graphics@Windows@3@_N@Z @ 0x1802E83D4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x18021C660 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D770 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::GetThumbnailAsync(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        char a4)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  v9 = 0LL;
  v6 = *a3;
  LOBYTE(a3) = a4;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(*(_QWORD *)v4 + 136LL))(v4, v6, a3, &v9);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  *a2 = v9;
  return a2;
}
