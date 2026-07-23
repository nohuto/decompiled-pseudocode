/*
 * XREFs of PopCreateHiberFile @ 0x1408007B0
 * Callers:
 *     PopEnableHiberFile @ 0x1408019AC (PopEnableHiberFile.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B310 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14041B5D0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x14041B810 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x14041BA50 (ZwFlushBuffersFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     IoCreateFile @ 0x1407D0950 (IoCreateFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140800BDC (PopCreateHiberFileSecurityDescriptor.c)
 *     PopSetHiberFileMcb @ 0x140800D68 (PopSetHiberFileMcb.c)
 *     PopSanityCheckHiberFile @ 0x140800DDC (PopSanityCheckHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1408243F8 (PopResetCurrentPolicies.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140834278 (FsRtlIssueFileNotificationFsctl.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  PFILE_OBJECT v1; // rdi
  void *HiberFileSecurityDescriptor; // r15
  unsigned int v3; // esi
  NTSTATUS v4; // eax
  int v5; // ebx
  bool v6; // r14
  NTSTATUS v7; // eax
  NTSTATUS Status; // eax
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  int v12; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Destination; // [rsp+98h] [rbp-68h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER v16; // [rsp+B0h] [rbp-50h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  __int128 InputBuffer; // [rsp+100h] [rbp+0h] BYREF
  __int64 v21; // [rsp+110h] [rbp+10h]
  __int128 FileInformation; // [rsp+118h] [rbp+18h] BYREF
  __int64 v23; // [rsp+128h] [rbp+28h]
  _OWORD v24[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v25; // [rsp+150h] [rbp+50h]

  AllocationSize = a1;
  *(&Destination.MaximumLength + 2) = 0;
  v16.QuadPart = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  DestinationString = 0LL;
  v1 = 0LL;
  memset(v24, 0, sizeof(v24));
  v12 = 0;
  HiberFileSecurityDescriptor = 0LL;
  v21 = 0LL;
  FileInformation = 0LL;
  FileHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  FileObject = 0LL;
  IoStatusBlock = 0LL;
  P = 0LL;
  InputBuffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(PoHiberFileRoot.Length + DestinationString.Length);
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(
                                    256LL,
                                    (unsigned __int16)(PoHiberFileRoot.Length + DestinationString.Length),
                                    1919052136LL);
  if ( !Destination.Buffer )
  {
    v5 = -1073741670;
    goto LABEL_22;
  }
  RtlAppendUnicodeStringToString(&Destination, &PoHiberFileRoot);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  HiberFileSecurityDescriptor = (void *)PopCreateHiberFileSecurityDescriptor();
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Attributes = 576;
  v3 = 0;
  ObjectAttributes.SecurityDescriptor = HiberFileSecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  while ( 1 )
  {
    v4 = IoCreateFile(
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
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( v4 != -1073741638 )
        goto LABEL_22;
      v5 = IoCreateFile(
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
      if ( v5 < 0 )
        goto LABEL_22;
      goto LABEL_35;
    }
    v6 = IoStatusBlock.Information == 2;
    v5 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v5 < 0 )
      goto LABEL_22;
    if ( (unsigned int)v23 <= 1 )
      break;
LABEL_35:
    ZwClose(FileHandle);
    ++v3;
    FileHandle = 0LL;
    if ( v3 >= 3 )
      goto LABEL_8;
  }
  if ( !v6 )
  {
    v21 = -1LL;
    DWORD1(InputBuffer) = 1;
    *((_QWORD *)&InputBuffer + 1) = 0LL;
    ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x98208u, &InputBuffer, 0x18u, 0LL, 0);
  }
LABEL_8:
  LODWORD(v25) = 8198;
  v5 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v24, 0x28u, FileBasicInformation);
  if ( v5 >= 0 )
  {
    v5 = ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)FileHandle,
           3,
           (__int64)IoFileObjectType,
           0,
           0x62486F50u,
           &FileObject,
           0LL,
           0LL);
    if ( v5 < 0 )
    {
      v1 = FileObject;
    }
    else
    {
      v16 = AllocationSize;
      v7 = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v16, 8u, FileEndOfFileInformation);
      v1 = FileObject;
      v5 = v7;
      if ( v7 == 259 )
      {
        KeWaitForSingleObject(&FileObject->Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
        v5 = IoStatusBlock.Status;
      }
      else
      {
        Status = IoStatusBlock.Status;
      }
      if ( v5 >= 0 )
      {
        if ( Status < 0 )
        {
          v5 = Status;
        }
        else
        {
          v5 = ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
          if ( v5 == 259 )
          {
            KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
            v5 = IoStatusBlock.Status;
          }
          if ( v5 >= 0 )
          {
            if ( ZwFlushBuffersFile(FileHandle, &IoStatusBlock) == 259 )
              KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
            v5 = PopSanityCheckHiberFile(
                   (_DWORD)FileHandle,
                   (_DWORD)v1,
                   (unsigned int)&AllocationSize,
                   (unsigned int)&P,
                   (__int64)&v12);
            if ( v5 >= 0 )
            {
              v5 = PopSetHiberFileMcb(P);
              if ( v5 >= 0 )
              {
                PopHiberInfo = FileHandle;
                qword_140C3CF70 = AllocationSize.QuadPart;
                ::FileObject = v1;
                FsRtlIssueFileNotificationFsctl(v1);
                FileHandle = 0LL;
                v1 = 0LL;
                PopResetCurrentPolicies();
                v5 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_22:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v1 )
    ObfDereferenceObjectWithTag(v1, 0x62486F50u);
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v5;
}
