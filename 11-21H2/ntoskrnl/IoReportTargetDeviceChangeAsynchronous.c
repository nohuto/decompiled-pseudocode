/*
 * XREFs of IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     FsRtlNotifyVolumeEventEx @ 0x14074C800 (FsRtlNotifyVolumeEventEx.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14078AB30 @ 0x14078AB30 (sub_14078AB30.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoReportTargetDeviceChangeAsynchronous(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PVOID NotificationStructure,
        PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
        PVOID Context)
{
  _DWORD *DeviceNode; // rcx
  __int128 *v9; // rdi
  int v10; // ecx
  int v11; // edx
  struct _WORK_QUEUE_ITEM *Pool2; // rdi
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v16; // rcx
  unsigned __int16 *v17; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v19; // rcx
  __int64 v20; // rcx
  _WORD *v21; // rcx
  __int64 v22; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_31;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    sub_1403D99B4((ULONG)PhysicalDeviceObject, (PVOID)PhysicalDeviceObject->Size);
    DriverObject = PhysicalDeviceObject->DriverObject;
    if ( DriverObject )
    {
      sub_1403D99B4((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        sub_1403D99B4((ULONG)p_DriverName, (PVOID)2);
        sub_1403D99B4(
          (ULONG)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          (PVOID)PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v16 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v16 )
    {
      v17 = (unsigned __int16 *)(v16 + 40);
      sub_1403D99B4((ULONG)v16, (PVOID)0x310);
      if ( *v17 )
      {
        sub_1403D99B4((ULONG)v17, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v17 + 1), (PVOID)*v17);
      }
      DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      v19 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v19 )
      {
        sub_1403D99B4((ULONG)v19, (PVOID)2);
        sub_1403D99B4(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      }
      v20 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v20 )
      {
        v21 = (_WORD *)(v20 + 56);
        if ( *v21 )
        {
          sub_1403D99B4((ULONG)v21, (PVOID)2);
          v22 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          sub_1403D99B4(*(_QWORD *)(v22 + 64), (PVOID)*(unsigned __int16 *)(v22 + 56));
        }
      }
    }
LABEL_31:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  v9 = (__int128 *)((char *)NotificationStructure + 4);
  if ( (char *)NotificationStructure + 4 == (char *)&qword_140010CE8 )
    return -1073741808;
  if ( RtlCompareMemory(v9, &qword_140010CE8, 0x10uLL) == 16 )
    return -1073741808;
  if ( v9 == &xmmword_140010CC8 )
    return -1073741808;
  if ( RtlCompareMemory(v9, &xmmword_140010CC8, 0x10uLL) == 16 )
    return -1073741808;
  if ( v9 == &xmmword_140010CF8 )
    return -1073741808;
  if ( RtlCompareMemory(v9, &xmmword_140010CF8, 0x10uLL) == 16 )
    return -1073741808;
  v10 = *((unsigned __int16 *)NotificationStructure + 1);
  if ( (unsigned __int16)v10 < 0x24u )
    return -1073741808;
  v11 = *((_DWORD *)NotificationStructure + 8);
  if ( v11 != -1 && v11 > v10 - 36 )
    return -1073741808;
  if ( KeGetCurrentIrql() != 2 )
    return sub_14078AB30(PhysicalDeviceObject, (__int64)Context, NotificationStructure);
  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(
                                       64LL,
                                       *((unsigned __int16 *)NotificationStructure + 1) + 64LL,
                                       946892368LL);
  if ( !Pool2 )
    return -1073741670;
  ObfReferenceObjectWithTag(PhysicalDeviceObject, 0x4E706E50u);
  Pool2[1].List.Flink = (struct _LIST_ENTRY *)PhysicalDeviceObject;
  Pool2[1].Parameter = &Pool2[2];
  memmove(&Pool2[2], NotificationStructure, *((unsigned __int16 *)NotificationStructure + 1));
  Pool2[1].List.Blink = (struct _LIST_ENTRY *)Callback;
  Pool2[1].WorkerRoutine = (PWORKER_THREAD_ROUTINE)Context;
  Pool2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140944BB0;
  Pool2->Parameter = Pool2;
  Pool2->List.Flink = 0LL;
  ExQueueWorkItem(Pool2, DelayedWorkQueue);
  return 259;
}
