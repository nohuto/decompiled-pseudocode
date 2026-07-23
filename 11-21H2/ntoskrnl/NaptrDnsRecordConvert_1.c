/*
 * XREFs of NaptrDnsRecordConvert_1 @ 0x140801108
 * Callers:
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x14041BE80 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x14041C0C0 (ZwFlushBuffersFile.c)
 *     IoCreateFile @ 0x1406CAD00 (IoCreateFile.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140801784 @ 0x140801784 (sub_140801784.c)
 *     sub_1408017F8 @ 0x1408017F8 (sub_1408017F8.c)
 *     sub_140801A80 @ 0x140801A80 (sub_140801A80.c)
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_14081C234 @ 0x14081C234 (sub_14081C234.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall NaptrDnsRecordConvert_1(LARGE_INTEGER a1)
{
  PFILE_OBJECT v1; // rdi
  void *v2; // r15
  int v3; // ebx
  unsigned int v4; // esi
  NTSTATUS v5; // eax
  bool v6; // r14
  NTSTATUS v7; // eax
  NTSTATUS Status; // eax
  __int64 v9; // rcx
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  int v13; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Destination; // [rsp+98h] [rbp-68h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER v17; // [rsp+B0h] [rbp-50h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  __int128 InputBuffer; // [rsp+100h] [rbp+0h] BYREF
  __int64 v22; // [rsp+110h] [rbp+10h]
  __int128 FileInformation; // [rsp+118h] [rbp+18h] BYREF
  __int64 v24; // [rsp+128h] [rbp+28h]
  _OWORD v25[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v26; // [rsp+150h] [rbp+50h]

  AllocationSize = a1;
  *(&Destination.MaximumLength + 2) = 0;
  v17.QuadPart = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  DestinationString = 0LL;
  v1 = 0LL;
  memset(v25, 0, sizeof(v25));
  v13 = 0;
  v2 = 0LL;
  v22 = 0LL;
  FileInformation = 0LL;
  FileHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  FileObject = 0LL;
  IoStatusBlock = 0LL;
  P = 0LL;
  InputBuffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(DestinationString.Length + stru_140C22250.Length);
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(
                                    256LL,
                                    (unsigned __int16)(DestinationString.Length + stru_140C22250.Length),
                                    1919052136LL);
  if ( !Destination.Buffer )
  {
    v3 = -1073741670;
    goto LABEL_30;
  }
  RtlAppendUnicodeStringToString(&Destination, &stru_140C22250);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  v2 = (void *)sub_140801A80();
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  v4 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v2;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  while ( 1 )
  {
    v5 = IoCreateFile(
           &FileHandle,
           0x100003u,
           &ObjectAttributes,
           &IoStatusBlock,
           &AllocationSize,
           0x2006u,
           0,
           3u,
           0x9048u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x102u);
    v3 = v5;
    if ( v5 < 0 )
    {
      if ( v5 != -1073741638 )
        goto LABEL_30;
      v3 = IoCreateFile(
             &FileHandle,
             0x10000u,
             &ObjectAttributes,
             &IoStatusBlock,
             &AllocationSize,
             0,
             0,
             1u,
             0x201001u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0x100u);
      if ( v3 < 0 )
        goto LABEL_30;
      goto LABEL_15;
    }
    v6 = IoStatusBlock.Information == 2;
    v3 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v3 < 0 )
      goto LABEL_30;
    if ( (unsigned int)v24 <= 1 )
      break;
LABEL_15:
    ZwClose(FileHandle);
    ++v4;
    FileHandle = 0LL;
    if ( v4 >= 3 )
      goto LABEL_9;
  }
  if ( !v6 )
  {
    v22 = -1LL;
    DWORD1(InputBuffer) = 1;
    *((_QWORD *)&InputBuffer + 1) = 0LL;
    ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x98208u, &InputBuffer, 0x18u, 0LL, 0);
  }
LABEL_9:
  LODWORD(v26) = 8198;
  v3 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v25, 0x28u, FileBasicInformation);
  if ( v3 >= 0 )
  {
    v3 = sub_140732D40((ULONG_PTR)FileHandle, 3, (__int64)IoFileObjectType, 0, 0x62486F50u, &FileObject, 0LL, 0LL);
    if ( v3 < 0 )
    {
      v1 = FileObject;
    }
    else
    {
      v17 = AllocationSize;
      v7 = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v17, 8u, FileEndOfFileInformation);
      v1 = FileObject;
      v3 = v7;
      if ( v7 == 259 )
      {
        KeWaitForSingleObject(&FileObject->Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
        v3 = IoStatusBlock.Status;
      }
      else
      {
        Status = IoStatusBlock.Status;
      }
      if ( v3 >= 0 )
      {
        if ( Status < 0 )
        {
          v3 = Status;
        }
        else
        {
          v3 = ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
          if ( v3 == 259 )
          {
            KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
            v3 = IoStatusBlock.Status;
          }
          if ( v3 >= 0 )
          {
            if ( ZwFlushBuffersFile(FileHandle, &IoStatusBlock) == 259 )
              KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
            v3 = sub_1408017F8(
                   (_DWORD)FileHandle,
                   (_DWORD)v1,
                   (unsigned int)&AllocationSize,
                   (unsigned int)&P,
                   (__int64)&v13);
            if ( v3 >= 0 )
            {
              v3 = sub_140801784(P);
              if ( v3 >= 0 )
              {
                *(_QWORD *)&MaxDataSize = FileHandle;
                qword_140C22BD0 = AllocationSize.QuadPart;
                ::FileObject = v1;
                sub_14081C234(v1);
                FileHandle = 0LL;
                v1 = 0LL;
                sub_1408193F4(v9);
                v3 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_30:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v1 )
    ObfDereferenceObjectWithTag(v1, 0x62486F50u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v3;
}
