/*
 * XREFs of _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$1 @ 0x1800FCFCE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>((_QWORD **)(a2 + 288));
}
