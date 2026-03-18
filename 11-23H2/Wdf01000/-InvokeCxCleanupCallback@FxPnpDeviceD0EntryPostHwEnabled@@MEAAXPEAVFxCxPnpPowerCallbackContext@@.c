/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDeviceD0EntryPostHwEnabled@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1C006D8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPnpDeviceD0EntryPostHwEnabled::InvokeCxCleanupCallback(
        FxPnpDeviceD0EntryPostHwEnabled *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.CleanupCallback)(
    this->m_Device,
    (unsigned int)this->m_PreviousState);
}
