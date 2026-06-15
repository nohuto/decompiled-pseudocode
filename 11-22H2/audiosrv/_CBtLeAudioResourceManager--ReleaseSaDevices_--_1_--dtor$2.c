/*
 * XREFs of _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$2 @ 0x1800FCFDA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(a2 + 32);
}
