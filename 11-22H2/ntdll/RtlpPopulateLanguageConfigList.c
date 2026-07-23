/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x180112FF8
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18000A9A0 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegGetLanguageSpec @ 0x18000A2C0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18000AB90 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlStringCbLengthW @ 0x18000AF74 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x18009F050 (ZwEnumerateValueKey.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x18011109C (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegValidateConfigNode @ 0x180112E34 (RtlpMuiRegValidateConfigNode.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(HANDLE KeyHandle, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  int v4; // r11d
  __int64 v6; // r15
  HANDLE v7; // r10
  __int64 v8; // rdi
  ULONG v9; // eax
  NTSTATUS v10; // eax
  __int64 v11; // r9
  int v12; // ebx
  unsigned int v13; // ecx
  unsigned __int64 v14; // rsi
  __int16 v15; // r12
  int LanguageSpec; // eax
  __int64 v17; // r9
  __int16 v18; // ax
  __int16 v19; // r13
  __int16 v20; // r13
  __int64 v21; // rax
  WCHAR *v22; // rsi
  int v23; // r15d
  int v24; // r15d
  unsigned __int16 v25; // r12
  __int16 v26; // ax
  __int64 v27; // rcx
  int v28; // eax
  __int64 LanguageConfigList; // rax
  int v30; // eax
  __int64 v31; // rax
  char v33; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL);
  LOWORD(v4) = 0;
  *((_QWORD *)v3 + 3) = a3;
  *((_QWORD *)v3 + 4) = KeyHandle;
  v6 = a3;
  v7 = KeyHandle;
  v8 = 0LL;
  if ( !KeyHandle || !a2 || !a3 )
  {
    v12 = -1073741811;
    goto LABEL_33;
  }
  v8 = *a2;
  v9 = 0;
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = ZwEnumerateValueKey(v7, v9, KeyValueFullInformation, v3 + 96, 0x200u, (PULONG)v3 + 10);
      v4 = 0;
      v12 = v10;
      if ( v10 < 0 )
      {
        if ( v10 != -2147483622 )
          goto LABEL_33;
        goto LABEL_29;
      }
      v9 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
      v7 = *(HANDLE *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      if ( *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
      {
        v13 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
        v9 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        if ( v13 + 24 <= 0x200 )
          break;
      }
    }
    v14 = (unsigned __int64)v13 >> 1;
    v15 = *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v14);
    *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v14) = 0;
    LanguageSpec = RtlpMuiRegGetLanguageSpec(
                     v6,
                     (const WCHAR *)v3 + 58,
                     (char *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL),
                     v11,
                     (_WORD *)v3 + 4);
    v4 = 0;
    v12 = LanguageSpec;
    if ( LanguageSpec < 0 )
      goto LABEL_29;
    v18 = *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    v19 = *v3;
    *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v14) = v15;
    v20 = v19 << 14;
    *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v18;
    v21 = *(unsigned int *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
    *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0LL;
    *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v20;
    v22 = (WCHAR *)&v3[v21 + 96];
    if ( !v22 )
      goto LABEL_27;
    v23 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
    if ( !v23 )
    {
      v6 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
LABEL_27:
      v12 = -1073741811;
      goto LABEL_29;
    }
    v24 = 2 * v23;
    v25 = 0;
    do
    {
      if ( *v22 == (_WORD)v4 || v24 <= 0 || v25 >= 3u )
        break;
      if ( (int)RtlpMuiRegGetLanguageSpec(
                  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                  v22,
                  (char *)v3 + 1,
                  v17,
                  (_WORD *)v3 + 6) >= 0 )
      {
        v26 = *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
        *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                         + 1) & 3) << (2 * v25)) | v20 & ~(3 << (2 * v25));
        *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v25) = v26;
        v20 = *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
      }
      v12 = RtlStringCbLengthW(v22, v24, (_QWORD *)v3 + 6);
      if ( v12 < 0 )
      {
        v6 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        goto LABEL_29;
      }
      v27 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
      v24 += -2 - v27;
      ++v25;
      v22 = (WCHAR *)((char *)v22 + v27 + 2);
    }
    while ( v22 );
    v6 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
    v28 = RtlpMuiRegValidateConfigNode(v6, (__int64)(v3 + 56));
    v4 = 0;
    v12 = v28;
    if ( v28 < 0 )
      goto LABEL_29;
    if ( !v8 )
    {
      LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(-1);
      *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = LanguageConfigList;
      if ( !LanguageConfigList )
      {
        v12 = -1073741801;
        goto LABEL_35;
      }
      *a2 = LanguageConfigList;
    }
    v30 = RtlpMuiRegConfigListAddLanguage((__int64 *)v3 + 2, (__int16 *)v3 + 28);
    v8 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    v4 = 0;
    v12 = v30;
    if ( v30 >= 0 )
      *a2 = v8;
LABEL_29:
    v9 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 4) + 1;
    *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v9;
    if ( v12 == -2147483622 )
      break;
    v7 = *(HANDLE *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
  }
  v12 = v4;
LABEL_33:
  if ( !v8 && v12 != -1073741811 )
  {
LABEL_35:
    v31 = RtlpMuiRegCreateLanguageConfigList(1);
    LOWORD(v4) = 0;
    *a2 = v31;
    v8 = v31;
    if ( !v31 )
      v12 = -1073741801;
  }
  if ( v12 < 0 && v8 )
    *(_WORD *)(v8 + 4) = v4;
  return (unsigned int)v12;
}
