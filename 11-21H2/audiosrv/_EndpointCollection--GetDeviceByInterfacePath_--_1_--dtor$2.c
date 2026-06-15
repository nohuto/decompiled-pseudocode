/*
 * XREFs of _EndpointCollection::GetDeviceByInterfacePath_::_1_::dtor$2 @ 0x18015D777
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointCollection::GetDeviceByInterfacePath_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((void *)(a2 + 32));
}
