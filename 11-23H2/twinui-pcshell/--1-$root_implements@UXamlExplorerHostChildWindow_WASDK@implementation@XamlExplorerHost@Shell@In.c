/*
 * XREFs of ??1?$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@MEAA@XZ @ 0x1801FA5FC
 * Callers:
 *     ??1XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180053538 (--1XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winr.c)
 *     ??1?$XamlExplorerHostChildWindow_WASDK_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@Unon_agile@7@@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1804F88F0 (--1-$XamlExplorerHostChildWindow_WASDK_base@UXamlExplorerHostChildWindow_WASDK@implementation@Xa.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1801FAE14 (-subtract_reference@-$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExpl.c)
 */

__int64 winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Foundation::IClosable,winrt::non_agile>::~root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Foundation::IClosable,winrt::non_agile>()
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Foundation::IClosable,winrt::non_agile>::subtract_reference();
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
