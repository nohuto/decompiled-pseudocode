/*
 * XREFs of ??1?$pair@$$CBUhstring@winrt@@U12@@std@@QEAA@XZ @ 0x18041DC00
 * Callers:
 *     _CControlCenterExperienceManager::Show_::_1_::dtor$0 @ 0x18042361E (_CControlCenterExperienceManager--Show_--_1_--dtor$0.c)
 *     _CControlCenterExperienceManager::Show_::_1_::dtor$1 @ 0x18042362A (_CControlCenterExperienceManager--Show_--_1_--dtor$1.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x1806F5924 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::pair<winrt::hstring const,winrt::hstring>::~pair<winrt::hstring const,winrt::hstring>(
        volatile signed __int32 **a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
}
