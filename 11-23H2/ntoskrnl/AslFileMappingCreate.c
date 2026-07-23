/*
 * XREFs of AslFileMappingCreate @ 0x14075812C
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140693044 (SdbGetDatabaseMatch.c)
 *     SdbpCheckMatchingFiles @ 0x140756AF0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140757048 (SdbpCheckKObject.c)
 *     SdbOpenDatabaseEx @ 0x140A4E800 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A50204 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A505F0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     RtlFileMapInitializeByNtPath @ 0x1402F8088 (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14041B310 (ZwQueryInformationFile.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x1406D4A28 (AslStringDuplicate.c)
 *     AslFileMappingDelete @ 0x1407571A8 (AslFileMappingDelete.c)
 *     AslAlloc @ 0x140758688 (AslAlloc.c)
 *     AslFileNotFound @ 0x1407593DC (AslFileNotFound.c)
 *     AslpFileMappingGetFileKind @ 0x14075A904 (AslpFileMappingGetFileKind.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall AslFileMappingCreate(wchar_t ***a1, const WCHAR *a2, void *a3, wchar_t *a4, wchar_t *a5)
{
  __int64 v9; // rcx
  wchar_t **v10; // rax
  wchar_t **v11; // rdi
  int v12; // ebx
  void *v13; // rax
  HANDLE *v14; // rsi
  int v15; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]

  v23 = 0LL;
  FileInformation = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v10 = (wchar_t **)AslAlloc(v9, 88LL);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -1073741801;
    goto LABEL_18;
  }
  v12 = AslStringDuplicate(v10, a2);
  if ( v12 < 0 )
    goto LABEL_25;
  v13 = 0LL;
  if ( a3 != (void *)-1LL )
    v13 = a3;
  v14 = (HANDLE *)(v11 + 1);
  if ( v13 )
  {
    *(_OWORD *)v14 = 0LL;
    *(_OWORD *)(v11 + 3) = 0LL;
    *(_OWORD *)(v11 + 5) = 0LL;
    v11[7] = 0LL;
    *((_BYTE *)v11 + 56) = 0;
    *v14 = v13;
  }
  else
  {
    v15 = RtlFileMapInitializeByNtPath((__int64)(v11 + 1), &DestinationString);
    v12 = v15;
    if ( v15 < 0 )
    {
      if ( !(unsigned int)AslFileNotFound((unsigned int)v15) )
      {
        v17 = (unsigned int)(v12 + 1073741805);
        if ( (unsigned int)v17 <= 0x30 && (v18 = 0x1000000008001LL, _bittest64(&v18, v17)) || v12 == -1073741638 )
          v19 = 3LL;
        else
          v19 = 1LL;
        AslLogCallPrintf(v19);
      }
      goto LABEL_22;
    }
  }
  v12 = ZwQueryInformationFile(*v14, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v12 < 0 )
  {
LABEL_25:
    AslLogCallPrintf(1LL);
    goto LABEL_22;
  }
  if ( a4 )
  {
    v11[5] = a5;
    *((_BYTE *)v11 + 59) = 1;
    v11[4] = a4;
  }
  v11[3] = (wchar_t *)*((_QWORD *)&FileInformation + 1);
  if ( a4 )
  {
    if ( *((_QWORD *)&FileInformation + 1) )
    {
      if ( (int)AslpFileMappingGetFileKind(v11 + 1, v11 + 8) < 0 )
      {
        AslLogCallPrintf(1LL);
        *((_DWORD *)v11 + 16) = 3;
      }
      goto LABEL_17;
    }
    AslLogCallPrintf(1LL);
    v12 = -1073741811;
LABEL_22:
    AslFileMappingDelete((PVOID *)v11);
    goto LABEL_18;
  }
  *((_DWORD *)v11 + 16) = (*((_QWORD *)&FileInformation + 1) != 0LL) + 1;
LABEL_17:
  *a1 = v11;
  v12 = 0;
LABEL_18:
  if ( DestinationString.Buffer != a2 )
    RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v12;
}
