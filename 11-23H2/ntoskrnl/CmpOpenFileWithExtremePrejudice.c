/*
 * XREFs of CmpOpenFileWithExtremePrejudice @ 0x140A1CFB4
 * Callers:
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 * Callees:
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14041B5D0 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x14041B750 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x14041B890 (ZwQueryAttributesFile.c)
 *     ZwCreateFile @ 0x14041BB90 (ZwCreateFile.c)
 */

__int64 __fastcall CmpOpenFileWithExtremePrejudice(
        PHANDLE FileHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FileAttributes,
        ULONG CreateOptions,
        __int64 a6)
{
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS File; // eax
  HANDLE FileHandlea; // [rsp+60h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlocka; // [rsp+68h] [rbp-31h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+78h] [rbp-21h] BYREF

  *FileHandle = 0LL;
  FileHandlea = 0LL;
  IoStatusBlocka = 0LL;
  memset(&FileInformation, 0, sizeof(FileInformation));
  v10 = ZwQueryAttributesFile(ObjectAttributes, &FileInformation);
  v11 = v10;
  if ( v10 >= 0 )
  {
    FileInformation.FileAttributes &= ~1u;
    v12 = ZwOpenFile(&FileHandlea, 0x100u, ObjectAttributes, &IoStatusBlocka, 7u, 0x4000u);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = ZwSetInformationFile(FileHandlea, &IoStatusBlocka, &FileInformation, 0x28u, FileBasicInformation);
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
          SetFailureLocation(a6, 0, 36, File, 64);
      }
      else
      {
        SetFailureLocation(a6, 0, 36, v13, 48);
      }
    }
    else
    {
      SetFailureLocation(a6, 0, 36, v12, 32);
    }
  }
  else
  {
    SetFailureLocation(a6, 0, 36, v10, 16);
  }
  if ( FileHandlea )
    ZwClose(FileHandlea);
  return v11;
}
