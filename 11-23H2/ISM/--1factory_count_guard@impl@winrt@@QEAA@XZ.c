/*
 * XREFs of ??1factory_count_guard@impl@winrt@@QEAA@XZ @ 0x18002A280
 * Callers:
 *     _ViewHelper::GetViewIdFromWindowId_::_1_::dtor$34 @ 0x18006C9E0 (_ViewHelper--GetViewIdFromWindowId_--_1_--dtor$34.c)
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$47 @ 0x18006F759 (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$47.c)
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$58 @ 0x18006F76B (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$58.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics_::call_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_(__cdecl_)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics_const_&)__::_1_::dtor$3 @ 0x18006F7C9 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_18006F7C9.c)
 *     _ViewHierarchyWithWindowManager::OnWindowWatcherStopped_::_1_::dtor$5 @ 0x180099537 (_ViewHierarchyWithWindowManager--OnWindowWatcherStopped_--_1_--dtor$5.c)
 *     _ViewHierarchyWithWindowManager::OnWindowWatcherStopped_::_1_::dtor$16 @ 0x180099543 (_ViewHierarchyWithWindowManager--OnWindowWatcherStopped_--_1_--dtor$16.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_6e68f4fcde6472322112b953134f760c__&__::_1_::dtor$3 @ 0x18009B553 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_18009B553.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics_::call__lambda_eae43cc28720a0d43884919512fd9bb9__&__::_1_::dtor$3 @ 0x18009B6BB (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_18009B6BB.c)
 *     _CUIHierarchy::CUIHierarchy_::_1_::dtor$10 @ 0x18009B86E (_CUIHierarchy--CUIHierarchy_--_1_--dtor$10.c)
 *     _CUIHierarchy::OnUniversalPropertyChanged_::_1_::dtor$24 @ 0x18009CB9D (_CUIHierarchy--OnUniversalPropertyChanged_--_1_--dtor$24.c)
 *     _CUIHierarchy::OnWindowWatcherStopped_::_1_::dtor$4 @ 0x18009D004 (_CUIHierarchy--OnWindowWatcherStopped_--_1_--dtor$4.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::System::Threading::ThreadPool_winrt::Windows::System::Threading::IThreadPoolStatics_::call__lambda_4e2f6834dae5c2d9676db4968b0ab11c__&__::_1_::dtor$3 @ 0x1800E2E77 (_winrt--impl--factory_cache_entry_winrt--Windows--System--Threading--ThreadPool_win_ea_1800E2E77.c)
 *     _DockableDeviceCollection::PopulateDeviceInfo_::_1_::dtor$7 @ 0x1800E3DEF (_DockableDeviceCollection--PopulateDeviceInfo_--_1_--dtor$7.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$11 @ 0x18010CEF5 (_MPCTarget--MPCTarget_--_1_--dtor$11.c)
 *     _ViewHierarchyWithWindowManager::GetActiveView_::_1_::dtor$16 @ 0x1801740BC (_ViewHierarchyWithWindowManager--GetActiveView_--_1_--dtor$16.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::factory_count_guard::~factory_count_guard(volatile signed __int64 **this)
{
  _InterlockedDecrement64(*this);
}
