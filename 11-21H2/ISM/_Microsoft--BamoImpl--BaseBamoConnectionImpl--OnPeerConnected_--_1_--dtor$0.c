/*
 * XREFs of _Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected_::_1_::dtor$0 @ 0x1800549F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
