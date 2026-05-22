/*
 * XREFs of _Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage_::_1_::dtor$0 @ 0x180057D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
