/*
 * XREFs of _CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor$0 @ 0x140036FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSystemEffects2>::~CComPtr<IAudioSystemEffects2>((__int64 *)(a2 + 72));
}
