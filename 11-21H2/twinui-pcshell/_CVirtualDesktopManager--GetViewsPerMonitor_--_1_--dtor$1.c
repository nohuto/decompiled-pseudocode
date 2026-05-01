/*
 * XREFs of _CVirtualDesktopManager::GetViewsPerMonitor_::_1_::dtor$1 @ 0x180545F67
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::GetViewsPerMonitor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 72));
}
