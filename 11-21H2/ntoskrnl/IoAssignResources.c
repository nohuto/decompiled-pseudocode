/*
 * XREFs of IoAssignResources @ 0x140941E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 */

NTSTATUS __stdcall IoAssignResources(
        PUNICODE_STRING RegistryPath,
        PUNICODE_STRING DriverClassName,
        PDRIVER_OBJECT DriverObject,
        PDEVICE_OBJECT DeviceObject,
        PIO_RESOURCE_REQUIREMENTS_LIST RequestedResources,
        PCM_RESOURCE_LIST *AllocatedResources)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *v9; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v11; // rcx
  unsigned __int16 *v12; // rbp
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  PIO_RESOURCE_REQUIREMENTS_LIST v18; // r9

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
        v9 = DeviceObject->DriverObject;
        if ( v9 )
        {
          sub_1403D99B4((ULONG)v9, (PVOID)(unsigned int)v9->Size);
          p_DriverName = &DeviceObject->DriverObject->DriverName;
          if ( p_DriverName->Length )
          {
            sub_1403D99B4((ULONG)p_DriverName, (PVOID)2);
            sub_1403D99B4(
              (ULONG)DeviceObject->DriverObject->DriverName.Buffer,
              (PVOID)DeviceObject->DriverObject->DriverName.Length);
          }
        }
        v11 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
        if ( v11 )
        {
          v12 = (unsigned __int16 *)(v11 + 40);
          sub_1403D99B4((ULONG)v11, (PVOID)0x310);
          if ( *v12 )
          {
            sub_1403D99B4((ULONG)v12, (PVOID)2);
            sub_1403D99B4(*((_QWORD *)v12 + 1), (PVOID)*v12);
          }
          DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          v14 = (char *)DeviceObjectExtension->DeviceNode + 56;
          if ( *v14 )
          {
            sub_1403D99B4((ULONG)v14, (PVOID)2);
            sub_1403D99B4(
              *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
              (PVOID)*((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
            DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
          }
          v15 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
          if ( v15 )
          {
            v16 = (_WORD *)(v15 + 56);
            if ( *v16 )
            {
              sub_1403D99B4((ULONG)v16, (PVOID)2);
              v17 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
              sub_1403D99B4(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, (ULONG_PTR)DriverObject, 0LL);
      }
    }
  }
  v18 = RequestedResources;
  if ( RequestedResources && (!RequestedResources->AlternativeLists || !RequestedResources->List[0].Count) )
    v18 = 0LL;
  if ( AllocatedResources )
    *AllocatedResources = 0LL;
  return sub_14081F570(2, (__int64)DriverObject, (__int64)DeviceObject, (__int64)v18, (const void **)AllocatedResources);
}
