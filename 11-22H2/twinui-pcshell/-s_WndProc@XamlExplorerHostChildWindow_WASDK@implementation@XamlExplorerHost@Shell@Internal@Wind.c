/*
 * XREFs of ?s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x1804F9560
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@QEAAIXZ @ 0x1801F9E08 (-AddRef@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winr.c)
 *     DefSubclassProc @ 0x180390CA8 (DefSubclassProc.c)
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1804F95E8 (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::s_WndProc(
        HWND hWnd,
        UINT uMsg,
        WPARAM wParam,
        LPARAM lParam,
        UINT_PTR uIdSubclass,
        DWORD_PTR dwRefData)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  LPARAM v10; // r9
  UINT v11; // r10d
  WPARAM v12; // r11
  LRESULT v13; // rdi

  v7 = dwRefData;
  v8 = 0LL;
  dwRefData = 0LL;
  if ( v7 )
  {
    v8 = v7;
    dwRefData = v7;
    winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::AddRef(v7);
    if ( v11 == 33 && (*(_BYTE *)(v9 + 92) & 1) != 0 )
      v13 = 3LL;
    else
      v13 = DefSubclassProc(hWnd, v11, v12, v10);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK>::unconditional_release_ref(&dwRefData);
  return v13;
}
