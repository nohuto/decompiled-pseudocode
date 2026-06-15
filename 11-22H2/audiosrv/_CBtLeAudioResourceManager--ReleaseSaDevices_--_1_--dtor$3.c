/*
 * XREFs of _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$3 @ 0x1800FCFFE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(a2 + 56);
}
