/*
 * XREFs of _VirtualDesktopController::RemoveDesktop_::_1_::dtor$7 @ 0x1805434FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopController::RemoveDesktop_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 80));
}
