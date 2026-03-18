/*
 * XREFs of imp_WdfIoTargetSendReadSynchronously @ 0x1C0038F70
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetSendIo @ 0x1C00726D4 (FxIoTargetSendIo.c)
 */

int __fastcall imp_WdfIoTargetSendReadSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesRead)
{
  return FxIoTargetSendIo(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
           IoTarget,
           Request,
           3u,
           OutputBuffer,
           DeviceOffset,
           RequestOptions,
           BytesRead);
}
