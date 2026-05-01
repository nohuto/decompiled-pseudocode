/*
 * XREFs of ?WndProc@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA_JQEAUHWND__@@I_K_J@Z @ 0x18001F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001F300 (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostWindow@implementation@XamlExplorerHost@She.c)
 *     ?MessageHandler@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x18001F354 (-MessageHandler@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18001FAC4 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 */

LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::WndProc(
        HWND hWnd,
        UINT a2,
        WPARAM a3,
        LONG_PTR *a4)
{
  LONG_PTR WindowLongPtrW; // rax
  volatile signed __int64 *v9; // r10
  signed __int64 v10; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  __int64 v13; // rbx
  LONG_PTR v15; // rbx
  LONG_PTR v16[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 == 129 )
  {
    v15 = *a4;
    wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
      *a4 + 32,
      hWnd);
    SetWindowLongPtrW(hWnd, -21, v15);
    return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
  }
  WindowLongPtrW = GetWindowLongPtrW(hWnd, -21);
  v9 = (volatile signed __int64 *)WindowLongPtrW;
  if ( !WindowLongPtrW )
    return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
  v10 = *(_QWORD *)(WindowLongPtrW + 8);
  v16[0] = WindowLongPtrW;
  while ( v10 >= 0 )
  {
    v12 = _InterlockedCompareExchange64(v9 + 1, v10 + 1, v10);
    v11 = v10 == v12;
    v10 = v12;
    if ( v11 )
      goto LABEL_6;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v10 + 24), 1u);
LABEL_6:
  v13 = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::MessageHandler(
          (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)v9,
          a2,
          a3,
          (__int64)a4);
  if ( a2 == 130 )
    SetWindowLongPtrW(hWnd, -21, 0LL);
  winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>::unconditional_release_ref(v16);
  return v13;
}
