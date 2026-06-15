/*
 * XREFs of _EndpointCollection::GetDeviceByIdString_::_1_::dtor$1 @ 0x1800781C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointCollection::GetDeviceByIdString_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 104));
}
