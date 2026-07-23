/*
 * XREFs of SdbpGetFileTimestamp @ 0x140A4E9A4
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x140A4E170 (SdbGetMergeRedirectPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwCreateFile @ 0x14041B140 (ZwCreateFile.c)
 *     ZwQueryInformationByName @ 0x14041D0C0 (ZwQueryInformationByName.c)
 *     memset @ 0x140435400 (memset.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 */

__int64 __fastcall SdbpGetFileTimestamp(_QWORD *a1, const WCHAR *a2)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v11; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v12; // [rsp+C8h] [rbp-38h]
  __int64 v13; // [rsp+D8h] [rbp-28h]
  _QWORD FileInformation[10]; // [rsp+E0h] [rbp-20h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v13 = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  memset(FileInformation, 0, 0x48uLL);
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  if ( ZwQueryInformationByName(&ObjectAttributes, &IoStatusBlock, FileInformation, 0x48u, FileStatInformation) >= 0 )
  {
    v5 = FileInformation[4];
  }
  else
  {
    v4 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x60u, 0LL, 0);
    if ( v4 < 0 || (v4 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &v11, 0x28u, FileBasicInformation), v4 < 0) )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_8;
    }
    v5 = *((_QWORD *)&v12 + 1);
    *(_OWORD *)&FileInformation[3] = v12;
  }
  *a1 = v5;
  v4 = 0;
LABEL_8:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
