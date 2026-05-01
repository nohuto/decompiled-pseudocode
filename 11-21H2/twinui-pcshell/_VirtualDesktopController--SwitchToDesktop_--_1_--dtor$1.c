/*
 * XREFs of _VirtualDesktopController::SwitchToDesktop_::_1_::dtor$1 @ 0x18048E1E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopController::SwitchToDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 112));
}
