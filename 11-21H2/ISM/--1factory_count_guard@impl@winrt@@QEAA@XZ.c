/*
 * XREFs of ??1factory_count_guard@impl@winrt@@QEAA@XZ @ 0x1800215C0
 * Callers:
 *     _ViewHelper::GetViewIdFromWindowId_::_1_::dtor$34 @ 0x180057EF0 (_ViewHelper--GetViewIdFromWindowId_--_1_--dtor$34.c)
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$47 @ 0x1800581D5 (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$47.c)
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$58 @ 0x1800581E7 (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$58.c)
 *     _ViewHierarchyWithWindowManager::OnWindowWatcherStopped_::_1_::dtor$5 @ 0x180082397 (_ViewHierarchyWithWindowManager--OnWindowWatcherStopped_--_1_--dtor$5.c)
 *     _ViewHierarchyWithWindowManager::OnWindowWatcherStopped_::_1_::dtor$16 @ 0x1800823A3 (_ViewHierarchyWithWindowManager--OnWindowWatcherStopped_--_1_--dtor$16.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_6e68f4fcde6472322112b953134f760c__&__::_1_::dtor$3 @ 0x180084475 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_180084475.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics_::call__lambda_eae43cc28720a0d43884919512fd9bb9__&__::_1_::dtor$3 @ 0x1800845ED (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_1800845ED.c)
 *     _CUIHierarchy::CUIHierarchy_::_1_::dtor$10 @ 0x1800847B6 (_CUIHierarchy--CUIHierarchy_--_1_--dtor$10.c)
 *     _CUIHierarchy::OnUniversalPropertyChanged_::_1_::dtor$24 @ 0x180085AE5 (_CUIHierarchy--OnUniversalPropertyChanged_--_1_--dtor$24.c)
 *     _CUIHierarchy::OnWindowWatcherStopped_::_1_::dtor$4 @ 0x180085F44 (_CUIHierarchy--OnWindowWatcherStopped_--_1_--dtor$4.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::System::Threading::ThreadPool_winrt::Windows::System::Threading::IThreadPoolStatics_::call__lambda_4e2f6834dae5c2d9676db4968b0ab11c__&__::_1_::dtor$3 @ 0x1800C9525 (_winrt--impl--factory_cache_entry_winrt--Windows--System--Threading--ThreadPool_win_ea_1800C9525.c)
 *     _DockableDeviceCollection::PopulateDeviceInfo_::_1_::dtor$7 @ 0x1800CA75F (_DockableDeviceCollection--PopulateDeviceInfo_--_1_--dtor$7.c)
 *     _ViewHierarchyWithWindowManager::GetActiveView_::_1_::dtor$16 @ 0x180154C4C (_ViewHierarchyWithWindowManager--GetActiveView_--_1_--dtor$16.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::factory_count_guard::~factory_count_guard(volatile signed __int64 **this)
{
  _InterlockedDecrement64(*this);
}
