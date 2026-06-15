/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$4 @ 0x1800E0371
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>((__int64 *)(a2 + 32));
}
