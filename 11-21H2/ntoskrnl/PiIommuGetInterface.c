/*
 * XREFs of PiIommuGetInterface @ 0x1407498EC
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x140749848 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PnpQueryInterface @ 0x14074C6C0 (PnpQueryInterface.c)
 */

__int64 __fastcall PiIommuGetInterface(struct _DEVICE_OBJECT *MaxDataSize, _QWORD *a2)
{
  _DWORD *DeviceNode; // rcx
  int Interface; // ebx
  void (__fastcall *v7)(_QWORD); // rax
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
    IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)MaxDataSize->Size);
    DriverObject = MaxDataSize->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &MaxDataSize->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)MaxDataSize->DriverObject->DriverName.Buffer,
          (PVOID)MaxDataSize->DriverObject->DriverName.Length);
      }
    }
    v10 = (char *)MaxDataSize->DeviceObjectExtension->DeviceNode;
    if ( v10 )
    {
      v11 = (unsigned __int16 *)(v10 + 40);
      IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)0x310);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v11 + 1), (PVOID)*v11);
      }
      DeviceObjectExtension = MaxDataSize->DeviceObjectExtension;
      v13 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
        IoAddTriageDumpDataBlock(
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
          IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
          v16 = *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
        }
      }
    }
LABEL_25:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)MaxDataSize, 0LL, 0LL);
  }
  Interface = PnpQueryInterface(MaxDataSize, (__int64)MaxDataSize, a2);
  if ( Interface >= 0 )
  {
    Interface = -1073741637;
    if ( a2[2] && (v7 = (void (__fastcall *)(_QWORD))a2[3]) != 0LL )
    {
      if ( a2[8] && a2[7] )
        return 0;
    }
    else
    {
      v7 = (void (__fastcall *)(_QWORD))a2[3];
      if ( !v7 )
        return (unsigned int)Interface;
    }
    v7(a2[1]);
  }
  return (unsigned int)Interface;
}
