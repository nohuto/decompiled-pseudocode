/*
 * XREFs of HalpQueryAcpiRealTimeClock @ 0x140933008
 * Callers:
 *     HalQueryRealTimeClock @ 0x14033B3C0 (HalQueryRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140933218 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140251610 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     HalpGetDynamicDevicePointer @ 0x140933BA4 (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpQueryAcpiRealTimeClock(PLARGE_INTEGER Timeout)
{
  int DynamicDevicePointer; // eax
  unsigned int Status; // ebx
  IRP *v4; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DynamicDevicePointer = HalpGetDynamicDevicePointer(Timeout, &DeviceObject);
  Status = DynamicDevicePointer;
  if ( DynamicDevicePointer == -1073741275 )
  {
    Status = -1073741822;
  }
  else if ( DynamicDevicePointer >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v4 = IoBuildDeviceIoControlRequest(0x294210u, DeviceObject, 0LL, 0, Timeout, 0x10u, 0, &Event, &IoStatusBlock);
    if ( v4 )
    {
      Status = IofCallDriver(DeviceObject, v4);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( DeviceObject )
    ObfDereferenceObject(DeviceObject);
  return Status;
}
