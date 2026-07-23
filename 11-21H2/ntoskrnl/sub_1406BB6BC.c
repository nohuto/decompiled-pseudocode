/*
 * XREFs of sub_1406BB6BC @ 0x1406BB6BC
 * Callers:
 *     sub_1406BB628 @ 0x1406BB628 (sub_1406BB628.c)
 *     sub_140A216DC @ 0x140A216DC (sub_140A216DC.c)
 *     sub_140A217B8 @ 0x140A217B8 (sub_140A217B8.c)
 *     sub_140A218B8 @ 0x140A218B8 (sub_140A218B8.c)
 *     sub_140A21954 @ 0x140A21954 (sub_140A21954.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 */

NTSTATUS __fastcall sub_1406BB6BC(PCWSTR SourceString, PHANDLE FileHandle)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *FileHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  return ZwOpenFile(FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
}
