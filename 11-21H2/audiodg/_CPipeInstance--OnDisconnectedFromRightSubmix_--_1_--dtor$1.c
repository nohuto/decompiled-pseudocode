/*
 * XREFs of _CPipeInstance::OnDisconnectedFromRightSubmix_::_1_::dtor$1 @ 0x14003937F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::OnDisconnectedFromRightSubmix_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSystemEffects2>::~CComPtr<IAudioSystemEffects2>((__int64 *)(a2 + 64));
}
