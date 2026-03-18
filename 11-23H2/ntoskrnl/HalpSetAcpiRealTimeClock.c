/*
 * XREFs of HalpSetAcpiRealTimeClock @ 0x140932F18
 * Callers:
 *     HalSetRealTimeClock @ 0x1404FEC10 (HalSetRealTimeClock.c)
 * Callees:
 *     IofCallDriver @ 0x14022EEF0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140251550 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     HalpGetDynamicDevicePointer @ 0x1409339A4 (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpSetAcpiRealTimeClock(PVOID InputBuffer)
{
  NTSTATUS DynamicDevicePointer; // ebx
  IRP *v3; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DynamicDevicePointer = HalpGetDynamicDevicePointer(InputBuffer, &DeviceObject);
  if ( DynamicDevicePointer >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(0x298214u, DeviceObject, InputBuffer, 0x10u, 0LL, 0, 0, &Event, &IoStatusBlock);
    if ( v3 )
    {
      DynamicDevicePointer = IofCallDriver(DeviceObject, v3);
      if ( DynamicDevicePointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DynamicDevicePointer = IoStatusBlock.Status;
      }
    }
    else
    {
      DynamicDevicePointer = -1073741670;
    }
  }
  if ( DeviceObject )
    ObfDereferenceObject(DeviceObject);
  return (unsigned int)DynamicDevicePointer;
}
