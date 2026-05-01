/*
 * XREFs of _ScreenManager::HandleAppToAppLayoutChange_::_1_::dtor$1 @ 0x1805C5CBA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ScreenManager::HandleAppToAppLayoutChange_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 120));
}
