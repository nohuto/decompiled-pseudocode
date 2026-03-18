/*
 * XREFs of imp_VfWdfFileObjectGetFileName @ 0x1C00B4D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_UNICODE_STRING *__fastcall imp_VfWdfFileObjectGetFileName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  return WdfVersion.Functions.pfnWdfFileObjectGetFileName(DriverGlobals, FileObject);
}
