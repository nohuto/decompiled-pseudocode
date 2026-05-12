/*
 * XREFs of ?PmStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000A8E0
 * Callers:
 *     ?PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001C340 (-PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall PmStartDevice(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _IO_WORKITEM *WorkItem; // rcx

  if ( !*((_BYTE *)PmControlObject->DeviceExtension + 165) )
    return PmStartDeviceInternal((struct _DEVICE_EXTENSION *)a1->DeviceExtension, a2);
  WorkItem = IoAllocateWorkItem(a1);
  if ( !WorkItem )
    return 3221225626LL;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IoQueueWorkItemEx(WorkItem, PmStartDeviceWorkItem, HyperCriticalWorkQueue, a2);
  return 259LL;
}
