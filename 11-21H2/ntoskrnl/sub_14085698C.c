/*
 * XREFs of sub_14085698C @ 0x14085698C
 * Callers:
 *     sub_1408567A8 @ 0x1408567A8 (sub_1408567A8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 */

NTSTATUS __fastcall sub_14085698C(PHANDLE FileHandle)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+27h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Mup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateFile(FileHandle, 0x40000000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 1u, 0, 0LL, 0);
  if ( result < 0 || (result = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
    *FileHandle = (HANDLE)-1LL;
  return result;
}
