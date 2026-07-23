/*
 * XREFs of sub_140846398 @ 0x140846398
 * Callers:
 *     IoGetDmaAdapter @ 0x1408462A0 (IoGetDmaAdapter.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 */

__int64 __fastcall sub_140846398(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // rbx
  _DWORD *DeviceNode; // rcx
  __int64 v6; // rdx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v10; // rcx
  unsigned __int16 *v11; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  _WORD *v15; // rcx
  __int64 v16; // rcx
  _QWORD v17[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v17, 0, sizeof(v17));
  v4 = 0LL;
  if ( !DeviceObject )
    goto LABEL_20;
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
    v10 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v10 )
    {
      v11 = (unsigned __int16 *)(v10 + 40);
      sub_1403D99B4((ULONG)v10, (PVOID)0x310);
      if ( *v11 )
      {
        sub_1403D99B4((ULONG)v11, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v11 + 1), (PVOID)*v11);
      }
      DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
      v13 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v13 )
      {
        sub_1403D99B4((ULONG)v13, (PVOID)2);
        sub_1403D99B4(
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
      }
      v14 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v14 )
      {
        v15 = (_WORD *)(v14 + 56);
        if ( *v15 )
        {
          sub_1403D99B4((ULONG)v15, (PVOID)2);
          v16 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
          sub_1403D99B4(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
        }
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  }
  if ( (int)sub_14074C6C0(DeviceObject, (ULONG_PTR)&qword_140012950, 1u, 0x40u, 0LL, (USHORT *)v17) >= 0 )
  {
    if ( v17[5] )
      v4 = sub_14042A5E0(v17[1], a2);
    sub_14042A5E0(v17[1], v6);
  }
  return v4;
}
