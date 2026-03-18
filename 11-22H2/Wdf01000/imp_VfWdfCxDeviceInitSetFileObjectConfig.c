/*
 * XREFs of imp_VfWdfCxDeviceInitSetFileObjectConfig @ 0x1C00B35E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_FILEOBJECT_CONFIG *CxFileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetFileObjectConfig(
    DriverGlobals,
    CxDeviceInit,
    CxFileObjectConfig,
    FileObjectAttributes);
}
