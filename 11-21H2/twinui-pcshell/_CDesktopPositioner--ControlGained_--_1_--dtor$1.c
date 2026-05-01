/*
 * XREFs of _CDesktopPositioner::ControlGained_::_1_::dtor$1 @ 0x1804FAFA1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopPositioner::ControlGained_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 80));
}
