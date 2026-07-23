/*
 * XREFs of IoGetDevicePropertyData @ 0x140749610
 * Callers:
 *     sub_1402D2388 @ 0x1402D2388 (sub_1402D2388.c)
 *     sub_1403CCFD4 @ 0x1403CCFD4 (sub_1403CCFD4.c)
 *     sub_140510C60 @ 0x140510C60 (sub_140510C60.c)
 *     sub_1405CB06C @ 0x1405CB06C (sub_1405CB06C.c)
 *     sub_1405CC6C4 @ 0x1405CC6C4 (sub_1405CC6C4.c)
 *     sub_140749588 @ 0x140749588 (sub_140749588.c)
 *     sub_140817A24 @ 0x140817A24 (sub_140817A24.c)
 *     sub_140952680 @ 0x140952680 (sub_140952680.c)
 *     sub_140952738 @ 0x140952738 (sub_140952738.c)
 *     sub_140A85B10 @ 0x140A85B10 (sub_140A85B10.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407496A8 @ 0x1407496A8 (sub_1407496A8.c)
 */

NTSTATUS __stdcall IoGetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        ULONG Size,
        PVOID Data,
        PULONG RequiredSize,
        PDEVPROPTYPE Type)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx

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
    v13 = (char *)Pdo->DeviceObjectExtension->DeviceNode;
    if ( v13 )
    {
      v14 = (unsigned __int16 *)(v13 + 40);
      sub_1403D99B4((ULONG)v13, (PVOID)0x310);
      if ( *v14 )
      {
        sub_1403D99B4((ULONG)v14, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v14 + 1), (PVOID)*v14);
      }
      DeviceObjectExtension = Pdo->DeviceObjectExtension;
      v16 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v16 )
      {
        sub_1403D99B4((ULONG)v16, (PVOID)2);
        sub_1403D99B4(
          *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)Pdo->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = Pdo->DeviceObjectExtension;
      }
      v17 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v17 )
      {
        v18 = (_WORD *)(v17 + 56);
        if ( *v18 )
        {
          sub_1403D99B4((ULONG)v18, (PVOID)2);
          v19 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
          sub_1403D99B4(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
        }
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Pdo, 0LL, 0LL);
  }
  return sub_1407496A8(Pdo, PropertyKey, Lcid, Flags, Size, Data, RequiredSize, Type);
}
