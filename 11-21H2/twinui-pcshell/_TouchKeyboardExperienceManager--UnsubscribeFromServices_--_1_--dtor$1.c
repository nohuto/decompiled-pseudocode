/*
 * XREFs of _TouchKeyboardExperienceManager::UnsubscribeFromServices_::_1_::dtor$1 @ 0x180214CD1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::UnsubscribeFromServices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((void *)(a2 + 168));
}
