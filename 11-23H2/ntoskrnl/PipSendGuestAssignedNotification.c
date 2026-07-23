/*
 * XREFs of PipSendGuestAssignedNotification @ 0x14096F204
 * Callers:
 *     PiUpdateGuestAssignedState @ 0x1407927B8 (PiUpdateGuestAssignedState.c)
 * Callees:
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDevice @ 0x1402AF6A0 (IoGetAttachedDevice.c)
 *     IoQueueThreadIrp @ 0x1403C7960 (IoQueueThreadIrp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140854030 (PpIrpAllocateDeviceUsageNotification.c)
 */

NTSTATUS __fastcall PipSendGuestAssignedNotification(__int64 a1, char a2)
{
  IRP *DeviceUsageNotification; // rax
  IRP *v5; // rbx
  NTSTATUS result; // eax
  PDEVICE_OBJECT DeviceObject[9]; // [rsp+30h] [rbp-48h] BYREF

  memset(DeviceObject, 0, 0x40uLL);
  DeviceObject[0] = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(a1 + 32));
  LODWORD(DeviceObject[1]) = 6;
  BYTE4(DeviceObject[1]) = a2;
  DeviceUsageNotification = PpIrpAllocateDeviceUsageNotification((__int64)DeviceObject);
  v5 = DeviceUsageNotification;
  if ( !DeviceUsageNotification )
    return -1073741801;
  IoQueueThreadIrp(DeviceUsageNotification);
  result = IofCallDriver(DeviceObject[0], v5);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&DeviceObject[5], Executive, 0, 0, 0LL);
    return (NTSTATUS)DeviceObject[3];
  }
  return result;
}
