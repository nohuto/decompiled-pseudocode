/*
 * XREFs of sub_14095A3E4 @ 0x14095A3E4
 * Callers:
 *     sub_140946830 @ 0x140946830 (sub_140946830.c)
 *     sub_140B2AFB8 @ 0x140B2AFB8 (sub_140B2AFB8.c)
 *     sub_140B4FF80 @ 0x140B4FF80 (sub_140B4FF80.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 */

NTSTATUS __fastcall sub_14095A3E4(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  unsigned int v3; // eax
  HANDLE FileHandle; // [rsp+30h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-11h] BYREF
  __int128 FileInformation; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v8; // [rsp+88h] [rbp+2Fh]
  __int64 v9; // [rsp+98h] [rbp+3Fh]

  FileHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock = 0LL;
  v9 = 0LL;
  FileInformation = 0LL;
  ObjectAttributes.Attributes = 576;
  v8 = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100180u, &ObjectAttributes, &IoStatusBlock, 3u, 0x204022u);
  if ( result >= 0 )
  {
    v2 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    if ( v2 >= 0 && (v9 & 7) != 0 )
    {
      v3 = v9 & 0xFFFFFFF8;
      if ( (v9 & 0xFFFFFFF8) == 0 )
        v3 = 128;
      FileInformation = 0LL;
      v9 = v3;
      v8 = 0LL;
      v2 = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    }
    ZwClose(FileHandle);
    return v2;
  }
  return result;
}
