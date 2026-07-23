/*
 * XREFs of sub_1409D5B38 @ 0x1409D5B38
 * Callers:
 *     sub_1409D69A8 @ 0x1409D69A8 (sub_1409D69A8.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     ZwQueryVolumeInformationFile @ 0x14041C080 (ZwQueryVolumeInformationFile.c)
 *     sub_1409D6428 @ 0x1409D6428 (sub_1409D6428.c)
 */

__int64 __fastcall sub_1409D5B38(__int64 a1, _DWORD *a2)
{
  BOOLEAN v4; // bp
  NTSTATUS Status; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  IRP *Irp; // rax
  IRP *v8; // rsi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF
  __int64 FsInformation; // [rsp+60h] [rbp+8h] BYREF

  FsInformation = 0LL;
  IoStatusBlock = 0LL;
  v4 = IoSetThreadHardErrorMode(0);
  Status = ZwQueryVolumeInformationFile(*(HANDLE *)a1, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    goto LABEL_8;
  if ( (FsInformation & 0x100000000LL) != 0 )
  {
    Status = 0;
    *a2 = 0;
    goto LABEL_9;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)(a1 + 8));
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  v8 = Irp;
  if ( !Irp )
  {
    Status = -1073741670;
LABEL_8:
    *a2 = 0;
    goto LABEL_9;
  }
  Status = sub_1409D6428(Irp, *(PFILE_OBJECT *)(a1 + 8));
  if ( Status >= 0 )
  {
    *(_QWORD *)(a1 + 40) = v8;
    *a2 = 1;
  }
  else
  {
    Status = 0;
    *a2 = 0;
    IoFreeIrp(v8);
  }
LABEL_9:
  IoSetThreadHardErrorMode(v4);
  return (unsigned int)Status;
}
