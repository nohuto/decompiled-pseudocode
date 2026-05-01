/*
 * XREFs of _TouchKeyboardExperienceManager::OnCommand_::_1_::dtor$1 @ 0x1805146EE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnCommand_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)(a2 + 64));
}
