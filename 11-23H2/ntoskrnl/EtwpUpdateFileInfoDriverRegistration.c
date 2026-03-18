/*
 * XREFs of EtwpUpdateFileInfoDriverRegistration @ 0x14085B698
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x1407D5670 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140293450 (PdcCreateWatchdogAroundClientCall.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CC90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CCB0 (PsAttachSiloToCurrentThread.c)
 *     ZwDeviceIoControlFile @ 0x14041AE40 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwOpenFile @ 0x14041B3C0 (ZwOpenFile.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverRegistration(int a1)
{
  struct _LIST_ENTRY *v2; // rax
  struct _LIST_ENTRY *v3; // rdi
  NTSTATUS v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+17h] BYREF
  __int64 InputBuffer; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+77h] BYREF

  InputBuffer = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v2 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
  v3 = PsAttachSiloToCurrentThread(v2);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\FileInfo");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v4 >= 0 )
  {
    LODWORD(InputBuffer) = 1;
    HIDWORD(InputBuffer) = a1;
    v4 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220020u, &InputBuffer, 8u, 0LL, 0);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  PsDetachSiloFromCurrentThread(v3);
  return (unsigned int)v4;
}
