/*
 * XREFs of PiPagePathSetState @ 0x14084BB98
 * Callers:
 *     PpPagePathAssign @ 0x14084BB80 (PpPagePathAssign.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x14085A678 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     PpPagePathRelease @ 0x140945F80 (PpPagePathRelease.c)
 *     MiDeletePagefile @ 0x14096F074 (MiDeletePagefile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IoQueueThreadIrp @ 0x140389E20 (IoQueueThreadIrp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoGetRelatedTargetDevice @ 0x14074C9D8 (IoGetRelatedTargetDevice.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x14084BC80 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x14084BCDC (PpIrpAllocateDeviceUsageNotification.c)
 */

__int64 __fastcall PiPagePathSetState(struct _FILE_OBJECT *Object, char a2)
{
  IRP *DeviceUsageNotification; // rax
  IRP *v5; // rbx
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  PDEVICE_OBJECT DeviceObject[8]; // [rsp+30h] [rbp-40h] BYREF
  PVOID Objecta; // [rsp+80h] [rbp+10h] BYREF

  memset(DeviceObject, 0, sizeof(DeviceObject));
  Objecta = 0LL;
  ObfReferenceObject(Object);
  DeviceObject[0] = IoGetRelatedDeviceObject(Object);
  LODWORD(DeviceObject[1]) = 1;
  BYTE4(DeviceObject[1]) = a2;
  DeviceObject[2] = (PDEVICE_OBJECT)Object;
  DeviceUsageNotification = (IRP *)PpIrpAllocateDeviceUsageNotification(DeviceObject);
  v5 = DeviceUsageNotification;
  if ( DeviceUsageNotification )
  {
    IoQueueThreadIrp(DeviceUsageNotification);
    PpDevNodeLockTree(1);
    v6 = IofCallDriver(DeviceObject[0], v5);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&DeviceObject[5], Executive, 0, 0, 0LL);
      v6 = (NTSTATUS)DeviceObject[3];
    }
    if ( v6 >= 0 && (int)IoGetRelatedTargetDevice(Object, &Objecta) >= 0 )
    {
      LOBYTE(v7) = a2;
      PoDirectedDripsNotifyPagingDeviceUsage(Objecta, v7);
      ObfDereferenceObject(Objecta);
    }
    PpDevNodeUnlockTree(1);
    return (unsigned int)v6;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
}
