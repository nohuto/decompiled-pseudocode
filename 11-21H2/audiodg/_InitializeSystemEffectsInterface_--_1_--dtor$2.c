/*
 * XREFs of _InitializeSystemEffectsInterface_::_1_::dtor$2 @ 0x1400389B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeSystemEffectsInterface_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioSystemEffects2>::~CComPtr<IAudioSystemEffects2>((__int64 *)(a2 + 80));
}
