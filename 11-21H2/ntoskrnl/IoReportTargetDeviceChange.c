/*
 * XREFs of IoReportTargetDeviceChange @ 0x1407FB910
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x14074C800 (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_14078AB30 @ 0x14078AB30 (sub_14078AB30.c)
 */

NTSTATUS __stdcall IoReportTargetDeviceChange(PDEVICE_OBJECT PhysicalDeviceObject, PVOID NotificationStructure)
{
  _DWORD *DeviceNode; // rcx
  __int128 *v5; // rdi
  int v6; // eax
  int v7; // ecx
  NTSTATUS result; // eax
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v11; // rcx
  unsigned __int16 *v12; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  NTSTATUS v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( !PhysicalDeviceObject )
    goto LABEL_29;
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
    v11 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v11 + 40);
      sub_1403D99B4((ULONG)v11, (PVOID)0x310);
      if ( *v12 )
      {
        sub_1403D99B4((ULONG)v12, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v12 + 1), (PVOID)*v12);
      }
      DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      v14 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v14 )
      {
        sub_1403D99B4((ULONG)v14, (PVOID)2);
        sub_1403D99B4(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      }
      v15 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v15 )
      {
        v16 = (_WORD *)(v15 + 56);
        if ( *v16 )
        {
          sub_1403D99B4((ULONG)v16, (PVOID)2);
          v17 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          sub_1403D99B4(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
        }
      }
    }
LABEL_29:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  v5 = (__int128 *)((char *)NotificationStructure + 4);
  if ( (char *)NotificationStructure + 4 == (char *)&qword_140010CE8 )
    return -1073741808;
  if ( RtlCompareMemory(v5, &qword_140010CE8, 0x10uLL) == 16 )
    return -1073741808;
  if ( v5 == &xmmword_140010CC8 )
    return -1073741808;
  if ( RtlCompareMemory(v5, &xmmword_140010CC8, 0x10uLL) == 16 )
    return -1073741808;
  if ( v5 == &xmmword_140010CF8 )
    return -1073741808;
  if ( RtlCompareMemory(v5, &xmmword_140010CF8, 0x10uLL) == 16 )
    return -1073741808;
  v6 = *((unsigned __int16 *)NotificationStructure + 1);
  if ( (unsigned __int16)v6 < 0x24u )
    return -1073741808;
  v7 = *((_DWORD *)NotificationStructure + 8);
  if ( v7 != -1 && v7 > v6 - 36 )
    return -1073741808;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = sub_14078AB30(
             PhysicalDeviceObject,
             (__int64)&Event,
             &v19,
             0LL,
             0LL,
             (unsigned __int16 *)NotificationStructure);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return v19;
  }
  return result;
}
