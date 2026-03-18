/*
 * XREFs of UsbhSyncSendDeviceIoctl @ 0x1C002DDE4
 * Callers:
 *     UsbhAcquireHubName @ 0x1C0048C10 (UsbhAcquireHubName.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0048DC4 (UsbhBuildWmiConnectionNotification.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C00018CC (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x1C0002650 (UsbhReferenceListAdd.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

__int64 __fastcall UsbhSyncSendDeviceIoctl(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  __int64 OutputBufferLength; // rbx
  PDEVICE_OBJECT *v7; // rbp
  PIRP v8; // rax
  IRP *v9; // rdi
  unsigned int v10; // r10d
  int v12; // eax
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  OutputBufferLength = a4;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v7 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 8, 1668574257, 2228256LL, 1LL);
  Log(a1, 8, 1668574258, (__int64)a3, OutputBufferLength);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(
         0x220020u,
         v7[151],
         a3,
         OutputBufferLength,
         a3,
         OutputBufferLength,
         1u,
         &Event,
         &IoStatusBlock);
  v9 = v8;
  if ( v8 )
  {
    Log(a1, 8, 1668574281, (__int64)v8, 0LL);
    v12 = UsbhReferenceListAdd(a1, (__int64)v9, 1330215283);
    Status = v12;
    if ( v12 < 0 )
    {
      Log(a1, 8, 1668574260, (__int64)v9, v12);
      IofCompleteRequest(v9, 0);
    }
    else
    {
      Status = IofCallDriver(v7[151], v9);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      Log(a1, 8, 1668574259, (__int64)v9, Status);
      UsbhReferenceListRemove(a1, (__int64)v9);
    }
    Log(a1, 8, 1399026796, 2228256LL, Status);
    return (unsigned int)Status;
  }
  else
  {
    Log(a1, 8, 1668574241, 2228256LL, -1073741670LL);
    return v10;
  }
}
