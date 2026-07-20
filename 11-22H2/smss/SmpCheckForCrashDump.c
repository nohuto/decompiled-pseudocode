/*
 * XREFs of SmpCheckForCrashDump @ 0x140006BB0
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009EC4 (SmpCreatePagingFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x140014B2B (__chkstk_0.c)
 *     SmpGetCrashParameters @ 0x140017D38 (SmpGetCrashParameters.c)
 *     SmpGetDumpDestination @ 0x140017DF4 (SmpGetDumpDestination.c)
 *     SmpSavePageFile @ 0x140018820 (SmpSavePageFile.c)
 *     SmpSetPagefileTooSmallForDump @ 0x140018C68 (SmpSetPagefileTooSmallForDump.c)
 */

char __fastcall SmpCheckForCrashDump(struct _UNICODE_STRING *a1)
{
  int v1; // edi
  char v2; // bl
  void *FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING KeyHandle_8; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING UnicodeString_8; // [rsp+70h] [rbp-90h] BYREF
  __int64 Data; // [rsp+80h] [rbp-80h] BYREF
  int v9; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v10; // [rsp+90h] [rbp-70h]
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING v12; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD Buffer[1000]; // [rsp+100h] [rbp+0h] BYREF
  char v16; // [rsp+1150h] [rbp+1050h]

  ObjectAttributes.ObjectName = a1;
  v10 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash";
  v9 = 10092696;
  v12.Buffer = L"TempDestination";
  *(_DWORD *)&v12.Length = 2097182;
  ValueName.Buffer = L"DumpFile";
  v1 = (int)a1;
  *(_DWORD *)&ValueName.Length = 1179664;
  Data = 0LL;
  FileHandle = (void *)-1LL;
  KeyHandle = -1LL;
  v2 = 0;
  UnicodeString_8 = 0LL;
  ObjectAttributes.Length = 48;
  KeyHandle_8 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&FileHandle, 0xC0150000, &ObjectAttributes, &IoStatusBlock, 3u, 0x68u) >= 0 )
  {
    if ( NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x2000u, 0LL, 0LL) >= 0
      && Buffer[0] == 1162297680
      && Buffer[1] == 875976004 )
    {
      if ( (v16 & 4) != 0 )
        SmpSetPagefileTooSmallForDump();
      if ( (int)SmpGetCrashParameters(&UnicodeString_8) >= 0
        && (int)SmpGetDumpDestination((int)Buffer, (int)&UnicodeString_8, (int)FileHandle, v1, &KeyHandle_8) >= 0
        && (int)SmpSavePageFile(FileHandle) >= 0 )
      {
        v2 = 1;
      }
    }
    NtClose(FileHandle);
    FileHandle = (void *)-1LL;
    if ( v2 )
    {
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 64;
      if ( NtCreateKey((PHANDLE)&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
      {
        NtSetValueKey((HANDLE)KeyHandle, &ValueName, 0, 1u, KeyHandle_8.Buffer + 4, KeyHandle_8.Length - 6);
        NtSetValueKey((HANDLE)KeyHandle, &v12, 0, 4u, (char *)&Data + 4, 4u);
        NtClose((HANDLE)KeyHandle);
        KeyHandle = -1LL;
      }
    }
  }
  else
  {
    v2 = 0;
  }
  if ( UnicodeString_8.Length )
    RtlFreeUnicodeString(&UnicodeString_8);
  return v2;
}
