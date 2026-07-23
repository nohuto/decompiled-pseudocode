/*
 * XREFs of sub_14093449C @ 0x14093449C
 * Callers:
 *     sub_1406D3128 @ 0x1406D3128 (sub_1406D3128.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __fastcall sub_14093449C(struct _FILE_OBJECT *Object, __int64 a2)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r14
  PIRP v5; // rax
  IRP *v6; // rbx
  NTSTATUS result; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v9; // xmm0
  struct _KEVENT Event; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v12[4]; // [rsp+80h] [rbp-9h] BYREF

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset(v12, 0, sizeof(v12));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v5 = IoBuildDeviceIoControlRequest(0, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v6 = v5;
  if ( !v5 )
    return -1073741670;
  v5->Flags |= 4u;
  v5->Tail.Overlay.OriginalFileObject = Object;
  v5->UserBuffer = v12;
  v5->AssociatedIrp.MasterIrp = (struct _IRP *)v12;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = Object;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].Parameters.Read.Length = 64;
  CurrentStackLocation[-1].Parameters.Create.Options = 8;
  ObfReferenceObject(Object);
  result = IofCallDriver(RelatedDeviceObject, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 )
  {
    v9 = v12[0];
    *(_DWORD *)a2 = 0;
    *(_OWORD *)(a2 + 4) = v9;
  }
  return result;
}
