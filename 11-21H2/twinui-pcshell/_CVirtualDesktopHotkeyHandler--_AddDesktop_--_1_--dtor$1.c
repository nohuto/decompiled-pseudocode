/*
 * XREFs of _CVirtualDesktopHotkeyHandler::_AddDesktop_::_1_::dtor$1 @ 0x18054DA4E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopHotkeyHandler::_AddDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 80));
}
