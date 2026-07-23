/*
 * XREFs of IoReportResourceUsage @ 0x140944F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140945128 @ 0x140945128 (sub_140945128.c)
 */

NTSTATUS __stdcall IoReportResourceUsage(
        PUNICODE_STRING DriverClassName,
        PDRIVER_OBJECT DriverObject,
        PCM_RESOURCE_LIST DriverList,
        ULONG DriverListSize,
        PDEVICE_OBJECT DeviceObject,
        PCM_RESOURCE_LIST DeviceList,
        ULONG DeviceListSize,
        BOOLEAN OverrideConflict,
        PBOOLEAN ConflictDetected)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *v11; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx

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
        v11 = DeviceObject->DriverObject;
        if ( v11 )
        {
          sub_1403D99B4((ULONG)v11, (PVOID)(unsigned int)v11->Size);
          p_DriverName = &DeviceObject->DriverObject->DriverName;
          if ( p_DriverName->Length )
          {
            sub_1403D99B4((ULONG)p_DriverName, (PVOID)2);
            sub_1403D99B4(
              (ULONG)DeviceObject->DriverObject->DriverName.Buffer,
              (PVOID)DeviceObject->DriverObject->DriverName.Length);
          }
        }
        v13 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
        if ( v13 )
        {
          v14 = (unsigned __int16 *)(v13 + 40);
          sub_1403D99B4((ULONG)v13, (PVOID)0x310);
          if ( *v14 )
          {
            sub_1403D99B4((ULONG)v14, (PVOID)2);
            sub_1403D99B4(*((_QWORD *)v14 + 1), (PVOID)*v14);
          }
          DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          v16 = (char *)DeviceObjectExtension->DeviceNode + 56;
          if ( *v16 )
          {
            sub_1403D99B4((ULONG)v16, (PVOID)2);
            sub_1403D99B4(
              *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
              (PVOID)*((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
            DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          }
          v17 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
          if ( v17 )
          {
            v18 = (_WORD *)(v17 + 56);
            if ( *v18 )
            {
              sub_1403D99B4((ULONG)v18, (PVOID)2);
              v19 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
              sub_1403D99B4(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, (ULONG_PTR)DriverObject, 0LL);
      }
    }
  }
  return sub_140945128(0, (_DWORD)DriverObject, (_DWORD)DriverObject, (_DWORD)DriverList);
}
