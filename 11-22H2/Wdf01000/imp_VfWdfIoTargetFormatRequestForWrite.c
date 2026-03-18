/*
 * XREFs of imp_VfWdfIoTargetFormatRequestForWrite @ 0x1C00B5A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoTargetFormatRequestForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffset,
        __int64 *DeviceOffset)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFREQUEST__ *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *, __int64 *))WdfVersion.Functions.pfnWdfIoTargetFormatRequestForWrite)(
           DriverGlobals,
           IoTarget,
           Request,
           InputBuffer,
           InputBufferOffset,
           DeviceOffset);
}
