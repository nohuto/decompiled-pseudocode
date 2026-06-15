/*
 * XREFs of _PhoneTopology::CreateInstance_::_1_::dtor$0 @ 0x18007A577
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneTopology::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>(a2 + 80);
}
