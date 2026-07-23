/*
 * XREFs of sub_140803EC0 @ 0x140803EC0
 * Callers:
 *     sub_1408031CC @ 0x1408031CC (sub_1408031CC.c)
 *     sub_14080397C @ 0x14080397C (sub_14080397C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     sub_140803F88 @ 0x140803F88 (sub_140803F88.c)
 */

__int64 __fastcall sub_140803EC0(PCWSTR SourceString)
{
  NTSTATUS v1; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  v1 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v1 >= 0 )
    v1 = sub_140803F88(FileHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v1;
}
