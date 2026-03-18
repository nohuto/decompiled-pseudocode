/*
 * XREFs of FsRtlIssueFileNotificationFsctl @ 0x140833F78
 * Callers:
 *     PopCreateHiberFile @ 0x1408004E0 (PopCreateHiberFile.c)
 *     IopInitializeCrashDump @ 0x140832C88 (IopInitializeCrashDump.c)
 *     MiCreatePagingFile @ 0x1408330DC (MiCreatePagingFile.c)
 *     PopResizeHiberFile @ 0x140988EE0 (PopResizeHiberFile.c)
 * Callees:
 *     IofCallDriver @ 0x14022EEF0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14022F510 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140251550 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FsRtlIssueFileNotificationFsctl(PFILE_OBJECT FileObject, __int64 a2, __int128 *a3)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  PIRP v6; // rax
  IRP *v7; // rdx
  __int128 v8; // xmm0
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+58h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+1Fh] BYREF
  _DWORD v13[2]; // [rsp+80h] [rbp+2Fh] BYREF
  __int128 v14; // [rsp+88h] [rbp+37h]

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v14 = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v6 = IoBuildDeviceIoControlRequest(0x90204u, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v7 = v6;
  if ( !v6 )
    return -1073741670;
  v8 = *a3;
  v13[0] = 1;
  v13[1] = 1;
  v14 = v8;
  v6->AssociatedIrp.MasterIrp = (struct _IRP *)v13;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].MajorFunction = 13;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
