/*
 * XREFs of sub_1409B4F34 @ 0x1409B4F34
 * Callers:
 *     sub_1409B54D8 @ 0x1409B54D8 (sub_1409B54D8.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 */

NTSTATUS __fastcall sub_1409B4F34(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, PVOID OutputBuffer)
{
  PIRP v6; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(0x70000u, a2, 0LL, 0, OutputBuffer, 0x18u, 0, &Event, &IoStatusBlock);
  if ( !v6 )
    return -1073741670;
  v6->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
  result = IofCallDriver(a2, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
