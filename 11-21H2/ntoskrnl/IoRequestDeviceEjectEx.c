/*
 * XREFs of IoRequestDeviceEjectEx @ 0x14055FE70
 * Callers:
 *     IoRequestDeviceEject @ 0x14055FE50 (IoRequestDeviceEject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRequestDeviceEjectEx(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PIO_DEVICE_EJECT_CALLBACK Callback,
        PVOID Context,
        PDRIVER_OBJECT DriverObject)
{
  _DWORD *DeviceNode; // rcx
  __int64 Pool2; // rdi
  const void **v11; // rbx
  struct _DRIVER_OBJECT *v12; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v14; // rcx
  unsigned __int16 *v15; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  _WORD *v19; // rcx
  __int64 v20; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_20;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    sub_1403D99B4((ULONG)PhysicalDeviceObject, (PVOID)PhysicalDeviceObject->Size);
    v12 = PhysicalDeviceObject->DriverObject;
    if ( v12 )
    {
      sub_1403D99B4((ULONG)v12, (PVOID)(unsigned int)v12->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        sub_1403D99B4((ULONG)p_DriverName, (PVOID)2);
        sub_1403D99B4(
          (ULONG)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          (PVOID)PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v14 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v14 )
    {
      v15 = (unsigned __int16 *)(v14 + 40);
      sub_1403D99B4((ULONG)v14, (PVOID)0x310);
      if ( *v15 )
      {
        sub_1403D99B4((ULONG)v15, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v15 + 1), (PVOID)*v15);
      }
      DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      v17 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v17 )
      {
        sub_1403D99B4((ULONG)v17, (PVOID)2);
        sub_1403D99B4(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      }
      v18 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v18 )
      {
        v19 = (_WORD *)(v18 + 56);
        if ( *v19 )
        {
          sub_1403D99B4((ULONG)v19, (PVOID)2);
          v20 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          sub_1403D99B4(*(_QWORD *)(v20 + 64), (PVOID)*(unsigned __int16 *)(v20 + 56));
        }
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  Pool2 = ExAllocatePool2(64LL, 1496LL, 1181773392LL);
  if ( !Pool2 )
    return -1073741670;
  v11 = (const void **)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  *(_QWORD *)Pool2 = Callback;
  *(_QWORD *)(Pool2 + 8) = Context;
  memmove((void *)(Pool2 + 64), v11[6], *((unsigned __int16 *)v11 + 20));
  *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*((unsigned __int16 *)v11 + 20) >> 1) + 64) = 0;
  if ( DriverObject )
    ObfReferenceObjectWithTag(DriverObject, 0x45706E50u);
  *(_QWORD *)(Pool2 + 16) = DriverObject;
  *(_DWORD *)(Pool2 + 464) = 0;
  *(_WORD *)(Pool2 + 468) = 0;
  *(_QWORD *)(Pool2 + 48) = sub_140945380;
  *(_QWORD *)(Pool2 + 56) = Pool2;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 32), DelayedWorkQueue);
  return 0;
}
