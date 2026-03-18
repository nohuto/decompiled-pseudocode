/*
 * XREFs of ?InvokeCxCleanupCallback@FxPowerDeviceArmWakeFromSx@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1C006D9A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPowerDeviceArmWakeFromSx::InvokeCxCleanupCallback(
        FxPowerDeviceArmWakeFromSx *this,
        FxCxPnpPowerCallbackContext *Context,
        __int64 a3)
{
  void (__fastcall *CleanupCallback)(WDFDEVICE__ *); // rax

  CleanupCallback = Context->u.SmIoInit.CleanupCallback;
  if ( Context->m_CallbackType == FxCxCallbackArmWakeFromSxWithReason )
  {
    LOBYTE(a3) = this->m_ChildrenArmedForWake;
    LOBYTE(Context) = this->m_DeviceWakeEnabled;
    ((void (__fastcall *)(WDFDEVICE__ *, FxCxPnpPowerCallbackContext *, __int64))CleanupCallback)(
      this->m_Device,
      Context,
      a3);
  }
  else
  {
    CleanupCallback(this->m_Device);
  }
}
