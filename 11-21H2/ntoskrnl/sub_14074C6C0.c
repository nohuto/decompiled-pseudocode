/*
 * XREFs of sub_14074C6C0 @ 0x14074C6C0
 * Callers:
 *     sub_140562F78 @ 0x140562F78 (sub_140562F78.c)
 *     sub_1407498EC @ 0x1407498EC (sub_1407498EC.c)
 *     sub_14074ABF0 @ 0x14074ABF0 (sub_14074ABF0.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_140846398 @ 0x140846398 (sub_140846398.c)
 *     IoQueryInterface @ 0x140846710 (IoQueryInterface.c)
 *     sub_140846760 @ 0x140846760 (sub_140846760.c)
 *     sub_14095239C @ 0x14095239C (sub_14095239C.c)
 *     sub_140958764 @ 0x140958764 (sub_140958764.c)
 *     sub_14095B48C @ 0x14095B48C (sub_14095B48C.c)
 *     sub_14095B55C @ 0x14095B55C (sub_14095B55C.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D30A0 @ 0x1402D30A0 (sub_1402D30A0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140705F30 @ 0x140705F30 (sub_140705F30.c)
 */

__int64 __fastcall sub_14074C6C0(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  struct _DEVICE_OBJECT *v10; // rdi
  IRP *v11; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK v15; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  if ( a4 < 0x20u )
    return 3221225485LL;
  memset(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = sub_1402D30A0(DeviceObject, 0x49706E50u);
  v11 = sub_140705F30(0x1Bu, (__int64)v10, 0LL, 0, 0LL, &Event, &v15);
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v11->RequestorMode = 0;
    v11->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = a5;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a4;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    Status = IofCallDriver(v10, v11);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v15.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObjectWithTag(v10, 0x49706E50u);
  return Status;
}
