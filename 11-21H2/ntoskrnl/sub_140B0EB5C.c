/*
 * XREFs of sub_140B0EB5C @ 0x140B0EB5C
 * Callers:
 *     sub_140B0E670 @ 0x140B0E670 (sub_140B0E670.c)
 * Callees:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 */

NTSTATUS sub_140B0EB5C()
{
  NTSTATUS result; // eax
  IRP *v1; // rax
  NTSTATUS Status; // ebx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  struct _IO_STATUS_BLOCK v4; // [rsp+60h] [rbp+27h] BYREF
  struct _KEVENT Object; // [rsp+70h] [rbp+37h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+6Fh] BYREF

  FileObject = 0LL;
  DeviceObject = 0LL;
  Object.Header.Reserved1 = 0;
  DestinationString = 0LL;
  v4 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.SignalState = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    v1 = sub_1403428E0(7192644, (__int64)DeviceObject, 0LL, 0, 0LL, 0, 0, &Object, &v4);
    if ( v1 )
    {
      Status = IofCallDriver(DeviceObject, v1);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = v4.Status;
      }
    }
    else
    {
      Status = -1073741670;
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    return Status;
  }
  return result;
}
