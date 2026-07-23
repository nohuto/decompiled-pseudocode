/*
 * XREFs of IoInvalidateDeviceState @ 0x1402DCE00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall IoInvalidateDeviceState(PDEVICE_OBJECT PhysicalDeviceObject)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v5; // rcx
  unsigned __int16 *v6; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v8; // rcx
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_18;
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
    v5 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v5 )
    {
      v6 = (unsigned __int16 *)(v5 + 40);
      sub_1403D99B4((ULONG)v5, (PVOID)0x310);
      if ( *v6 )
      {
        sub_1403D99B4((ULONG)v6, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v6 + 1), (PVOID)*v6);
      }
      DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      v8 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v8 )
      {
        sub_1403D99B4((ULONG)v8, (PVOID)2);
        sub_1403D99B4(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      }
      v9 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v9 )
      {
        v10 = (_WORD *)(v9 + 56);
        if ( *v10 )
        {
          sub_1403D99B4((ULONG)v10, (PVOID)2);
          v11 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          sub_1403D99B4(*(_QWORD *)(v11 + 64), (PVOID)*(unsigned __int16 *)(v11 + 56));
        }
      }
    }
LABEL_18:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  if ( DeviceNode[75] == 778 )
    sub_1402DCF44(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
