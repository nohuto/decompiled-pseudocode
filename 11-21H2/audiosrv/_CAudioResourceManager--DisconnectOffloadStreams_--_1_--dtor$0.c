/*
 * XREFs of _CAudioResourceManager::DisconnectOffloadStreams_::_1_::dtor$0 @ 0x180100108
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::DisconnectOffloadStreams_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(a2 + 32);
}
