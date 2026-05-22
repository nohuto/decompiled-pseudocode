/*
 * XREFs of ??1factory_count_guard@impl@winrt@@QEAA@XZ @ 0x18002BBA0
 * Callers:
 *     _ViewHelper::GetViewIdFromWindowId_::_1_::dtor$34 @ 0x180080E60 (_ViewHelper--GetViewIdFromWindowId_--_1_--dtor$34.c)
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$47 @ 0x180082F59 (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$47.c)
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$58 @ 0x180082F6B (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$58.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics_::call_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_(__cdecl_)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics_const_&)__::_1_::dtor$3 @ 0x180082FC9 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_180082FC9.c)
 *     _ViewHierarchyWithWindowManager::OnWindowWatcherStopped_::_1_::dtor$5 @ 0x1800ABB17 (_ViewHierarchyWithWindowManager--OnWindowWatcherStopped_--_1_--dtor$5.c)
 *     _ViewHierarchyWithWindowManager::OnWindowWatcherStopped_::_1_::dtor$16 @ 0x1800ABB23 (_ViewHierarchyWithWindowManager--OnWindowWatcherStopped_--_1_--dtor$16.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_6e68f4fcde6472322112b953134f760c__&__::_1_::dtor$3 @ 0x1800ADA97 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_1800ADA97.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics_::call__lambda_eae43cc28720a0d43884919512fd9bb9__&__::_1_::dtor$3 @ 0x1800ADBFF (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_1800ADBFF.c)
 *     _CUIHierarchy::CUIHierarchy_::_1_::dtor$10 @ 0x1800ADDB2 (_CUIHierarchy--CUIHierarchy_--_1_--dtor$10.c)
 *     _CUIHierarchy::OnUniversalPropertyChanged_::_1_::dtor$24 @ 0x1800AF0ED (_CUIHierarchy--OnUniversalPropertyChanged_--_1_--dtor$24.c)
 *     _CUIHierarchy::OnWindowWatcherStopped_::_1_::dtor$4 @ 0x1800AF554 (_CUIHierarchy--OnWindowWatcherStopped_--_1_--dtor$4.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::System::Threading::ThreadPool_winrt::Windows::System::Threading::IThreadPoolStatics_::call__lambda_4e2f6834dae5c2d9676db4968b0ab11c__&__::_1_::dtor$3 @ 0x1800F1DD7 (_winrt--impl--factory_cache_entry_winrt--Windows--System--Threading--ThreadPool_win_ea_1800F1DD7.c)
 *     _DockableDeviceCollection::PopulateDeviceInfo_::_1_::dtor$7 @ 0x1800F2D4F (_DockableDeviceCollection--PopulateDeviceInfo_--_1_--dtor$7.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$11 @ 0x18011B0BC (_MPCTarget--MPCTarget_--_1_--dtor$11.c)
 *     _ViewHierarchyWithWindowManager::GetActiveView_::_1_::dtor$16 @ 0x180181ECC (_ViewHierarchyWithWindowManager--GetActiveView_--_1_--dtor$16.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::factory_count_guard::~factory_count_guard(volatile signed __int64 **this)
{
  _InterlockedDecrement64(*this);
}
