/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$16 @ 0x18007BE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(a2 + 136);
}
