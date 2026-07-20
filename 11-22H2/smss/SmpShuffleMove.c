/*
 * XREFs of SmpShuffleMove @ 0x14001A45C
 * Callers:
 *     SmpProcessFileRenames @ 0x14000B13C (SmpProcessFileRenames.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004384 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpCheckDirectoryWritable @ 0x140011744 (SmpCheckDirectoryWritable.c)
 *     SmpCheckFolderForRedirections @ 0x1400117C4 (SmpCheckFolderForRedirections.c)
 *     SmpGetParentDirectory @ 0x140011A4C (SmpGetParentDirectory.c)
 *     SmpQueryFileExists @ 0x1400180FC (SmpQueryFileExists.c)
 *     SmpOpenTargetFile @ 0x140019ED8 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140019FF0 (SmpRenameTargetFile.c)
 */

__int64 __fastcall SmpShuffleMove(struct _UNICODE_STRING *a1, void *a2, char a3)
{
  int ParentDirectory; // ebx
  unsigned __int64 v7; // r15
  int v8; // esi
  __int64 v10; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v12; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING NtPathName; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES v17; // [rsp+80h] [rbp-80h] BYREF
  wchar_t pszDest[264]; // [rsp+B0h] [rbp-50h] BYREF

  Handle = 0LL;
  UnicodeString.Buffer = 0LL;
  v12 = (HANDLE)-1LL;
  if ( a3 != 1 || SmpCheckFolderForRedirections(&a1->Length, &v12) )
  {
    ParentDirectory = SmpGetParentDirectory((__int64)a1, (__int64)&v15);
    if ( ParentDirectory >= 0 )
    {
      ParentDirectory = SmpCheckDirectoryWritable(&v15);
      if ( ParentDirectory >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)SmpTempFilesDir.Buffer + 4);
        v7 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        v8 = 0;
        while ( 1 )
        {
          LODWORD(v10) = (unsigned __int16)(v8 + v7);
          ParentDirectory = RtlStringCbPrintfW(
                              pszDest,
                              0x208uLL,
                              L"%s\\%s%4.4x.tmp",
                              DestinationString.Buffer,
                              L"SMSS-PFRO",
                              v10);
          if ( ParentDirectory < 0 )
            break;
          if ( !RtlDosPathNameToNtPathName_U(pszDest, &NtPathName, 0LL, 0LL) )
            goto LABEL_11;
          if ( !SmpQueryFileExists(&NtPathName) )
          {
            v17.RootDirectory = 0LL;
            UnicodeString = NtPathName;
            v17.Length = 48;
            v17.Attributes = 64;
            v17.ObjectName = a1;
            *(_OWORD *)&v17.SecurityDescriptor = 0LL;
            ParentDirectory = SmpOpenTargetFile(&Handle, 0x110000u, &v17, 1, 3u);
            if ( ParentDirectory >= 0 )
            {
              ParentDirectory = SmpRenameTargetFile((const void **)&UnicodeString, Handle, 1, a3);
              if ( ParentDirectory >= 0 )
              {
                ParentDirectory = SmpRenameTargetFile((const void **)a1, a2, 1, a3);
                if ( ParentDirectory >= 0 )
                  ParentDirectory = 0;
                else
                  SmpRenameTargetFile((const void **)a1, Handle, 1, a3);
              }
            }
            break;
          }
          RtlFreeUnicodeString(&NtPathName);
          if ( (unsigned int)++v8 >= 0x64 )
          {
LABEL_11:
            ParentDirectory = -1073741823;
            break;
          }
        }
      }
    }
  }
  else
  {
    ParentDirectory = -1073740533;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    NtClose(Handle);
  if ( v12 != (HANDLE)-1LL )
    NtClose(v12);
  return (unsigned int)ParentDirectory;
}
