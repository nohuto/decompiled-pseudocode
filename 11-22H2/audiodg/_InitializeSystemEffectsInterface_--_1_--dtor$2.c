/*
 * XREFs of _InitializeSystemEffectsInterface_::_1_::dtor$2 @ 0x140034873
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeSystemEffectsInterface_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 64));
}
