/*
 * XREFs of sub_140919908 @ 0x140919908
 * Callers:
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     sub_14041BF00 @ 0x14041BF00 (sub_14041BF00.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 */

__int64 __fastcall sub_140919908(
        PHANDLE FileHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FileAttributes,
        ULONG CreateOptions,
        __int64 a6)
{
  signed int v10; // eax
  unsigned int v11; // ebx
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS File; // eax
  HANDLE FileHandlea; // [rsp+60h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlocka; // [rsp+68h] [rbp-31h] BYREF
  _OWORD FileInformation[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v19; // [rsp+98h] [rbp-1h]

  *FileHandle = 0LL;
  FileHandlea = 0LL;
  v19 = 0LL;
  IoStatusBlocka = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  v10 = sub_14041BF00((__int64)ObjectAttributes, (__int64)FileInformation);
  v11 = v10;
  if ( v10 >= 0 )
  {
    LODWORD(v19) = v19 & 0xFFFFFFFE;
    v12 = ZwOpenFile(&FileHandlea, 0x100u, ObjectAttributes, &IoStatusBlocka, 7u, 0x4000u);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = ZwSetInformationFile(FileHandlea, &IoStatusBlocka, FileInformation, 0x28u, FileBasicInformation);
      v11 = v13;
      if ( v13 >= 0 )
      {
        ZwClose(FileHandlea);
        FileHandlea = 0LL;
        File = ZwCreateFile(
                 FileHandle,
                 3u,
                 ObjectAttributes,
                 IoStatusBlock,
                 0LL,
                 FileAttributes,
                 0,
                 1u,
                 CreateOptions,
                 0LL,
                 0);
        v11 = File;
        if ( File >= 0 )
          v11 = 0;
        else
          sub_14020A890(a6, 0, 36, File, 0x40u);
      }
      else
      {
        sub_14020A890(a6, 0, 36, v13, 0x30u);
      }
    }
    else
    {
      sub_14020A890(a6, 0, 36, v12, 0x20u);
    }
  }
  else
  {
    sub_14020A890(a6, 0, 36, v10, 0x10u);
  }
  if ( FileHandlea )
    ZwClose(FileHandlea);
  return v11;
}
