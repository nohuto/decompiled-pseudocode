/*
 * XREFs of ??1BamoWindowsMessageDeliveryProxy@@MEAA@XZ @ 0x1801470C8
 * Callers:
 *     _CreateWindowsMessageDeliveryProxy_::_1_::dtor$1 @ 0x18006BB9A (_CreateWindowsMessageDeliveryProxy_--_1_--dtor$1.c)
 *     _DragManagerClientProxy::DragManagerClientProxy_::_1_::dtor$0 @ 0x18006E72A (_DragManagerClientProxy--DragManagerClientProxy_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall BamoWindowsMessageDeliveryProxy::~BamoWindowsMessageDeliveryProxy(
        BamoWindowsMessageDeliveryProxy *this)
{
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 4);
}
