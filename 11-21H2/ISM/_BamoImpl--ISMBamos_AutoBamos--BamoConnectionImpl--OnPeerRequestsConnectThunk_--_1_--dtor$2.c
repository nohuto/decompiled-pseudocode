/*
 * XREFs of _BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::OnPeerRequestsConnectThunk_::_1_::dtor$2 @ 0x180054C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::OnPeerRequestsConnectThunk_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
