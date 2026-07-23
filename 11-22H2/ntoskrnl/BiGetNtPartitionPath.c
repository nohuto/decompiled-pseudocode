/*
 * XREFs of BiGetNtPartitionPath @ 0x140809890
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140809F18 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D93F0 (_wcsicmp.c)
 *     swprintf_s @ 0x1403DDD60 (swprintf_s.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenFile @ 0x14041AD00 (ZwOpenFile.c)
 *     ZwOpenDirectoryObject @ 0x14041B1A0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041D020 (ZwQueryDirectoryObject.c)
 *     BiGetPartitionVhdFilePath @ 0x140808F3C (BiGetPartitionVhdFilePath.c)
 *     BiIsValidDiskDevice @ 0x140809CE4 (BiIsValidDiskDevice.c)
 *     BiGetDriveLayoutBlock @ 0x140809DB8 (BiGetDriveLayoutBlock.c)
 *     BiVerifyBootPartition @ 0x140809E44 (BiVerifyBootPartition.c)
 *     BiTranslateSymbolicLink @ 0x14080A234 (BiTranslateSymbolicLink.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiGetNtPartitionPath(int a1, _QWORD *a2)
{
  wchar_t *v2; // r14
  wchar_t **v3; // r15
  int v4; // eax
  wchar_t *v5; // r13
  NTSTATUS v6; // ebx
  void *Pool2; // rdi
  bool v8; // r12
  ULONG v9; // esi
  __int64 i; // rdx
  char v11; // si
  wchar_t **v12; // rbx
  unsigned __int64 v13; // rcx
  int v14; // r13d
  _QWORD *v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // r12
  __int64 v18; // rcx
  bool v19; // zf
  const wchar_t *PartitionVhdFilePath; // rax
  const wchar_t *v22; // rax
  BOOLEAN RestartScan[8]; // [rsp+20h] [rbp-E0h]
  bool v24; // [rsp+40h] [rbp-C0h]
  wchar_t **v25; // [rsp+50h] [rbp-B0h]
  ULONG Context; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v27; // [rsp+5Ch] [rbp-A4h]
  HANDLE DirectoryHandle; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v29; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *Str1; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v32; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  void *v34; // [rsp+90h] [rbp-70h]
  _QWORD *v35; // [rsp+98h] [rbp-68h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES v37; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v39; // [rsp+110h] [rbp+10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v41[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v42; // [rsp+150h] [rbp+50h]

  v35 = a2;
  v32 = 0LL;
  v42 = 0LL;
  v2 = 0LL;
  FileHandle = 0LL;
  v3 = 0LL;
  memset(v41, 0, sizeof(v41));
  Context = 0;
  memset(&ObjectAttributes, 0, 44);
  v29 = 0LL;
  v31 = 0LL;
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  memset(&v37, 0, 44);
  v34 = 0LL;
  Str1 = 0LL;
  IoStatusBlock = 0LL;
  v39 = 0LL;
  v4 = BiVerifyBootPartition(a1, (unsigned int)&v29, (unsigned int)&v32, (unsigned int)&v31, (__int64)&Str1, 0LL);
  v5 = Str1;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_50;
  Pool2 = (void *)ExAllocatePool2(258LL, 88LL, 1262764866LL);
  if ( !Pool2 )
    return 3221225495LL;
  v8 = 0;
  v24 = 0;
  if ( v5 && !v29 )
  {
    v8 = v32 == 0LL;
    v24 = v32 == 0LL;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v6 < 0 )
    goto LABEL_80;
  v9 = 4096;
  for ( i = 4096LL; ; i = v9 )
  {
    v3 = (wchar_t **)ExAllocatePool2(258LL, i, 1262764866LL);
    if ( !v3 )
    {
      v6 = -1073741801;
      goto LABEL_80;
    }
    Context = 0;
    v6 = ZwQueryDirectoryObject(DirectoryHandle, v3, v9, 0, 1u, &Context, 0LL);
    if ( v6 != 261 )
      break;
    ExFreePoolWithTag(v3, 0x4B444342u);
    v9 += 4096;
  }
  ZwClose(DirectoryHandle);
  v11 = 0;
  DirectoryHandle = 0LL;
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147483622 )
  {
LABEL_80:
    ExFreePoolWithTag(Pool2, 0x4B444342u);
    goto LABEL_48;
  }
  if ( !*(_WORD *)v3 )
    goto LABEL_79;
  v12 = v3 + 1;
  v25 = v3 + 1;
  while ( 1 )
  {
    if ( !(unsigned __int8)BiIsValidDiskDevice(*v12, v12[2]) )
      goto LABEL_14;
    swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, 0LL);
    if ( (int)BiGetDriveLayoutBlock((PCWSTR)Pool2) < 0 )
      goto LABEL_14;
    if ( !v5 )
    {
      v13 = *(_QWORD *)(v31 + 4) - *(_QWORD *)((char *)v41 + 4);
      if ( !v13 )
      {
        v13 = *(_QWORD *)(v31 + 12) - *(_QWORD *)((char *)v41 + 12);
        if ( !v13 )
          v13 = *(unsigned int *)(v31 + 20) - (unsigned __int64)DWORD1(v41[1]);
      }
      if ( v13 )
      {
        ExFreePoolWithTag(0LL, 0x4B444342u);
        goto LABEL_14;
      }
    }
    v14 = *(_DWORD *)(v31 + 4);
    if ( v32 )
    {
      if ( v14 == 1 )
      {
        *(_DWORD *)RestartScan = *v32;
        swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, *(_QWORD *)RestartScan);
        RtlInitUnicodeString(&v39, (PCWSTR)Pool2);
        v37.Length = 48;
        v37.ObjectName = &v39;
        v37.RootDirectory = 0LL;
        v37.Attributes = 576;
        *(_OWORD *)&v37.SecurityDescriptor = 0LL;
        if ( ZwOpenFile(&FileHandle, 0x80000000, &v37, &IoStatusBlock, 3u, 0) >= 0 )
        {
          ZwClose(FileHandle);
          v11 = 1;
        }
        goto LABEL_43;
      }
LABEL_24:
      if ( v14 )
        goto LABEL_43;
      goto LABEL_25;
    }
    if ( v14 != 1 )
      goto LABEL_24;
LABEL_25:
    v15 = 0LL;
    if ( !v14 )
    {
      if ( v32 )
      {
        v15 = v32;
      }
      else if ( v29 )
      {
        v15 = v29;
      }
    }
    v16 = 0;
    v27 = 0;
    if ( !MEMORY[4] )
      goto LABEL_42;
    while ( 1 )
    {
      v17 = 144LL * v16;
      if ( !*(_DWORD *)(v17 + 0x48) )
        goto LABEL_38;
      *(_DWORD *)RestartScan = *(_DWORD *)(v17 + 0x48);
      swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v25, *(_QWORD *)RestartScan);
      if ( v24 )
      {
        PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)Pool2);
        v2 = (wchar_t *)PartitionVhdFilePath;
        if ( PartitionVhdFilePath )
          break;
      }
LABEL_32:
      if ( v14 == 1 )
      {
        if ( !v29 )
          goto LABEL_38;
        v19 = *v29 == *(_QWORD *)(v17 + 56);
      }
      else
      {
        if ( !v15 )
          goto LABEL_38;
        v18 = *v15 - *(_QWORD *)(v17 + 96);
        if ( *v15 == *(_QWORD *)(v17 + 96) )
          v18 = v15[1] - *(_QWORD *)(v17 + 104);
        v19 = v18 == 0;
      }
      if ( v19 )
      {
        v11 = 1;
        goto LABEL_41;
      }
LABEL_38:
      v16 = v27 + 1;
      v27 = v16;
      if ( v16 >= MEMORY[4] )
        goto LABEL_41;
    }
    if ( wcsicmp(Str1, PartitionVhdFilePath) )
    {
      ExFreePoolWithTag(v2, 0x4B444342u);
      v2 = 0LL;
      goto LABEL_32;
    }
    v11 = 1;
LABEL_41:
    v8 = v24;
LABEL_42:
    v12 = v25;
LABEL_43:
    ExFreePoolWithTag(0LL, 0x4B444342u);
    v5 = Str1;
    if ( !Str1 )
    {
LABEL_44:
      if ( v11 )
        goto LABEL_45;
LABEL_79:
      v6 = -1073741811;
      goto LABEL_80;
    }
    if ( v11 )
    {
      v11 = 0;
      if ( v8 )
        goto LABEL_45;
      v22 = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)Pool2);
      v2 = (wchar_t *)v22;
      if ( v22 )
        break;
    }
LABEL_14:
    v12 += 4;
    v25 = v12;
    if ( !*((_WORD *)v12 - 4) )
      goto LABEL_44;
  }
  if ( wcsicmp(v5, v22) )
  {
    ExFreePoolWithTag(v2, 0x4B444342u);
    v2 = 0LL;
    goto LABEL_14;
  }
LABEL_45:
  if ( (int)BiTranslateSymbolicLink((PCWSTR)Pool2) >= 0 )
  {
    ExFreePoolWithTag(Pool2, 0x4B444342u);
    Pool2 = v34;
  }
  v6 = 0;
  *v35 = Pool2;
LABEL_48:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
LABEL_50:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)v6;
}
