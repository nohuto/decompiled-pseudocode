/*
 * XREFs of _PhoneCallAudio::CreateInstance_::_1_::dtor$0 @ 0x18007241E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>(a2 + 72);
}
