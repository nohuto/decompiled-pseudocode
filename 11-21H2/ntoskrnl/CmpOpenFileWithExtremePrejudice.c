/*
 * XREFs of CmpOpenFileWithExtremePrejudice @ 0x140919908
 * Callers:
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 * Callees:
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x14041BF00 (ZwQueryAttributesFile.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 */

__int64 __fastcall CmpOpenFileWithExtremePrejudice(
        PHANDLE FileHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FileAttributes,
        ULONG CreateOptions,
        __int64 a6)
{
  signed int AttributesFile; // eax
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
  AttributesFile = ZwQueryAttributesFile((__int64)ObjectAttributes, (__int64)FileInformation);
  v11 = AttributesFile;
  if ( AttributesFile >= 0 )
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
          SetFailureLocation(a6, 0, 36, File, 0x40u);
      }
      else
      {
        SetFailureLocation(a6, 0, 36, v13, 0x30u);
      }
    }
    else
    {
      SetFailureLocation(a6, 0, 36, v12, 0x20u);
    }
  }
  else
  {
    SetFailureLocation(a6, 0, 36, AttributesFile, 0x10u);
  }
  if ( FileHandlea )
    ZwClose(FileHandlea);
  return v11;
}
