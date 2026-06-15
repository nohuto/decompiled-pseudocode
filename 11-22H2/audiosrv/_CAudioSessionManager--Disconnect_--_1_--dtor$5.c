/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$5 @ 0x18007BD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>((__int64 *)(a2 + 72));
}
