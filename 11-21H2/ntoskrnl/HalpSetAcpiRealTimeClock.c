/*
 * XREFs of HalpSetAcpiRealTimeClock @ 0x140908208
 * Callers:
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 *     HalpGetDynamicDevicePointer @ 0x14080637C (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpSetAcpiRealTimeClock(PVOID InputBuffer)
{
  struct _DEVICE_OBJECT *DynamicDevicePointer; // rdi
  unsigned int Status; // ebx
  IRP *v4; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DynamicDevicePointer = (struct _DEVICE_OBJECT *)HalpGetDynamicDevicePointer();
  if ( DynamicDevicePointer )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v4 = IoBuildDeviceIoControlRequest(
           0x298214u,
           DynamicDevicePointer,
           InputBuffer,
           0x10u,
           0LL,
           0,
           0,
           &Event,
           &IoStatusBlock);
    if ( v4 )
    {
      Status = IofCallDriver(DynamicDevicePointer, v4);
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
    ObfDereferenceObject(DynamicDevicePointer);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return Status;
}
