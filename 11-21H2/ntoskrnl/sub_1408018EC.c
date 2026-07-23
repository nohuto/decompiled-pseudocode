/*
 * XREFs of sub_1408018EC @ 0x1408018EC
 * Callers:
 *     sub_140801624 @ 0x140801624 (sub_140801624.c)
 *     sub_14098F9D0 @ 0x14098F9D0 (sub_14098F9D0.c)
 *     sub_14098FA74 @ 0x14098FA74 (sub_14098FA74.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14041C080 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall sub_1408018EC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdi
  NTSTATUS v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  HANDLE FileHandle; // [rsp+30h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-51h] BYREF
  __int128 FsInformation; // [rsp+78h] [rbp-21h] BYREF
  __int128 v16; // [rsp+88h] [rbp-11h]
  __int128 FileInformation; // [rsp+98h] [rbp-1h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+Fh]

  *(&ObjectAttributes.Length + 1) = 0;
  v18 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  FsInformation = 0LL;
  v6 = 0LL;
  v16 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( FileObject )
  {
    v7 = ZwQueryInformationFile(
           *(HANDLE *)&MaxDataSize,
           &IoStatusBlock,
           &FileInformation,
           0x18u,
           FileStandardInformation);
    if ( v7 < 0 )
    {
LABEL_15:
      v10 = 0LL;
      goto LABEL_10;
    }
    v8 = FileInformation;
  }
  else
  {
    v8 = 0LL;
  }
  ObjectAttributes.ObjectName = &stru_140C22250;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v7 < 0 )
    goto LABEL_15;
  v7 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 0x20u, FileFsFullSizeInformation);
  ZwClose(FileHandle);
  if ( v7 < 0 )
    goto LABEL_15;
  v7 = -1073741823;
  v6 = v16 * (unsigned int)(HIDWORD(v16) * DWORD2(v16));
  v9 = v6 - 0x10000000;
  if ( v6 - 0x10000000 <= 0 )
    v9 = 0LL;
  v10 = v8 + v9;
  if ( v6 - 0x10000000 >= a1 - v8 )
    v7 = 0;
LABEL_10:
  if ( a2 )
    *a2 = v10;
  if ( a3 )
    *a3 = v6;
  return (unsigned int)v7;
}
