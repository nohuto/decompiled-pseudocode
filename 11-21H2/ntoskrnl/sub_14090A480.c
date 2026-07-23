/*
 * XREFs of sub_14090A480 @ 0x14090A480
 * Callers:
 *     sub_140806330 @ 0x140806330 (sub_140806330.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 */

NTSTATUS __fastcall sub_14090A480(PDEVICE_OBJECT DeviceObject, char a2, char a3, int a4)
{
  IRP *v6; // rax
  NTSTATUS result; // eax
  _DWORD InputBuffer[2]; // [rsp+50h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-30h] BYREF
  struct _KEVENT Object; // [rsp+68h] [rbp-20h] BYREF

  memset(&Object, 0, sizeof(Object));
  InputBuffer[0] = a2 == 0;
  InputBuffer[1] = a4;
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(
         a3 != 0 ? 2720256 : 2720260,
         DeviceObject,
         InputBuffer,
         8u,
         0LL,
         0,
         0,
         &Object,
         &IoStatusBlock);
  if ( !v6 )
    return -1073741670;
  result = IofCallDriver(DeviceObject, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
