/*
 * XREFs of _VirtualDesktopController::RemoveDesktop_::_1_::dtor$6 @ 0x1805434EF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopController::RemoveDesktop_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 112));
}
