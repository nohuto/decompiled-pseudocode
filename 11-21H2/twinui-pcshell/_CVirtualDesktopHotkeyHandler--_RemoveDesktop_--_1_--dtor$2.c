/*
 * XREFs of _CVirtualDesktopHotkeyHandler::_RemoveDesktop_::_1_::dtor$2 @ 0x18054DDA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopHotkeyHandler::_RemoveDesktop_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 96));
}
