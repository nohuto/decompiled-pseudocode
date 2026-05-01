/*
 * XREFs of _VirtualDesktopController::RemoveDesktop_::_1_::dtor$1 @ 0x18048DD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopController::RemoveDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 136));
}
