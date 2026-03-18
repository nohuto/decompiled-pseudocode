/*
 * XREFs of imp_VfWdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00B7680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceSendControlTransferSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, WDFREQUEST__ *, _WDF_REQUEST_SEND_OPTIONS *, _WDF_USB_CONTROL_SETUP_PACKET *, _WDF_MEMORY_DESCRIPTOR *, unsigned int *))WdfVersion.Functions.pfnWdfUsbTargetDeviceSendControlTransferSynchronously)(
           DriverGlobals,
           UsbDevice,
           Request,
           RequestOptions,
           SetupPacket,
           MemoryDescriptor,
           BytesTransferred);
}
