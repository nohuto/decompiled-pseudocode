/*
 * XREFs of _EndpointCollection::GetDeviceByInterfacePath_::_1_::dtor$1 @ 0x180163AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointCollection::GetDeviceByInterfacePath_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 120));
}
