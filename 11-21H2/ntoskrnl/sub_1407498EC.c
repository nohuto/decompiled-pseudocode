/*
 * XREFs of sub_1407498EC @ 0x1407498EC
 * Callers:
 *     sub_140749848 @ 0x140749848 (sub_140749848.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 */

__int64 __fastcall sub_1407498EC(struct _DEVICE_OBJECT *MaxDataSize, _QWORD *a2)
{
  _DWORD *DeviceNode; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v10; // rcx
  unsigned __int16 *v11; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  _WORD *v15; // rcx
  __int64 v16; // rcx

  if ( !MaxDataSize )
    goto LABEL_25;
  DeviceNode = MaxDataSize->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    sub_1403D99B4((ULONG)MaxDataSize, (PVOID)MaxDataSize->Size);
    DriverObject = MaxDataSize->DriverObject;
    if ( DriverObject )
    {
      sub_1403D99B4((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &MaxDataSize->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        sub_1403D99B4((ULONG)p_DriverName, (PVOID)2);
        sub_1403D99B4(
          (ULONG)MaxDataSize->DriverObject->DriverName.Buffer,
          (PVOID)MaxDataSize->DriverObject->DriverName.Length);
      }
    }
    v10 = (char *)MaxDataSize->DeviceObjectExtension->DeviceNode;
    if ( v10 )
    {
      v11 = (unsigned __int16 *)(v10 + 40);
      sub_1403D99B4((ULONG)v10, (PVOID)0x310);
      if ( *v11 )
      {
        sub_1403D99B4((ULONG)v11, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v11 + 1), (PVOID)*v11);
      }
      DeviceObjectExtension = MaxDataSize->DeviceObjectExtension;
      v13 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v13 )
      {
        sub_1403D99B4((ULONG)v13, (PVOID)2);
        sub_1403D99B4(
          *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)MaxDataSize->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = MaxDataSize->DeviceObjectExtension;
      }
      v14 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v14 )
      {
        v15 = (_WORD *)(v14 + 56);
        if ( *v15 )
        {
          sub_1403D99B4((ULONG)v15, (PVOID)2);
          v16 = *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 2);
          sub_1403D99B4(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
        }
      }
    }
LABEL_25:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)MaxDataSize, 0LL, 0LL);
  }
  v6 = sub_14074C6C0(MaxDataSize, (__int64)MaxDataSize, a2);
  if ( v6 >= 0 )
  {
    v6 = -1073741637;
    if ( a2[2] && a2[3] )
    {
      if ( a2[8] && a2[7] )
        return 0;
    }
    else if ( !a2[3] )
    {
      return (unsigned int)v6;
    }
    sub_14042A5E0(a2[1], v5);
  }
  return (unsigned int)v6;
}
