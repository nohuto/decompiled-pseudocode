/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceSelfManagedIoSuspend@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1C006D660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_sqqd @ 0x1C006DB8C (WPP_IFR_SF_sqqd.c)
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoSuspend::InvokeCxCallback(
        FxPnpDeviceSelfManagedIoSuspend *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  int v5; // eax
  unsigned int level; // ebx
  unsigned __int16 v7; // r9
  int v8; // eax
  const char *_a3; // rdx
  const _GUID *v11; // [rsp+20h] [rbp-38h]

  if ( Context->m_CallbackType == FxCxCallbackSmIoSuspend )
  {
    if ( PrePost )
      v5 = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PostCallback)(this->m_Device);
    else
      v5 = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PreCallback)(this->m_Device);
    level = v5;
    if ( v5 >= 0 )
      return level;
    v7 = 23;
  }
  else
  {
    if ( PrePost )
      v8 = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.PostCallback)(
             this->m_Device,
             (unsigned int)this->m_TargetState);
    else
      v8 = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.PreCallback)(
             this->m_Device,
             (unsigned int)this->m_TargetState);
    level = v8;
    if ( v8 >= 0 )
      return level;
    v7 = 24;
  }
  _a3 = "Pre";
  if ( PrePost )
    _a3 = "Post";
  WPP_IFR_SF_sqqd(
    this->m_PkgPnp->m_Globals,
    4u,
    (unsigned int)"Post",
    v7,
    v11,
    _a3,
    this->m_Device,
    this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
    level);
  return level;
}
