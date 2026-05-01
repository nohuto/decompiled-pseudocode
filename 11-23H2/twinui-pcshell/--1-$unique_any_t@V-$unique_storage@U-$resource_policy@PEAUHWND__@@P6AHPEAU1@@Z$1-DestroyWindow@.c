/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1804443C8
 * Callers:
 *     ?TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ @ 0x1802734E4 (-TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ.c)
 *     _WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor$1 @ 0x1802BDDCE (_WindowDragInputProvider--WindowDragInputProvider_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlExplorerHostWindow_::_1_::dtor$1 @ 0x1802C3B77 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlExplorerHos_ea_1802C3B77.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::XamlExplorerHostWindow_WASDK_::_1_::dtor$1 @ 0x1804FB112 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlExplorerHos_ea_1804FB112.c)
 *     _CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor$12 @ 0x18054C138 (_CAppThumbnailWindow--CAppThumbnailWindow_--_1_--dtor$12.c)
 *     _SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost_::_1_::dtor$10 @ 0x1806E6A0F (_SharedDesktopBackgroundVisualHost--SharedDesktopBackgroundVisualHost_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>(
        HWND *a1)
{
  HWND v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return DestroyWindow(v1);
  return result;
}
