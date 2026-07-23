/*
 * XREFs of sub_140946830 @ 0x140946830
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     sub_14095A3E4 @ 0x14095A3E4 (sub_14095A3E4.c)
 */

NTSTATUS __fastcall sub_140946830(UNICODE_STRING *a1, __int64 a2, char a3)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+10h] BYREF
  char FileInformation; // [rsp+90h] [rbp+20h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  sub_14095A3E4();
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a1;
  result = ZwOpenFile(
             &FileHandle,
             0x10080u,
             &ObjectAttributes,
             &IoStatusBlock,
             7u,
             (a3 & 0x10) != 0 ? 2113537 : 2113600);
  if ( result >= 0 )
  {
    FileInformation = 1;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
    ZwClose(FileHandle);
    return 0;
  }
  return result;
}
