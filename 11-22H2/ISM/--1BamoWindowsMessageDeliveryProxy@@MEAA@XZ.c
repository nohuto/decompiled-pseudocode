/*
 * XREFs of ??1BamoWindowsMessageDeliveryProxy@@MEAA@XZ @ 0x1801553A8
 * Callers:
 *     _CreateWindowsMessageDeliveryProxy_::_1_::dtor$1 @ 0x18007F67A (_CreateWindowsMessageDeliveryProxy_--_1_--dtor$1.c)
 *     _DragManagerClientProxy::DragManagerClientProxy_::_1_::dtor$0 @ 0x180080D88 (_DragManagerClientProxy--DragManagerClientProxy_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall BamoWindowsMessageDeliveryProxy::~BamoWindowsMessageDeliveryProxy(
        BamoWindowsMessageDeliveryProxy *this)
{
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 4);
}
