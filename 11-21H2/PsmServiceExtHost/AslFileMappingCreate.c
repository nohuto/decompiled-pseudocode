/*
 * XREFs of AslFileMappingCreate @ 0x18009F03C
 * Callers:
 *     SdbOpenDatabaseEx @ 0x180095474 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x180099D10 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A828 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009AC20 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslFileNotFound @ 0x18009DEB4 (AslFileNotFound.c)
 *     AslStringDuplicate @ 0x18009E710 (AslStringDuplicate.c)
 *     AslFileMappingDelete @ 0x18009F2A4 (AslFileMappingDelete.c)
 *     RtlFileMapInitializeByNtPath @ 0x18009FAE0 (RtlFileMapInitializeByNtPath.c)
 */

__int64 __fastcall AslFileMappingCreate(_QWORD *a1, const WCHAR *a2)
{
  _QWORD *Heap; // rax
  _QWORD *v5; // rsi
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]

  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x50uLL);
  v5 = Heap;
  if ( Heap )
  {
    v6 = AslStringDuplicate(Heap, (__int64)a2);
    if ( v6 >= 0 )
    {
      if ( _wcsnicmp(a2, L"\\SystemRoot\\", 0xCuLL) )
      {
        v6 = RtlDosPathNameToNtPathName_U_WithStatus(a2, &DestinationString, 0LL, 0LL);
        if ( v6 < 0 )
          goto LABEL_9;
      }
      v8 = RtlFileMapInitializeByNtPath(v5 + 1, &DestinationString);
      v6 = v8;
      if ( v8 < 0 )
      {
        if ( AslFileNotFound(v8) )
          goto LABEL_19;
        v10 = (unsigned int)(v9 + 1073741805);
        if ( (unsigned int)v10 <= 0x30 && (v11 = 0x1000000008001LL, _bittest64(&v11, v10)) || v6 == -1073741638 )
        {
          v7 = 3LL;
          goto LABEL_10;
        }
LABEL_9:
        v7 = 1LL;
LABEL_10:
        AslLogCallPrintf(v7);
LABEL_19:
        AslFileMappingDelete(v5);
        goto LABEL_21;
      }
      v16 = 0LL;
      IoStatusBlock = 0LL;
      FileInformation = 0LL;
      v6 = ZwQueryInformationFile((HANDLE)v5[1], &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v6 >= 0 )
      {
        v6 = 0;
        v5[3] = *((_QWORD *)&FileInformation + 1);
        *((_DWORD *)v5 + 14) = (*((_QWORD *)&FileInformation + 1) != 0LL) + 1;
        *a1 = v5;
        goto LABEL_21;
      }
    }
    AslLogCallPrintf(1LL);
    goto LABEL_19;
  }
  v6 = -1073741801;
LABEL_21:
  if ( DestinationString.Buffer != a2 )
    RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v6;
}
