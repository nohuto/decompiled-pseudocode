/*
 * XREFs of ??1BamoWindowsMessageDeliveryProxy@@MEAA@XZ @ 0x18012C960
 * Callers:
 *     _CreateWindowsMessageDeliveryProxy_::_1_::dtor$1 @ 0x18005497A (_CreateWindowsMessageDeliveryProxy_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall BamoWindowsMessageDeliveryProxy::~BamoWindowsMessageDeliveryProxy(
        BamoWindowsMessageDeliveryProxy *this)
{
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 4);
}
