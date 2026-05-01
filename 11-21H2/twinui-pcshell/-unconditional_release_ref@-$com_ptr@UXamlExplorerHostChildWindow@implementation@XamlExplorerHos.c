/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180423758
 * Callers:
 *     ??1?$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180422B80 (--1-$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ?s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x1804236A0 (-s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>::unconditional_release_ref(
        volatile __int64 **a1)
{
  volatile __int64 *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::NonDelegatingRelease(v2);
}
