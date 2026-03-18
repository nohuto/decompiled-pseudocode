/*
 * XREFs of imp_VfWdfDeviceGetFileObject @ 0x1C00B3AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFFILEOBJECT__ *__fastcall imp_VfWdfDeviceGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _FILE_OBJECT *FileObject)
{
  return WdfVersion.Functions.pfnWdfDeviceGetFileObject(DriverGlobals, Device, FileObject);
}
