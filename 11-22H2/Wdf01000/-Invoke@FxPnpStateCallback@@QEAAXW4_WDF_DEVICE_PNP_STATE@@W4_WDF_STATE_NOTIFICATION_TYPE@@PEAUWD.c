/*
 * XREFs of ?Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_PNP_NOTIFICATION_DATA@@@Z @ 0x1C006CB08
 * Callers:
 *     ?PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z @ 0x1C006A3C8 (-PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPnpStateCallback::Invoke(
        FxPnpStateCallback *this,
        _WDF_DEVICE_PNP_STATE State,
        _WDF_STATE_NOTIFICATION_TYPE Type,
        WDFDEVICE__ *Device,
        const _WDF_DEVICE_PNP_NOTIFICATION_DATA *NotificationData)
{
  unsigned __int32 v5; // edx
  void (__fastcall *v6)(WDFDEVICE__ *, const _WDF_DEVICE_PNP_NOTIFICATION_DATA *); // rax

  v5 = State & 0xFFFF7FFF;
  v6 = (void (__fastcall *)(WDFDEVICE__ *, const _WDF_DEVICE_PNP_NOTIFICATION_DATA *))*((_QWORD *)&this[-4] + 2 * v5 - 47);
  if ( v6 )
  {
    if ( (Type & *((_DWORD *)&this[-4] + 4 * v5 - 96)) != 0 )
      v6(Device, NotificationData);
  }
}
