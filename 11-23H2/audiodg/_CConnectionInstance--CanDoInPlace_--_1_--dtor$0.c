/*
 * XREFs of _CConnectionInstance::CanDoInPlace_::_1_::dtor$0 @ 0x140035843
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::CanDoInPlace_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 96));
}
