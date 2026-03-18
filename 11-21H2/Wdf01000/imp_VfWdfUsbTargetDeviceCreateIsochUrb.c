/*
 * XREFs of imp_VfWdfUsbTargetDeviceCreateIsochUrb @ 0x1C00C4330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceCreateIsochUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        __int64 NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, _WDF_OBJECT_ATTRIBUTES *, __int64, WDFMEMORY__ **, _URB **))WdfVersion.Functions.pfnWdfUsbTargetDeviceCreateIsochUrb)(
           DriverGlobals,
           UsbDevice,
           Attributes,
           NumberOfIsochPackets,
           UrbMemory,
           Urb);
}
