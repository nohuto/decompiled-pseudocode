/*
 * XREFs of SmpSavePageFile @ 0x140018820
 * Callers:
 *     SmpCheckForCrashDump @ 0x140006BB0 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFile @ 0x140018650 (SmpSaveOldPageFile.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14000CC90 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpCopyFile @ 0x140017908 (SmpCopyFile.c)
 *     SmpQuerySameVolume @ 0x140018398 (SmpQuerySameVolume.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x140018918 (SmpSetDumpSecurityAndAttributes.c)
 *     SmpSetEndOfFile @ 0x140018BEC (SmpSetEndOfFile.c)
 */

NTSTATUS __fastcall SmpSavePageFile(HANDLE FileHandle, struct _UNICODE_STRING *a2, union _LARGE_INTEGER a3, char a4)
{
  struct _UNICODE_STRING *v5; // rdi
  HANDLE v6; // rbx
  NTSTATUS result; // eax
  int Length; // r11d
  const wchar_t *Buffer; // r8
  int v10; // r11d
  bool v11; // [rsp+30h] [rbp-248h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-240h] BYREF
  char FileInformation[8]; // [rsp+50h] [rbp-228h] BYREF
  __int64 v14; // [rsp+58h] [rbp-220h]
  int v15; // [rsp+60h] [rbp-218h]
  wchar_t pszDest[246]; // [rsp+64h] [rbp-214h] BYREF

  v5 = a2;
  v6 = FileHandle;
  if ( SmpForceCopyDumpFile )
    return SmpCopyFile(FileHandle, a2, a3);
  if ( !a3.QuadPart || (result = SmpSetEndOfFile(FileHandle), result >= 0) )
  {
    if ( (a4 & 1) == 0 )
    {
      result = SmpQuerySameVolume(v6, v5, &v11);
      if ( result < 0 )
        return result;
      if ( !v11 )
      {
        a3.QuadPart = 0LL;
        a2 = v5;
        FileHandle = v6;
        return SmpCopyFile(FileHandle, a2, a3);
      }
    }
    Length = v5->Length;
    Buffer = v5->Buffer;
    v14 = 0LL;
    v15 = Length;
    FileInformation[0] = 1;
    result = RtlStringCbCopyW(pszDest, 0x1ECuLL, Buffer);
    if ( result >= 0 )
    {
      result = NtSetInformationFile(v6, &IoStatusBlock, FileInformation, v10 + 24, FileRenameInformation);
      if ( result >= 0 )
        return SmpSetDumpSecurityAndAttributes(v6);
    }
  }
  return result;
}
