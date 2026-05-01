/*
 * XREFs of _TouchKeyboardExperienceManager::TerminateInputApp_::_1_::dtor$1 @ 0x1804698C3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::TerminateInputApp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 48));
}
