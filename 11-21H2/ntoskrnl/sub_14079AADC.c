/*
 * XREFs of sub_14079AADC @ 0x14079AADC
 * Callers:
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     sub_1406EF58C @ 0x1406EF58C (sub_1406EF58C.c)
 *     sub_1406F0C9C @ 0x1406F0C9C (sub_1406F0C9C.c)
 *     sub_1406F0FCC @ 0x1406F0FCC (sub_1406F0FCC.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1408570CC @ 0x1408570CC (sub_1408570CC.c)
 *     sub_14085CC28 @ 0x14085CC28 (sub_14085CC28.c)
 *     sub_14085E858 @ 0x14085E858 (sub_14085E858.c)
 *     sub_1409EDE34 @ 0x1409EDE34 (sub_1409EDE34.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14079AADC(__int64 a1)
{
  __int64 v1; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  wchar_t *Pool2; // rax
  WCHAR *v7; // rdi
  int v8; // eax
  WCHAR *v9; // rcx
  WCHAR i; // ax
  __int64 v11; // rax
  const WCHAR *v12; // rdx
  int v13; // edi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  bool v15; // [rsp+80h] [rbp+8h] BYREF

  v1 = a1 + 360;
  DestinationString = 0LL;
  if ( *(_QWORD *)(a1 + 360) )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 368) )
    goto LABEL_23;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 144) + 2 * v4) );
  v5 = 2LL * (unsigned int)(v4 + 9) + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v5, 1350005829LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v8 = sub_1402E1280(Pool2, v5, L"EtwRT%ws.etl", *(_QWORD *)(a1 + 144));
  v9 = v7;
  if ( !v8 )
  {
    for ( i = *v7; i; i = *v9 )
    {
      if ( i == 34 || i == 47 || i == 58 || i == 60 || i > 0x3Du && (i <= 0x3Fu || i == 92 || i == 124) )
        *v9 = 95;
      ++v9;
    }
    v11 = *(_QWORD *)(a1 + 1096);
    v12 = L"%SystemRoot%\\system32\\Logfiles\\WMI\\RtBackup\\";
    if ( *(_QWORD *)(v11 + 4112) )
      v12 = *(const WCHAR **)(v11 + 4112);
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 368), v12) )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      v13 = sub_1406F0FCC(
              1,
              (UNICODE_STRING *)(a1 + 368),
              0,
              &DestinationString.Length,
              *(_QWORD *)(a1 + 1096) == qword_140D05008);
      if ( v13 >= 0 )
      {
LABEL_23:
        v15 = (*(_BYTE *)(a1 + 816) & 1) != 0;
        v13 = sub_1406F0C9C(v1, a1 + 368, &v15, 0LL, 1, 1, 0LL);
        if ( v13 >= 0 )
        {
          *(_QWORD *)(a1 + 392) = 72LL;
          *(_QWORD *)(a1 + 384) = 72LL;
          *(_QWORD *)(a1 + 400) = 72LL;
          if ( (*(_DWORD *)(a1 + 816) & 1) != 0 )
          {
            v13 = sub_1408570CC(a1);
            if ( v13 < 0 || *(_DWORD *)(a1 + 424) && (v13 = sub_14085E858(a1, a1 + 304), v13 < 0) )
            {
              sub_14085CC28(a1);
              sub_1409EDE34(a1);
              *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
              *(_DWORD *)(a1 + 448) = 3;
              *(_DWORD *)(a1 + 424) = 0;
              *(_QWORD *)(a1 + 408) = 0LL;
              sub_1406EF58C(a1, 4u, 0xC0000102);
              v13 = 0;
            }
          }
        }
      }
    }
    else
    {
      v13 = -1073741801;
    }
    RtlFreeUnicodeString(&DestinationString);
    return (unsigned int)v13;
  }
  ExFreePoolWithTag(v7, 0);
  return 3221225485LL;
}
