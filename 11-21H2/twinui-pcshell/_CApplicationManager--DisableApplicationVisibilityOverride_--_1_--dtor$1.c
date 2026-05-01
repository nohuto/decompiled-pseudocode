/*
 * XREFs of _CApplicationManager::DisableApplicationVisibilityOverride_::_1_::dtor$1 @ 0x1802E26C9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::DisableApplicationVisibilityOverride_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 128));
}
