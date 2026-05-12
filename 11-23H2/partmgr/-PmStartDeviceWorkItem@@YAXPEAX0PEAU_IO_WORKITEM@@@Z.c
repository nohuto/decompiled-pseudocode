/*
 * XREFs of ?PmStartDeviceWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C000EF50
 * Callers:
 *     <none>
 * Callees:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 */

void __fastcall PmStartDeviceWorkItem(
        struct _DEVICE_EXTENSION **IoObject,
        struct _IRP *Context,
        PIO_WORKITEM IoWorkItem)
{
  IoFreeWorkItem(IoWorkItem);
  PmStartDeviceInternal(IoObject[8], Context);
}
