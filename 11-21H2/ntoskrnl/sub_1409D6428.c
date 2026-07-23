/*
 * XREFs of sub_1409D6428 @ 0x1409D6428
 * Callers:
 *     sub_1409D57BC @ 0x1409D57BC (sub_1409D57BC.c)
 *     sub_1409D5B38 @ 0x1409D5B38 (sub_1409D5B38.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall sub_1409D6428(PIRP Irp, PFILE_OBJECT FileObject, int a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  struct _IO_STACK_LOCATION *v8; // rcx
  NTSTATUS result; // eax
  struct _KEVENT Object; // [rsp+30h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 5659;
  CurrentStackLocation[-1].Parameters.Create.Options = 1;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].Parameters.SetLock.Lock = a3 == 0;
  v8 = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = -1073741637;
  v8[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_140248550;
  v8[-1].Context = &Object;
  v8[-1].Control = -32;
  result = IofCallDriver(RelatedDeviceObject, Irp);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return Irp->IoStatus.Status;
  }
  return result;
}
