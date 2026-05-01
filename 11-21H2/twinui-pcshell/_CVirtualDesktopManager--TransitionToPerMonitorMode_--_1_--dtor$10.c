/*
 * XREFs of _CVirtualDesktopManager::TransitionToPerMonitorMode_::_1_::dtor$10 @ 0x18054BC69
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::TransitionToPerMonitorMode_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 288));
}
