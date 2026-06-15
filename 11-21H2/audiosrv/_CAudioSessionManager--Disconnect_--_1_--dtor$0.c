/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x1800E034D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(a2 + 48);
}
