/*
 * XREFs of _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x18010206C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(a2 + 152);
}
