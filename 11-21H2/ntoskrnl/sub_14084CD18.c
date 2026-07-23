/*
 * XREFs of sub_14084CD18 @ 0x14084CD18
 * Callers:
 *     sub_14084CCD8 @ 0x14084CCD8 (sub_14084CCD8.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 *     sub_1406A5B90 @ 0x1406A5B90 (sub_1406A5B90.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

int sub_14084CD18()
{
  int v0; // edi
  void *v1; // r15
  bool v2; // r12
  __int64 v3; // rbx
  unsigned int v4; // esi
  char *v5; // r14
  int result; // eax
  unsigned int v7; // esi
  char *v8; // r14
  int v9; // eax
  int v10; // esi
  unsigned int v11; // r14d
  bool i; // sf
  bool v13; // zf
  HANDLE v14; // r13
  unsigned __int64 Pool2; // rax
  unsigned __int16 *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // r13
  unsigned __int16 v19; // ax
  __int64 v20; // rax
  unsigned int v21; // r13d
  int v22; // r14d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  size_t Size; // [rsp+20h] [rbp-59h]
  _QWORD *v30; // [rsp+38h] [rbp-41h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  __int128 v33; // [rsp+60h] [rbp-19h]
  __int128 v34; // [rsp+70h] [rbp-9h]
  __int128 v35; // [rsp+80h] [rbp+7h]
  size_t v36; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v37; // [rsp+E8h] [rbp+6Fh]
  void *v38; // [rsp+F0h] [rbp+77h]
  HANDLE v39; // [rsp+F8h] [rbp+7Fh]

  v0 = 0;
  v39 = 0LL;
  *(_QWORD *)&v35 = 0LL;
  v33 = 0LL;
  DWORD2(v35) = 0;
  v1 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  v2 = 1;
  LODWORD(v36) = 0;
  DestinationString = 0LL;
  v30 = 0LL;
  SourceString = 0LL;
  qword_140C0E3E8 = 0LL;
  ExInitializeResourceLite(&stru_140C0E400);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = (char *)&unk_140C0E142;
  do
  {
    *(_DWORD *)(v5 - 2) = 1572864;
    *(_QWORD *)(v5 + 6) = (char *)&unk_140C0E1C0 + 2 * (unsigned int)v3;
    result = RtlIntegerToUnicodeString(v4 + 1537, 0xAu, (PUNICODE_STRING)&unk_140C0E140 + v4);
    if ( result < 0 )
      return result;
    v3 = (unsigned int)(v3 + 12);
    ++v4;
    v5 += 16;
  }
  while ( v4 <= 6 );
  v7 = 0;
  v8 = (char *)&unk_140C0E482;
  do
  {
    *(_QWORD *)(v8 + 6) = (char *)&unk_140C0E1C0 + 2 * v3;
    *(_DWORD *)(v8 - 2) = 1572864;
    result = RtlIntegerToUnicodeString(v7 + 1552, 0xAu, (PUNICODE_STRING)&unk_140C0E480 + v7);
    if ( result < 0 )
      return result;
    v3 = (unsigned int)(v3 + 12);
    ++v7;
    v8 += 16;
  }
  while ( v7 <= 0xF );
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
  LODWORD(v33) = 48;
  *(_QWORD *)&v34 = &DestinationString;
  *((_QWORD *)&v33 + 1) = 0LL;
  DWORD2(v34) = 576;
  v35 = 0LL;
  v9 = sub_1406A5B90();
  v10 = v9;
  if ( v9 == -1073741772 )
    return 0;
  v11 = 0;
  for ( i = v9 < 0; ; i = v10 < 0 )
  {
    v37 = v11;
    if ( i )
      break;
    v14 = v39;
    LODWORD(Size) = 0;
    v10 = sub_1407C1130(v39, v11, 0, 0LL, Size, &v36);
    if ( v10 != -1073741789 )
      goto LABEL_23;
    Pool2 = ExAllocatePool2(256LL, (unsigned int)v36, 1799447891LL);
    v16 = (unsigned __int16 *)Pool2;
    if ( !Pool2 )
      return -1073741801;
    LODWORD(Size) = v36;
    v10 = sub_1407C1130(v14, v11, 0, Pool2, Size, &v36);
    if ( v10 < 0 )
      goto LABEL_23;
    v17 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1799447891LL);
    v30 = v17;
    v18 = v17;
    if ( !v17 )
      return -1073741801;
    *v17 = qword_140C0E3E8;
    qword_140C0E3E8 = (__int64)v17;
    v17[3] = 0LL;
    v19 = v16[6];
    *((_WORD *)v18 + 4) = v19;
    v19 += 2;
    *((_WORD *)v18 + 5) = v19;
    v20 = ExAllocatePool2(256LL, v19, 1799447891LL);
    v18[2] = v20;
    if ( !v20 )
      return -1073741801;
    SourceString.Length = v16[6];
    SourceString.MaximumLength = SourceString.Length;
    SourceString.Buffer = v16 + 8;
    RtlCopyUnicodeString((PUNICODE_STRING)(v18 + 1), &SourceString);
    ExFreePoolWithTag(v16, 0);
    *(_QWORD *)&v34 = v18 + 1;
    *((_QWORD *)&v33 + 1) = v39;
    LODWORD(v33) = 48;
    DWORD2(v34) = 576;
    v35 = 0LL;
    result = sub_1406A5B90();
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&SourceString, L"ObjectNames");
    LODWORD(v33) = 48;
    *((_QWORD *)&v33 + 1) = 0LL;
    *(_QWORD *)&v34 = &SourceString;
    DWORD2(v34) = 576;
    v35 = 0LL;
    v10 = sub_1406A5B90();
    NtClose(0LL);
    v1 = v38;
    v2 = 1;
    if ( v10 == -1073741772 )
    {
      v2 = 0;
      v10 = 0;
    }
    else
    {
LABEL_23:
      v13 = v10 == 0;
      if ( v10 < 0 )
        goto LABEL_10;
    }
    v21 = 0;
    do
    {
      if ( !v2 )
        break;
      v22 = sub_1406A1370(v1, v21, 1u, 0LL, 0, &v36);
      if ( v22 == -1073741789 )
      {
        v23 = ExAllocatePool2(256LL, (unsigned int)v36, 1799447891LL);
        v24 = v23;
        if ( !v23 )
          return -1073741801;
        v22 = sub_1406A1370(v1, v21, 1u, v23, v36, &v36);
        if ( v22 >= 0 )
        {
          v25 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1799447891LL);
          v26 = v25;
          if ( !v25 )
            return -1073741801;
          *v25 = v30[3];
          v30[3] = v25;
          v27 = *(_WORD *)(v24 + 16);
          *((_WORD *)v26 + 4) = v27;
          v27 += 2;
          *((_WORD *)v26 + 5) = v27;
          v28 = ExAllocatePool2(256LL, v27, 1799447891LL);
          v26[2] = v28;
          if ( !v28 )
            return -1073741801;
          SourceString.Length = *(_WORD *)(v24 + 16);
          SourceString.MaximumLength = SourceString.Length;
          SourceString.Buffer = (wchar_t *)(v24 + 20);
          RtlCopyUnicodeString((PUNICODE_STRING)(v26 + 1), &SourceString);
          if ( *(_DWORD *)(v24 + 12) < 4u )
            *((_DWORD *)v26 + 6) = 1552;
          else
            *((_DWORD *)v26 + 6) = *(_DWORD *)(*(unsigned int *)(v24 + 8) + v24);
        }
        ExFreePoolWithTag((PVOID)v24, 0);
      }
      v10 = 0;
      if ( v22 != -2147483622 )
        v10 = v22;
      ++v21;
      v2 = v22 != -2147483622;
    }
    while ( v10 >= 0 );
    v11 = v37;
    v13 = v10 == 0;
LABEL_10:
    if ( v13 && !v2 )
    {
      if ( v1 )
      {
        NtClose(v1);
        v1 = 0LL;
        v38 = 0LL;
      }
    }
    ++v11;
  }
  NtClose(v39);
  if ( v10 != -2147483622 )
    return v10;
  return v0;
}
