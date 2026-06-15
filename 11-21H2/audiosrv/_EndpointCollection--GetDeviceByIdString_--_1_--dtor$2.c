/*
 * XREFs of _EndpointCollection::GetDeviceByIdString_::_1_::dtor$2 @ 0x18015D56A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointCollection::GetDeviceByIdString_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((void *)(a2 + 32));
}
