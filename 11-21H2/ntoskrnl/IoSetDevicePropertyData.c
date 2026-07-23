/*
 * XREFs of IoSetDevicePropertyData @ 0x14080D9D0
 * Callers:
 *     sub_140507ED8 @ 0x140507ED8 (sub_140507ED8.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14080DA78 @ 0x14080DA78 (sub_14080DA78.c)
 */

NTSTATUS __stdcall IoSetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        DEVPROPTYPE Type,
        ULONG Size,
        PVOID Data)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v12; // rcx
  unsigned __int16 *v13; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v15; // rcx
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx

  if ( !Pdo )
    goto LABEL_16;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    sub_1403D99B4((ULONG)Pdo, (PVOID)Pdo->Size);
    DriverObject = Pdo->DriverObject;
    if ( DriverObject )
    {
      sub_1403D99B4((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &Pdo->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        sub_1403D99B4((ULONG)p_DriverName, (PVOID)2);
        sub_1403D99B4((ULONG)Pdo->DriverObject->DriverName.Buffer, (PVOID)Pdo->DriverObject->DriverName.Length);
      }
    }
    v12 = (char *)Pdo->DeviceObjectExtension->DeviceNode;
    if ( v12 )
    {
      v13 = (unsigned __int16 *)(v12 + 40);
      sub_1403D99B4((ULONG)v12, (PVOID)0x310);
      if ( *v13 )
      {
        sub_1403D99B4((ULONG)v13, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v13 + 1), (PVOID)*v13);
      }
      DeviceObjectExtension = Pdo->DeviceObjectExtension;
      v15 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v15 )
      {
        sub_1403D99B4((ULONG)v15, (PVOID)2);
        sub_1403D99B4(
          *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)Pdo->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = Pdo->DeviceObjectExtension;
      }
      v16 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v16 )
      {
        v17 = (_WORD *)(v16 + 56);
        if ( *v17 )
        {
          sub_1403D99B4((ULONG)v17, (PVOID)2);
          v18 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
          sub_1403D99B4(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
        }
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Pdo, 0LL, 0LL);
  }
  return sub_14080DA78(Pdo, PropertyKey, Lcid);
}
