/*
 * XREFs of AslFileMappingCreate @ 0x1800999F8
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1800903E4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x180094DD0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1800958F8 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095CE0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslFileNotFound @ 0x1800988A4 (AslFileNotFound.c)
 *     AslStringDuplicate @ 0x180099128 (AslStringDuplicate.c)
 *     AslFileMappingDelete @ 0x180099C60 (AslFileMappingDelete.c)
 *     RtlFileMapInitializeByNtPath @ 0x18009A484 (RtlFileMapInitializeByNtPath.c)
 */

__int64 __fastcall AslFileMappingCreate(unsigned __int16 ***a1, WCHAR *a2)
{
  unsigned __int16 **Heap; // rax
  unsigned __int16 **v5; // rsi
  unsigned int v6; // ebx
  int v7; // eax
  const char *v8; // r9
  int v9; // r8d
  int v10; // eax
  const char *v11; // r9
  int v12; // r8d
  int v13; // eax
  int v14; // ecx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  FILE_INFORMATION_CLASS FileInformationClass[2]; // [rsp+20h] [rbp-50h]
  unsigned int v19; // [rsp+28h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]

  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  Heap = (unsigned __int16 **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x50uLL);
  v5 = Heap;
  if ( Heap )
  {
    v7 = AslStringDuplicate(Heap, a2);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = "AslStringDuplicate failed [%x]";
      v9 = 121;
LABEL_22:
      FileInformationClass[0] = v7;
      AslLogCallPrintf(1LL, (unsigned int)"AslFileMappingCreate", v9, (_DWORD)v8, *(_QWORD *)FileInformationClass);
      goto LABEL_23;
    }
    if ( _wcsnicmp(a2, L"\\SystemRoot\\", 0xCuLL) )
    {
      v10 = RtlDosPathNameToNtPathName_U_WithStatus(a2, &DestinationString, 0LL, 0LL);
      v6 = v10;
      if ( v10 < 0 )
      {
        v19 = v10;
        v11 = "RtlDosPathNameToNtPathName_U_WithStatus failed for %S [%x]";
        v12 = 146;
LABEL_11:
        AslLogCallPrintf(1LL, (unsigned int)"AslFileMappingCreate", v12, (_DWORD)v11, a2, v19);
        goto LABEL_23;
      }
    }
    v13 = RtlFileMapInitializeByNtPath(v5 + 1, &DestinationString);
    v6 = v13;
    if ( v13 >= 0 )
    {
      v23 = 0LL;
      IoStatusBlock = 0LL;
      FileInformation = 0LL;
      v7 = ZwQueryInformationFile(v5[1], &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v6 = 0;
        v5[3] = (unsigned __int16 *)*((_QWORD *)&FileInformation + 1);
        *((_DWORD *)v5 + 14) = (*((_QWORD *)&FileInformation + 1) != 0LL) + 1;
        *a1 = v5;
        goto LABEL_25;
      }
      v8 = "NtQueryInformationFile failed [%x]";
      v9 = 181;
      goto LABEL_22;
    }
    if ( !AslFileNotFound(v13) )
    {
      v15 = (unsigned int)(v14 + 1073741805);
      if ( (unsigned int)v15 > 0x30 || (v16 = 0x1000000008001LL, !_bittest64(&v16, v15)) )
      {
        if ( v6 != -1073741638 )
        {
          v19 = v6;
          v11 = "RtlFileMapInitializeByFilePath failed %S [%x]";
          v12 = 159;
          goto LABEL_11;
        }
      }
      AslLogCallPrintf(
        3LL,
        (unsigned int)"AslFileMappingCreate",
        161,
        (unsigned int)"RtlFileMapInitializeByFilePath failed %S [%x]",
        a2,
        v6);
    }
LABEL_23:
    AslFileMappingDelete(v5);
    goto LABEL_25;
  }
  v6 = -1073741801;
LABEL_25:
  if ( DestinationString.Buffer != a2 )
    RtlFreeUnicodeString(&DestinationString);
  return v6;
}
