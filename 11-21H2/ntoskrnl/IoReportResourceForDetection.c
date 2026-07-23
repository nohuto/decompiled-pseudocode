/*
 * XREFs of IoReportResourceForDetection @ 0x140944D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140945128 @ 0x140945128 (sub_140945128.c)
 */

NTSTATUS __stdcall IoReportResourceForDetection(
        PDRIVER_OBJECT DriverObject,
        PCM_RESOURCE_LIST DriverList,
        ULONG DriverListSize,
        PDEVICE_OBJECT DeviceObject,
        PCM_RESOURCE_LIST DeviceList,
        ULONG DeviceListSize,
        PBOOLEAN ConflictDetected)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *v10; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v12; // rcx
  unsigned __int16 *v13; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v15; // rcx
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx

  if ( DeviceObject )
  {
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        if ( DriverObject )
        {
          sub_1403D99B4((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
          if ( DriverObject->DriverName.Length )
          {
            sub_1403D99B4((_DWORD)DriverObject + 56, (PVOID)2);
            sub_1403D99B4((ULONG)DriverObject->DriverName.Buffer, (PVOID)DriverObject->DriverName.Length);
          }
        }
        sub_1403D99B4((ULONG)DeviceObject, (PVOID)DeviceObject->Size);
        v10 = DeviceObject->DriverObject;
        if ( v10 )
        {
          sub_1403D99B4((ULONG)v10, (PVOID)(unsigned int)v10->Size);
          p_DriverName = &DeviceObject->DriverObject->DriverName;
          if ( p_DriverName->Length )
          {
            sub_1403D99B4((ULONG)p_DriverName, (PVOID)2);
            sub_1403D99B4(
              (ULONG)DeviceObject->DriverObject->DriverName.Buffer,
              (PVOID)DeviceObject->DriverObject->DriverName.Length);
          }
        }
        v12 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
        if ( v12 )
        {
          v13 = (unsigned __int16 *)(v12 + 40);
          sub_1403D99B4((ULONG)v12, (PVOID)0x310);
          if ( *v13 )
          {
            sub_1403D99B4((ULONG)v13, (PVOID)2);
            sub_1403D99B4(*((_QWORD *)v13 + 1), (PVOID)*v13);
          }
          DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          v15 = (char *)DeviceObjectExtension->DeviceNode + 56;
          if ( *v15 )
          {
            sub_1403D99B4((ULONG)v15, (PVOID)2);
            sub_1403D99B4(
              *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
              (PVOID)*((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
            DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          }
          v16 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
          if ( v16 )
          {
            v17 = (_WORD *)(v16 + 56);
            if ( *v17 )
            {
              sub_1403D99B4((ULONG)v17, (PVOID)2);
              v18 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
              sub_1403D99B4(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, (ULONG_PTR)DriverObject, 0LL);
      }
    }
  }
  return sub_140945128(3, (_DWORD)DriverList, (_DWORD)DriverObject, (_DWORD)DriverList);
}
