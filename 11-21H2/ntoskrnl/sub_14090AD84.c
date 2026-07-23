/*
 * XREFs of sub_14090AD84 @ 0x14090AD84
 * Callers:
 *     sub_14090AB48 @ 0x14090AB48 (sub_14090AB48.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140705F30 @ 0x140705F30 (sub_140705F30.c)
 */

__int64 __fastcall sub_14090AD84(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v8; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK v12; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v12 = 0LL;
  memset(a6, 0, 0x80uLL);
  a6[8] = a5;
  *a6 = 65664;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v8 = sub_140705F30(0x1Bu, (__int64)AttachedDeviceReference, 0LL, 0, 0LL, &Event, &v12);
  if ( v8 )
  {
    CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
    v8->RequestorMode = 0;
    v8->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)qword_14003A460;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 65664;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    Status = IofCallDriver(AttachedDeviceReference, v8);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v12.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
