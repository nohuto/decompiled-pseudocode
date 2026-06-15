/*
 * XREFs of _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$16 @ 0x1400389D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::InitializeAPOInterfaces_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSystemEffects2>::~CComPtr<IAudioSystemEffects2>((__int64 *)(a2 + 32));
}
