/*
 * XREFs of InternalFindFirstFileExW @ 0x140014490
 * Callers:
 *     GetLongPathNameW @ 0x140013BCC (GetLongPathNameW.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     BaseFindFirstDevice @ 0x140014250 (BaseFindFirstDevice.c)
 *     BasepInitializeFindFileHandle @ 0x1400142B4 (BasepInitializeFindFileHandle.c)
 *     BaseSetLastNTError @ 0x1400149C0 (BaseSetLastNTError.c)
 *     memcpy_0 @ 0x140014B37 (memcpy_0.c)
 */

__int64 __fastcall InternalFindFirstFileExW(PCWSTR DosName, __int64 a2, __int64 a3)
{
  char v5; // r15
  ULONG v6; // ecx
  PWSTR Buffer; // r14
  ULONG IsDosDeviceName_U; // ebx
  __int64 result; // rax
  USHORT Length; // ax
  __int16 v11; // cx
  unsigned int v12; // edx
  char v13; // di
  NTSTATUS v14; // eax
  NTSTATUS v15; // ebx
  __int64 v16; // rcx
  unsigned int v17; // edx
  WCHAR *v18; // rcx
  int v19; // edi
  unsigned int v20; // eax
  bool v21; // cc
  unsigned __int64 v22; // rbx
  unsigned int v23; // eax
  unsigned __int64 v24; // rbx
  void *FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING NtName; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v27[4]; // [rsp+68h] [rbp-98h] BYREF
  PCWSTR PartName; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _RTL_RELATIVE_NAME_U RelativeName; // [rsp+88h] [rbp-78h] BYREF
  const void *v31[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v34[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v35; // [rsp+108h] [rbp+8h]
  __int64 v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int v38; // [rsp+128h] [rbp+28h]
  int v39; // [rsp+12Ch] [rbp+2Ch]
  int v40; // [rsp+138h] [rbp+38h]
  unsigned int v41; // [rsp+13Ch] [rbp+3Ch]
  int v42; // [rsp+140h] [rbp+40h]
  unsigned __int8 v43; // [rsp+144h] [rbp+44h]
  _BYTE v44[24]; // [rsp+146h] [rbp+46h] BYREF
  _BYTE Src[530]; // [rsp+15Eh] [rbp+5Eh] BYREF

  RtlInitUnicodeString(&DestinationString, DosName);
  if ( !DestinationString.Length
    || (v5 = 1, DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 46) )
  {
    v5 = 0;
  }
  if ( !RtlDosPathNameToRelativeNtPathName_U(DosName, &NtName, &PartName, &RelativeName) )
  {
    v6 = 3;
LABEL_64:
    RtlSetLastWin32Error(v6);
    return -1LL;
  }
  Buffer = NtName.Buffer;
  IsDosDeviceName_U = RtlIsDosDeviceName_U(DestinationString.Buffer);
  if ( IsDosDeviceName_U )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
    LOWORD(v31[0]) = IsDosDeviceName_U;
    v31[1] = (char *)DestinationString.Buffer + ((unsigned __int64)IsDosDeviceName_U >> 16);
    WORD1(v31[0]) = IsDosDeviceName_U;
    return BaseFindFirstDevice(v31, a3);
  }
  Length = NtName.Length;
  if ( PartName )
    v11 = NtName.Length + LOWORD(NtName.Buffer) - (_WORD)PartName;
  else
    v11 = 0;
  v27[0] = v11;
  v27[1] = v11;
  if ( !RelativeName.RelativeName.Length || RelativeName.RelativeName.Buffer == PartName )
  {
    RelativeName.ContainingDirectory = 0LL;
    if ( PartName )
    {
      Length = (_WORD)PartName - LOWORD(NtName.Buffer);
      goto LABEL_17;
    }
  }
  else if ( PartName )
  {
    NtName.Buffer = RelativeName.RelativeName.Buffer;
    Length = (_WORD)PartName - LOWORD(RelativeName.RelativeName.Buffer);
LABEL_17:
    NtName.MaximumLength = Length;
    NtName.Length = Length;
  }
  v12 = Length >> 1;
  if ( v12 < 2 || NtName.Buffer[v12 - 2] == 58 || (v13 = 1, NtName.Buffer[v12 - 1] != 92) )
    v13 = 0;
  ObjectAttributes.RootDirectory = RelativeName.ContainingDirectory;
  ObjectAttributes.ObjectName = &NtName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
  v15 = v14;
  if ( v13 && (v14 == -1073741811 || v14 == -1073741565) )
  {
    NtName.Length -= 2;
    v15 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
  }
  if ( v15 < 0 )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
    v16 = 3221225530LL;
    if ( v15 == -1073741772 )
    {
LABEL_31:
      BaseSetLastNTError(v16);
      return -1LL;
    }
    if ( v15 == -1073741788 )
      v15 = -1073741766;
LABEL_30:
    v16 = (unsigned int)v15;
    goto LABEL_31;
  }
  if ( !v27[0] )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
    NtClose(FileHandle);
    v6 = 2;
    goto LABEL_64;
  }
  if ( v27[0] == 6 && RtlCompareMemory(PartName, L"*.*", 6uLL) == 6 )
  {
    v27[0] = 2;
    goto LABEL_53;
  }
  v17 = 0;
  v18 = (WCHAR *)PartName;
  if ( (v27[0] & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v17 && *v18 == 46 && *(v18 - 1) == 42 )
        *(v18 - 1) = 60;
      if ( *v18 == 63 )
        break;
      if ( *v18 == 42 )
        goto LABEL_46;
LABEL_49:
      ++v17;
      ++v18;
      if ( v17 >= v27[0] >> 1 )
        goto LABEL_50;
    }
    *v18 = 62;
LABEL_46:
    if ( v17 && *(v18 - 1) == 46 )
      *(v18 - 1) = 34;
    goto LABEL_49;
  }
LABEL_50:
  if ( v5 && *(v18 - 1) == 42 )
    *(v18 - 1) = 60;
LABEL_53:
  v15 = NtQueryDirectoryFileEx(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v34, 616, 3, 2, v27);
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
  if ( v15 < 0 )
  {
    NtClose(FileHandle);
    goto LABEL_30;
  }
  v19 = v40;
  *(_QWORD *)(a3 + 4) = v35;
  *(_QWORD *)(a3 + 12) = v36;
  *(_QWORD *)(a3 + 20) = v37;
  *(_DWORD *)(a3 + 28) = v39;
  *(_DWORD *)(a3 + 32) = v38;
  v20 = v41;
  v21 = v41 <= 0x206;
  *(_DWORD *)a3 = v19;
  if ( !v21 )
    v20 = 518;
  v22 = v20;
  memcpy_0((void *)(a3 + 44), Src, v20);
  v21 = v43 <= 0x1Au;
  *(_WORD *)(a3 + 2 * (v22 >> 1) + 44) = 0;
  if ( !v21 || (v23 = (char)v43, (unsigned int)(char)v43 >= 0x18) )
    v23 = 24;
  v24 = v23;
  memcpy_0((void *)(a3 + 564), v44, v23);
  *(_WORD *)(a3 + 2 * (v24 >> 1) + 564) = 0;
  if ( (v19 & 0x400) != 0 )
    *(_DWORD *)(a3 + 36) = v42;
  result = (__int64)BasepInitializeFindFileHandle((struct _RTL_CRITICAL_SECTION_DEBUG *)FileHandle);
  if ( !result )
  {
    NtClose(FileHandle);
    v6 = 8;
    goto LABEL_64;
  }
  return result;
}
