/*
 * XREFs of sub_14075E160 @ 0x14075E160
 * Callers:
 *     sub_14075E2D8 @ 0x14075E2D8 (sub_14075E2D8.c)
 *     sub_1408414E0 @ 0x1408414E0 (sub_1408414E0.c)
 *     sub_140843160 @ 0x140843160 (sub_140843160.c)
 *     sub_140A108BC @ 0x140A108BC (sub_140A108BC.c)
 *     sub_140A11614 @ 0x140A11614 (sub_140A11614.c)
 *     sub_140A11A00 @ 0x140A11A00 (sub_140A11A00.c)
 * Callees:
 *     sub_1402D8914 @ 0x1402D8914 (sub_1402D8914.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14075B1B8 @ 0x14075B1B8 (sub_14075B1B8.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_14075E448 @ 0x14075E448 (sub_14075E448.c)
 *     sub_1408415E4 @ 0x1408415E4 (sub_1408415E4.c)
 *     sub_140842E88 @ 0x140842E88 (sub_140842E88.c)
 */

__int64 __fastcall sub_14075E160(_QWORD *a1, WCHAR *a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
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
  v10 = sub_14075B444(v9, 0x58uLL);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -1073741801;
    goto LABEL_16;
  }
  v12 = sub_14075B1B8(v10, a2);
  if ( v12 < 0 )
    goto LABEL_22;
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
    v15 = sub_1402D8914((__int64)(v11 + 1), &DestinationString);
    v12 = v15;
    if ( v15 < 0 )
    {
      if ( !(unsigned int)sub_1408415E4((unsigned int)v15) )
      {
        v17 = (unsigned int)(v12 + 1073741805);
        if ( (unsigned int)v17 <= 0x30 && (v18 = 0x1000000008001LL, _bittest64(&v18, v17)) || v12 == -1073741638 )
          v19 = 3LL;
        else
          v19 = 1LL;
        sub_1406E0C3C(v19, (__int64)"AslFileMappingCreate");
      }
      goto LABEL_20;
    }
  }
  v12 = ZwQueryInformationFile(*v14, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v12 < 0 )
  {
LABEL_22:
    sub_1406E0C3C(1LL, (__int64)"AslFileMappingCreate");
    goto LABEL_20;
  }
  if ( a4 )
  {
    v11[5] = a5;
    *((_BYTE *)v11 + 59) = 1;
    v11[4] = a4;
  }
  v11[3] = *((_QWORD *)&FileInformation + 1);
  if ( a4 )
  {
    if ( *((_QWORD *)&FileInformation + 1) )
    {
      if ( (int)sub_140842E88(v11 + 1, v11 + 8) < 0 )
      {
        sub_1406E0C3C(1LL, (__int64)"AslFileMappingCreate");
        *((_DWORD *)v11 + 16) = 3;
      }
      goto LABEL_15;
    }
    sub_1406E0C3C(1LL, (__int64)"AslFileMappingCreate");
    v12 = -1073741811;
LABEL_20:
    sub_14075E448(v11);
    goto LABEL_16;
  }
  *((_DWORD *)v11 + 16) = (*((_QWORD *)&FileInformation + 1) != 0LL) + 1;
LABEL_15:
  *a1 = v11;
  v12 = 0;
LABEL_16:
  if ( DestinationString.Buffer != a2 )
    RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v12;
}
