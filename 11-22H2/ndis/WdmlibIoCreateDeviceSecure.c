/*
 * XREFs of WdmlibIoCreateDeviceSecure @ 0x1C0118EC4
 * Callers:
 *     NdisRegisterDeviceEx @ 0x1C002B290 (NdisRegisterDeviceEx.c)
 *     ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x1C01602B8 (-ndisLwmInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     WdmlibInit @ 0x1C011A630 (WdmlibInit.c)
 */

NTSTATUS __stdcall WdmlibIoCreateDeviceSecure(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PCUNICODE_STRING DefaultSDDLString,
        LPCGUID DeviceClassGuid,
        PDEVICE_OBJECT *DeviceObject)
{
  if ( !WdmlibInitialized )
    WdmlibInit(DriverObject, DeviceExtensionSize, DeviceName, DeviceType);
  return ((__int64 (__fastcall *)(PDRIVER_OBJECT, _QWORD, PUNICODE_STRING, __int64, int, _BYTE, PCUNICODE_STRING, _QWORD, PDEVICE_OBJECT *))PfnIoCreateDeviceSecure)(
           DriverObject,
           DeviceExtensionSize,
           DeviceName,
           18LL,
           256,
           0,
           DefaultSDDLString,
           0LL,
           DeviceObject);
}
