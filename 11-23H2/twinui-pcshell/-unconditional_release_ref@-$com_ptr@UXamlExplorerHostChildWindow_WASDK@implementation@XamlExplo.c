/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1804F95E8
 * Callers:
 *     ??1?$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1804F88FC (--1-$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ?s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x1804F9560 (-s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK>::unconditional_release_ref(
        volatile __int64 **a1)
{
  volatile __int64 *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Foundation::IClosable,winrt::non_agile>::Release(v2);
}
