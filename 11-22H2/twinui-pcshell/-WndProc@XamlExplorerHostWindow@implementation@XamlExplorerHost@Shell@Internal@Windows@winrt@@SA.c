/*
 * XREFs of ?WndProc@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA_JQEAUHWND__@@I_K_J@Z @ 0x180043DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MessageHandler@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x180043EB8 (-MessageHandler@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18004418C (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::WndProc(
        HWND hWnd,
        UINT a2,
        WPARAM a3,
        LONG_PTR *a4)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *WindowLongPtrW; // rax
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  LONG_PTR v13; // rbx
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *v14; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 == 129 )
  {
    v13 = *a4;
    wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
      *a4 + 40,
      hWnd);
    SetWindowLongPtrW(hWnd, -21, v13);
    return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
  }
  WindowLongPtrW = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)GetWindowLongPtrW(hWnd, -21);
  v9 = WindowLongPtrW;
  if ( !WindowLongPtrW )
    return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
  v10 = *(_QWORD *)WindowLongPtrW;
  v14 = WindowLongPtrW;
  (*(void (__fastcall **)(winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *))(v10 + 8))(WindowLongPtrW);
  v11 = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::MessageHandler(
          v9,
          a2,
          a3,
          (__int64)a4);
  if ( a2 == 130 )
    SetWindowLongPtrW(hWnd, -21, 0LL);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
  return v11;
}
