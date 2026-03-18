/*
 * XREFs of IoGetDevicePropertyData @ 0x140749610
 * Callers:
 *     PopFxQueryBiosDeviceName @ 0x1402D2388 (PopFxQueryBiosDeviceName.c)
 *     HalpAreDriversDmarCompatible @ 0x1403CCFD4 (HalpAreDriversDmarCompatible.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x140510C60 (HalpIommuDeviceGetDomainTypes.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405CB06C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1405CC6C4 (PopFxIsDevicePotentialDripsConstraint.c)
 *     IopGetSessionIdFromPDO @ 0x140749588 (IopGetSessionIdFromPDO.c)
 *     IopGetInterruptConnectionData @ 0x140817A24 (IopGetInterruptConnectionData.c)
 *     PnprIsMemoryDevice @ 0x140952680 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x140952738 (PnprIsProcessorDevice.c)
 *     VfGetDmaAdapter @ 0x140A85B10 (VfGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PnpGetDevicePropertyData @ 0x1407496A8 (PnpGetDevicePropertyData.c)
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
    IoAddTriageDumpDataBlock((ULONG)Pdo, (PVOID)Pdo->Size);
    DriverObject = Pdo->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &Pdo->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)Pdo->DriverObject->DriverName.Buffer,
          (PVOID)Pdo->DriverObject->DriverName.Length);
      }
    }
    v13 = (char *)Pdo->DeviceObjectExtension->DeviceNode;
    if ( v13 )
    {
      v14 = (unsigned __int16 *)(v13 + 40);
      IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)0x310);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
      }
      DeviceObjectExtension = Pdo->DeviceObjectExtension;
      v16 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
        IoAddTriageDumpDataBlock(
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
          IoAddTriageDumpDataBlock((ULONG)v18, (PVOID)2);
          v19 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
        }
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Pdo, 0LL, 0LL);
  }
  return PnpGetDevicePropertyData(
           (int)Pdo,
           (int)PropertyKey,
           Lcid,
           Flags,
           Size,
           Data,
           (__int64)RequiredSize,
           (__int64)Type);
}
