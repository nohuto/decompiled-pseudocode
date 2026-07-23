/*
 * XREFs of sub_1409457D0 @ 0x1409457D0
 * Callers:
 *     sub_140560174 @ 0x140560174 (sub_140560174.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_140945654 @ 0x140945654 (sub_140945654.c)
 *     sub_140947D0C @ 0x140947D0C (sub_140947D0C.c)
 */

__int64 __fastcall sub_1409457D0(struct _DEVICE_OBJECT *MaxDataSize, _BYTE *a2)
{
  __int64 DeviceNode; // rsi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx

  if ( !MaxDataSize )
    goto LABEL_30;
  DeviceNode = (__int64)MaxDataSize->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (v5 = *(_DWORD *)(DeviceNode + 396), (v5 & 0x20000) != 0) )
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
    v13 = (char *)MaxDataSize->DeviceObjectExtension->DeviceNode;
    if ( v13 )
    {
      v14 = (unsigned __int16 *)(v13 + 40);
      sub_1403D99B4((ULONG)v13, (PVOID)0x310);
      if ( *v14 )
      {
        sub_1403D99B4((ULONG)v14, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v14 + 1), (PVOID)*v14);
      }
      DeviceObjectExtension = MaxDataSize->DeviceObjectExtension;
      v16 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v16 )
      {
        sub_1403D99B4((ULONG)v16, (PVOID)2);
        sub_1403D99B4(
          *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)MaxDataSize->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = MaxDataSize->DeviceObjectExtension;
      }
      v17 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v17 )
      {
        v18 = (_WORD *)(v17 + 56);
        if ( *v18 )
        {
          sub_1403D99B4((ULONG)v18, (PVOID)2);
          v19 = *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 2);
          sub_1403D99B4(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
        }
      }
    }
LABEL_30:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)MaxDataSize, 0LL, 0LL);
  }
  *a2 = 0;
  if ( (v5 & 0x10) != 0 )
  {
    v7 = sub_140947D0C(MaxDataSize);
    v6 = v7;
    if ( v7 >= 0 && v7 != 255 )
    {
      v8 = *(_DWORD *)(DeviceNode + 300);
      if ( (unsigned int)(v8 - 787) <= 1 )
      {
        sub_140765114(DeviceNode, 54, 0);
        return (unsigned int)sub_140945654((ULONG_PTR)MaxDataSize);
      }
      else if ( v8 == 780 )
      {
        sub_140765114(DeviceNode, 54, 0);
        v9 = sub_140945654((ULONG_PTR)MaxDataSize);
        v6 = v9;
        if ( v9 < 0 )
          sub_140765430(DeviceNode, 0, 54, v9);
        else
          sub_140764FE4(DeviceNode);
      }
      else if ( v8 == 785 )
      {
        return 259;
      }
      else
      {
        v6 = sub_140765430(DeviceNode, 0, 54, 0);
        if ( v6 >= 0 )
          *a2 = 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741130;
  }
  return (unsigned int)v6;
}
