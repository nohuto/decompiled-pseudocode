/*
 * XREFs of _EndpointCollection::GetDeviceByIdString_::_1_::dtor$3 @ 0x1800781D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointCollection::GetDeviceByIdString_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  ATL::CComHeapPtr<PacketSizeConstraints>::~CComHeapPtr<PacketSizeConstraints>((LPVOID *)(a2 + 120));
}
