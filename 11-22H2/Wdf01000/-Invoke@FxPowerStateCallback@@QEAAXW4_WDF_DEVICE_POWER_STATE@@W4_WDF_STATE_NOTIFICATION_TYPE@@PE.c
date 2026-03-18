/*
 * XREFs of ?Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_NOTIFICATION_DATA@@@Z @ 0x1C006CB80
 * Callers:
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C006E82C (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPowerStateCallback::Invoke(
        FxPowerStateCallback *this,
        _WDF_DEVICE_POWER_STATE State,
        _WDF_STATE_NOTIFICATION_TYPE Type,
        WDFDEVICE__ *Device,
        const _WDF_DEVICE_POWER_NOTIFICATION_DATA *NotificationData)
{
  unsigned __int32 v5; // edx
  void (__fastcall *v6)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_NOTIFICATION_DATA *); // rax

  v5 = State & 0xFFFF7FFF;
  v6 = (void (__fastcall *)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_NOTIFICATION_DATA *))*((_QWORD *)&this[-7]
                                                                                        + 2 * v5
                                                                                        - 65);
  if ( v6 )
  {
    if ( (Type & *((_DWORD *)&this[-7] + 4 * v5 - 132)) != 0 )
      v6(Device, NotificationData);
  }
}
