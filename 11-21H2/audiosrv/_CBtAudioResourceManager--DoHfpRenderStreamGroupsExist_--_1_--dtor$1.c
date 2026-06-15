/*
 * XREFs of _CBtAudioResourceManager::DoHfpRenderStreamGroupsExist_::_1_::dtor$1 @ 0x180115188
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManager::DoHfpRenderStreamGroupsExist_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(a2 + 32);
}
