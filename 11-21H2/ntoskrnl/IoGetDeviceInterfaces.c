/*
 * XREFs of IoGetDeviceInterfaces @ 0x1407896A0
 * Callers:
 *     sub_140952680 @ 0x140952680 (sub_140952680.c)
 *     sub_140952738 @ 0x140952738 (sub_140952738.c)
 *     sub_140B0E478 @ 0x140B0E478 (sub_140B0E478.c)
 *     sub_140B54AE4 @ 0x140B54AE4 (sub_140B54AE4.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaces(
        const GUID *InterfaceClassGuid,
        PDEVICE_OBJECT PhysicalDeviceObject,
        ULONG Flags,
        PZZWSTR *SymbolicLinkList)
{
  __int64 v5; // rdx
  _DWORD *DeviceNode; // rdx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v10; // rcx
  unsigned __int16 *v11; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  _WORD *v15; // rcx
  __int64 v16; // rcx

  v5 = 0LL;
  if ( PhysicalDeviceObject )
  {
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
      v10 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
      if ( v10 )
      {
        v11 = (unsigned __int16 *)(v10 + 40);
        sub_1403D99B4((ULONG)v10, (PVOID)0x310);
        if ( *v11 )
        {
          sub_1403D99B4((ULONG)v11, (PVOID)2);
          sub_1403D99B4(*((_QWORD *)v11 + 1), (PVOID)*v11);
        }
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
        v13 = (char *)DeviceObjectExtension->DeviceNode + 56;
        if ( *v13 )
        {
          sub_1403D99B4((ULONG)v13, (PVOID)2);
          sub_1403D99B4(
            *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
            (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
          DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
        }
        v14 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
        if ( v14 )
        {
          v15 = (_WORD *)(v14 + 56);
          if ( *v15 )
          {
            sub_1403D99B4((ULONG)v15, (PVOID)2);
            v16 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
            sub_1403D99B4(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    v5 = (__int64)(DeviceNode + 10);
  }
  return sub_1407879A8((int *)InterfaceClassGuid, v5, Flags, 0, SymbolicLinkList, 0LL);
}
