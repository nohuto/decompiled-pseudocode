/*
 * XREFs of _AudioDeviceMgr::EnumEndpointDevices_::_1_::dtor$0 @ 0x1800794A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::EnumEndpointDevices_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 96));
}
