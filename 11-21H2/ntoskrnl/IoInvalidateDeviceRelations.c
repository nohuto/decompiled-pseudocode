/*
 * XREFs of IoInvalidateDeviceRelations @ 0x1402DCE90
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 *     sub_1406E4E14 @ 0x1406E4E14 (sub_1406E4E14.c)
 *     sub_140763C50 @ 0x140763C50 (sub_140763C50.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_14094F860 @ 0x14094F860 (sub_14094F860.c)
 *     sub_14095341C @ 0x14095341C (sub_14095341C.c)
 * Callees:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall IoInvalidateDeviceRelations(PDEVICE_OBJECT DeviceObject, DEVICE_RELATION_TYPE Type)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v6; // rcx
  unsigned __int16 *v7; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v9; // rcx
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx

  if ( !DeviceObject )
    goto LABEL_21;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    sub_1403D99B4((ULONG)DeviceObject, (PVOID)DeviceObject->Size);
    DriverObject = DeviceObject->DriverObject;
    if ( DriverObject )
    {
      sub_1403D99B4((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &DeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        sub_1403D99B4((ULONG)p_DriverName, (PVOID)2);
        sub_1403D99B4(
          (ULONG)DeviceObject->DriverObject->DriverName.Buffer,
          (PVOID)DeviceObject->DriverObject->DriverName.Length);
      }
    }
    v6 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v6 )
    {
      v7 = (unsigned __int16 *)(v6 + 40);
      sub_1403D99B4((ULONG)v6, (PVOID)0x310);
      if ( *v7 )
      {
        sub_1403D99B4((ULONG)v7, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v7 + 1), (PVOID)*v7);
      }
      DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
      v9 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v9 )
      {
        sub_1403D99B4((ULONG)v9, (PVOID)2);
        sub_1403D99B4(
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
      }
      v10 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v10 )
      {
        v11 = (_WORD *)(v10 + 56);
        if ( *v11 )
        {
          sub_1403D99B4((ULONG)v11, (PVOID)2);
          v12 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
          sub_1403D99B4(*(_QWORD *)(v12 + 64), (PVOID)*(unsigned __int16 *)(v12 + 56));
        }
      }
    }
LABEL_21:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  }
  if ( (unsigned int)Type <= PowerRelations || Type == SingleBusRelations || Type == TransportRelations )
    sub_1402DCF44(DeviceObject, 0LL, 0LL, 0LL);
}
