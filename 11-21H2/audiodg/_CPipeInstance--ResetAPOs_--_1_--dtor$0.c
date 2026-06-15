/*
 * XREFs of _CPipeInstance::ResetAPOs_::_1_::dtor$0 @ 0x14003935B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::ResetAPOs_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSystemEffects2>::~CComPtr<IAudioSystemEffects2>((__int64 *)(a2 + 56));
}
