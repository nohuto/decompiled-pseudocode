/*
 * XREFs of SmpGetDumpDestination @ 0x140017DF4
 * Callers:
 *     SmpCheckForCrashDump @ 0x140006BB0 (SmpCheckForCrashDump.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004384 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpEventWriteString @ 0x140017C88 (SmpEventWriteString.c)
 *     SmpQueryFileExists @ 0x1400180FC (SmpQueryFileExists.c)
 *     SmpQueryFileSize @ 0x140018178 (SmpQueryFileSize.c)
 *     SmpQuerySameVolume @ 0x140018398 (SmpQuerySameVolume.c)
 *     SmpQueryVolumeFreeSpace @ 0x140018510 (SmpQueryVolumeFreeSpace.c)
 *     SmpDeleteFile @ 0x1400194A8 (SmpDeleteFile.c)
 */

__int64 __fastcall SmpGetDumpDestination(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PUNICODE_STRING DestinationString)
{
  __int64 v8; // rsi
  unsigned __int8 v9; // r14
  __int64 result; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  unsigned __int64 v14; // r15
  int v15; // esi
  __m128i v16; // xmm0
  WCHAR *v17; // xmm0_8
  USHORT Length; // si
  __int64 OpenOptions; // [rsp+28h] [rbp-D8h]
  _BYTE v20[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING NtPathName; // [rsp+38h] [rbp-C8h] BYREF
  void *FileHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v23; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[8]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t pszDest[264]; // [rsp+B0h] [rbp-50h] BYREF

  v20[0] = 0;
  *(_QWORD *)&NtPathName.Length = 0LL;
  wcscpy(SourceString, L"?:\\");
  v8 = 0LL;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 3992) == 4 )
  {
LABEL_11:
    v9 = 1;
    goto LABEL_12;
  }
  result = SmpQuerySameVolume(a3, a2, v20);
  if ( (int)result < 0 )
    return result;
  if ( v20[0] != 1 )
  {
    if ( *(_DWORD *)(a2 + 16) )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x60u) >= 0 )
      {
        SmpQueryFileSize(FileHandle, &NtPathName);
        NtClose(FileHandle);
        v8 = *(_QWORD *)&NtPathName.Length;
      }
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)SmpQueryFileExists(a2) )
  {
    if ( !*(_DWORD *)(a2 + 16) )
      return 3221225473LL;
    SmpDeleteFile(a2);
  }
LABEL_12:
  v11 = *(_QWORD *)(a1 + 4000);
  result = SmpQueryVolumeFreeSpace(a2, &NtPathName);
  v13 = result;
  if ( (int)result < 0 )
    return result;
  if ( v11 >= v8 + *(_QWORD *)&NtPathName.Length )
  {
    v16 = *(__m128i *)a2;
    *(_QWORD *)&NtPathName.Length = *(_QWORD *)a2;
    v17 = (WCHAR *)_mm_srli_si128(v16, 8).m128i_u64[0];
    NtPathName.Buffer = v17;
    if ( v17 )
    {
      Length = NtPathName.Length;
      if ( NtPathName.Length >= 8u && RtlCompareMemory(v17, L"\\??\\", 8uLL) == 8 )
      {
        NtPathName.Buffer = v17 + 4;
        NtPathName.Length = Length - 8;
      }
    }
    SmpEventWriteString(v12, &NtPathName.Length);
LABEL_29:
    v13 = -1073741670;
    goto LABEL_30;
  }
  if ( v9 )
  {
    RtlInitUnicodeString(&v23, SourceString);
    SourceString[0] = *(_WORD *)(*(_QWORD *)(a4 + 8) + 8LL);
    v14 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v15 = 0;
    while ( 1 )
    {
      LODWORD(OpenOptions) = (unsigned __int16)(v15 + v14);
      v13 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%s\\%s%4.4x.tmp", v23.Buffer, L"DUMP", OpenOptions);
      if ( v13 < 0 )
        goto LABEL_30;
      if ( !RtlDosPathNameToNtPathName_U(pszDest, &NtPathName, 0LL, 0LL) )
        goto LABEL_22;
      if ( !(unsigned __int8)SmpQueryFileExists(&NtPathName) )
      {
        v13 = 0;
        *DestinationString = NtPathName;
        goto LABEL_30;
      }
      RtlFreeUnicodeString(&NtPathName);
      if ( (unsigned int)++v15 >= 0x64 )
      {
LABEL_22:
        v13 = -1073741823;
        goto LABEL_30;
      }
    }
  }
  if ( !RtlCreateUnicodeString(DestinationString, *(PCWSTR *)(a2 + 8)) )
    goto LABEL_29;
LABEL_30:
  *(_DWORD *)(a2 + 20) = v9;
  return (unsigned int)v13;
}
