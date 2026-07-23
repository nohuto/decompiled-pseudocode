/*
 * XREFs of sub_140B550AC @ 0x140B550AC
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _strupr @ 0x1403E03F0 (_strupr.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     sub_1403E0C98 @ 0x1403E0C98 (sub_1403E0C98.c)
 *     atol @ 0x1403E0CE0 (atol.c)
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoCreateSymbolicLink @ 0x1406C4C40 (IoCreateSymbolicLink.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlStringFromGUID @ 0x140745490 (RtlStringFromGUID.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 */

__int64 __fastcall sub_140B550AC(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 i; // rcx
  _QWORD **v4; // rax
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rdx
  NTSTATUS Status; // ebx
  ULONG_PTR v8; // rdi
  char *v9; // rbx
  char *v10; // rax
  char *v11; // rax
  unsigned int v12; // eax
  char *v13; // rax
  char *v14; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING GuidString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DeviceName; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD InputBuffer[8]; // [rsp+F0h] [rbp-10h] BYREF
  CHAR SourceString[32]; // [rsp+130h] [rbp+30h] BYREF
  WCHAR v26[56]; // [rsp+150h] [rbp+50h] BYREF

  GuidString = 0LL;
  DestinationString = 0LL;
  SymbolicLinkName = 0LL;
  DeviceName = 0LL;
  v17 = 0LL;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v2 = *(_QWORD *)(a1 + 360);
  FileHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  if ( (v2 & 1) != 0 )
  {
    if ( v2 != 1 )
    {
      i = v2 ^ ((a1 + 352) | 1);
      goto LABEL_13;
    }
LABEL_14:
    Status = -1073741811;
    v8 = 1LL;
    goto LABEL_15;
  }
  i = v2;
  while ( 1 )
  {
LABEL_13:
    if ( !i )
      goto LABEL_14;
    if ( *(_DWORD *)(i + 24) == 25 )
      break;
    v4 = *(_QWORD ***)(i + 8);
    v5 = i;
    if ( v4 )
    {
      v6 = *v4;
      for ( i = *(_QWORD *)(i + 8); v6; v6 = (_QWORD *)*v6 )
        i = (unsigned __int64)v6;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v5 )
          break;
        v5 = i;
      }
    }
  }
  v9 = *(char **)(a1 + 216);
  v8 = 3LL;
  InputBuffer[3] = 0LL;
  HIDWORD(InputBuffer[2]) = 3;
  *(_DWORD *)((char *)&InputBuffer[7] + 2) = 0;
  HIWORD(InputBuffer[7]) = 0;
  LODWORD(InputBuffer[0]) = 64;
  InputBuffer[6] = *(_QWORD *)(i + 32);
  LOWORD(InputBuffer[7]) = 0;
  InputBuffer[5] = 0LL;
  InputBuffer[3] = 2LL;
  *(GUID *)((char *)InputBuffer + 4) = Guid;
  InputBuffer[4] = *(_QWORD *)(i + 40) << 12;
  if ( v9 )
  {
    strupr(v9);
    v10 = strstr(v9, "RDIMAGEOFFSET");
    if ( v10 && (v11 = strstr(v10, "=")) != 0LL )
    {
      v12 = atol(v11 + 1);
      LODWORD(InputBuffer[5]) = v12;
    }
    else
    {
      v12 = InputBuffer[5];
    }
    InputBuffer[4] -= v12;
    v13 = strstr(v9, "RDIMAGELENGTH");
    if ( v13 )
    {
      v14 = strstr(v13, "=");
      if ( v14 )
        InputBuffer[4] = sub_1403E0C98((unsigned __int8 *)v14 + 1);
    }
  }
  LODWORD(v17) = 2097182;
  *((_QWORD *)&v17 + 1) = L"\\Device\\Ramdisk";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
  {
    v8 = 2LL;
    goto LABEL_15;
  }
  Status = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x240000u, InputBuffer, 0x40u, 0LL, 0);
  ZwClose(FileHandle);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
LABEL_15:
    KeBugCheckEx(0xF8u, v8, Status, 0LL, 0LL);
  if ( !strstr(*(const char **)(a1 + 184), "vdisk(") )
  {
    Status = RtlStringFromGUID((const GUID *const)((char *)InputBuffer + 4), &GuidString);
    if ( Status < 0 )
    {
      v8 = 4LL;
      goto LABEL_15;
    }
    sub_1403BF7F4(SourceString, 20LL, (__int64)"\\ArcName\\%s", *(const char **)(a1 + 184));
    RtlInitAnsiString(&DestinationString, SourceString);
    Status = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &DestinationString, 1u);
    if ( Status < 0 )
    {
      v8 = 5LL;
      goto LABEL_15;
    }
    sub_1402E1280(v26, 0x6CuLL, L"\\Device\\Ramdisk%wZ", &GuidString);
    RtlInitUnicodeString(&DeviceName, v26);
    Status = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
    RtlFreeUnicodeString(&GuidString);
    RtlFreeUnicodeString(&SymbolicLinkName);
    if ( Status < 0 )
    {
      v8 = 6LL;
      goto LABEL_15;
    }
  }
  return 0LL;
}
