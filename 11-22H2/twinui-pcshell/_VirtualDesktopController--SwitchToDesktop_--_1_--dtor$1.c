/*
 * XREFs of _VirtualDesktopController::SwitchToDesktop_::_1_::dtor$1 @ 0x180543A41
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::SwitchToDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 40));
}
