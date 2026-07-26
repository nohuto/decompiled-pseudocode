/*
 * XREFs of NdisOpenFile @ 0x1C00BEBB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C001B160 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

void __stdcall NdisOpenFile(
        PNDIS_STATUS Status,
        PNDIS_HANDLE FileHandle,
        PUINT FileLength,
        PNDIS_STRING FileName,
        NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  __int64 Pool2; // rax
  NTSTATUS v10; // edi
  NTSTATUS v11; // eax
  __int64 v12; // r14
  void *v13; // rax
  void *v14; // rsi
  NTSTATUS v15; // r15d
  _QWORD *v16; // rax
  _BYTE *v17; // rdi
  ULONG FileAttributes[2]; // [rsp+28h] [rbp-A9h]
  HANDLE FileHandlea; // [rsp+60h] [rbp-71h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-69h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  __int128 FileInformation; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-9h]

  FileHandlea = 0LL;
  v24 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Destination = 0LL;
  FileInformation = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids);
  if ( (int)RtlUShortAdd(0x3Cu, FileName->MaximumLength, &Destination.MaximumLength) < 0 )
  {
    *Status = -2147483643;
    goto LABEL_32;
  }
  Pool2 = ExAllocatePool2(66LL, Destination.MaximumLength, 1852195918);
  Destination.Buffer = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    *Status = -1073741670;
    goto LABEL_32;
  }
  Destination.Length = 58;
  *(_OWORD *)Pool2 = *(_OWORD *)L"\\SystemRoot\\system32\\drivers\\";
  *(_OWORD *)(Pool2 + 16) = *(_OWORD *)L"oot\\system32\\drivers\\";
  *(_OWORD *)(Pool2 + 32) = *(_OWORD *)L"em32\\drivers\\";
  *(_QWORD *)(Pool2 + 48) = *(_QWORD *)L"vers\\";
  *(_DWORD *)(Pool2 + 56) = *(_DWORD *)L"\\";
  RtlAppendUnicodeStringToString(&Destination, FileName);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
      &Destination.Length);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwCreateFile(&FileHandlea, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v10 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = v10;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        *(_QWORD *)FileAttributes);
    }
    *Status = -1073676261;
    goto LABEL_32;
  }
  v11 = ZwQueryInformationFile(FileHandlea, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v11 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = v11;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        *(_QWORD *)FileAttributes);
    }
LABEL_16:
    ZwClose(FileHandlea);
    *Status = -1073676260;
    goto LABEL_32;
  }
  v12 = DWORD2(FileInformation);
  if ( !DWORD2(FileInformation) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = DWORD2(FileInformation);
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        *(_QWORD *)FileAttributes);
    }
    goto LABEL_16;
  }
  v13 = (void *)ExAllocatePool2(66LL, DWORD2(FileInformation), 1768309838);
  v14 = v13;
  if ( !v13 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xFu,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids);
    goto LABEL_16;
  }
  v15 = ZwReadFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, v13, v12, 0LL, 0LL);
  ZwClose(FileHandlea);
  if ( v15 >= 0 && IoStatusBlock.Information == v12 )
  {
    v16 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1684423758);
    v17 = v16;
    if ( v16 )
    {
      *v16 = v14;
      KeInitializeSpinLock(v16 + 1);
      *FileHandle = v17;
      *FileLength = v12;
      *Status = 0;
      v17[16] = 0;
    }
    else
    {
      *Status = -1073741670;
      ExFreePoolWithTag(v14, 0);
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = v15;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x10u,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        *(_QWORD *)FileAttributes);
    }
    *Status = -1073676260;
    ExFreePoolWithTag(v14, 0);
  }
LABEL_32:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    FileAttributes[0] = *Status;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
      *(_QWORD *)FileAttributes);
  }
}
