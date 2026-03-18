/*
 * XREFs of WdmlibIoCreateDeviceSecure @ 0x1C00BD964
 * Callers:
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002640C (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WdmlibInit @ 0x1C00BD9FC (WdmlibInit.c)
 */

__int64 __fastcall WdmlibIoCreateDeviceSecure(
        _DRIVER_OBJECT *DriverObject,
        __int64 DeviceName,
        _UNICODE_STRING *DeviceType,
        unsigned int DeviceCharacteristics,
        unsigned int Exclusive,
        unsigned __int8 DefaultSDDLString,
        const _UNICODE_STRING *DeviceClassGuid,
        const _GUID *DeviceObject,
        _DEVICE_OBJECT **DriverObject_0)
{
  if ( !WdmlibInitialized )
    WdmlibInit(DriverObject, DeviceName);
  return ((__int64 (__fastcall *)(_DRIVER_OBJECT *, __int64, _UNICODE_STRING *, _QWORD, unsigned int, unsigned __int8, const _UNICODE_STRING *, const _GUID *, _DEVICE_OBJECT **))PfnIoCreateDeviceSecure)(
           DriverObject,
           40LL,
           DeviceType,
           DeviceCharacteristics,
           Exclusive,
           DefaultSDDLString,
           DeviceClassGuid,
           DeviceObject,
           DriverObject_0);
}
