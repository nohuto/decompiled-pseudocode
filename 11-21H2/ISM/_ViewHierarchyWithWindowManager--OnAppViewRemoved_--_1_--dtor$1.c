/*
 * XREFs of _ViewHierarchyWithWindowManager::OnAppViewRemoved_::_1_::dtor$1 @ 0x1800820B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewHierarchyWithWindowManager::OnAppViewRemoved_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher(*(winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher **)(a2 + 72));
}
