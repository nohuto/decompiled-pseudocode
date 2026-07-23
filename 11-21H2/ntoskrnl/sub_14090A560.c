/*
 * XREFs of sub_14090A560 @ 0x14090A560
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 *     sub_14080637C @ 0x14080637C (sub_14080637C.c)
 */

__int64 __fastcall sub_14090A560(PLARGE_INTEGER Timeout)
{
  struct _DEVICE_OBJECT *v2; // rdi
  unsigned int Status; // ebx
  IRP *v4; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v2 = (struct _DEVICE_OBJECT *)sub_14080637C();
  if ( v2 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v4 = IoBuildDeviceIoControlRequest(0x294218u, v2, 0LL, 0, Timeout, 4u, 0, &Event, &IoStatusBlock);
    if ( v4 )
    {
      Status = IofCallDriver(v2, v4);
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
    ObfDereferenceObject(v2);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return Status;
}
