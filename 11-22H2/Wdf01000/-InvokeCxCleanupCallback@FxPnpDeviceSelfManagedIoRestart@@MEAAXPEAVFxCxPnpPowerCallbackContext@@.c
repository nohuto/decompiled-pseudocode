/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDeviceSelfManagedIoRestart@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1C006D950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPnpDeviceSelfManagedIoRestart::InvokeCxCleanupCallback(
        FxPnpDeviceSelfManagedIoRestart *this,
        FxCxPnpPowerCallbackContext *Context)
{
  if ( Context->m_CallbackType == FxCxCallbackSmIoRestart )
    ((void (__fastcall *)(WDFDEVICE__ *, FxCxPnpPowerCallbackContext *, FxCxPnpPowerCallbackContext *))Context->u.Generic.CleanupCallback)(
      this->m_Device,
      Context,
      Context);
  else
    ((void (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.CleanupCallback)(
      this->m_Device,
      this->m_PkgPnp->m_DevicePowerState);
}
