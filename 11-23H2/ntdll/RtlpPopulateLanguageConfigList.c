/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x1801144A8
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18000A780 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegGetLanguageSpec @ 0x18000A0A0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18000A970 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlStringCbLengthW @ 0x18000AD54 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x1800A1110 (ZwEnumerateValueKey.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x18011254C (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegValidateConfigNode @ 0x1801142E4 (RtlpMuiRegValidateConfigNode.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  int v4; // r11d
  __int64 v6; // r15
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // r9
  int v10; // ebx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rsi
  __int16 v13; // r12
  int LanguageSpec; // eax
  __int64 v15; // r9
  __int16 v16; // ax
  __int16 v17; // r13
  __int16 v18; // r13
  __int64 v19; // rax
  WCHAR *v20; // rsi
  int v21; // r15d
  int v22; // r15d
  unsigned __int16 v23; // r12
  __int16 v24; // ax
  __int64 v25; // rcx
  int v26; // eax
  __int64 LanguageConfigList; // rax
  int v28; // eax
  __int64 v29; // rax
  char v31; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL);
  LOWORD(v4) = 0;
  *((_QWORD *)v3 + 3) = a3;
  *((_QWORD *)v3 + 4) = a1;
  v6 = a3;
  v7 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v10 = -1073741811;
    goto LABEL_33;
  }
  v7 = *a2;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
  *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  while ( 1 )
  {
    v8 = ZwEnumerateValueKey();
    v4 = 0;
    v10 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -2147483622 )
        goto LABEL_33;
      goto LABEL_29;
    }
    if ( *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
    {
      v11 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
      if ( v11 + 24 <= 0x200 )
      {
        v12 = (unsigned __int64)v11 >> 1;
        v13 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v12);
        *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v12) = 0;
        LanguageSpec = RtlpMuiRegGetLanguageSpec(
                         v6,
                         (const WCHAR *)v3 + 58,
                         (char *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL),
                         v9,
                         (_WORD *)v3 + 4);
        v4 = 0;
        v10 = LanguageSpec;
        if ( LanguageSpec < 0 )
          goto LABEL_29;
        v16 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v17 = *v3;
        *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v12) = v13;
        v18 = v17 << 14;
        *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v16;
        v19 = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
        *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0LL;
        *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v18;
        v20 = (WCHAR *)&v3[v19 + 96];
        if ( !v20 )
          goto LABEL_27;
        v21 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
        if ( !v21 )
        {
          v6 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
LABEL_27:
          v10 = -1073741811;
          goto LABEL_29;
        }
        v22 = 2 * v21;
        v23 = 0;
        do
        {
          if ( *v20 == (_WORD)v4 || v22 <= 0 || v23 >= 3u )
            break;
          if ( (int)RtlpMuiRegGetLanguageSpec(
                      *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                      v20,
                      (char *)v3 + 1,
                      v15,
                      (_WORD *)v3 + 6) >= 0 )
          {
            v24 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                             + 1) & 3) << (2 * v23)) | v18 & ~(3 << (2 * v23));
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v23) = v24;
            v18 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
          }
          v10 = RtlStringCbLengthW(v20, v22, (_QWORD *)v3 + 6);
          if ( v10 < 0 )
          {
            v6 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            goto LABEL_29;
          }
          v25 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
          v22 += -2 - v25;
          ++v23;
          v20 = (WCHAR *)((char *)v20 + v25 + 2);
        }
        while ( v20 );
        v6 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        v26 = RtlpMuiRegValidateConfigNode(v6, (__int64)(v3 + 56));
        v4 = 0;
        v10 = v26;
        if ( v26 < 0 )
          goto LABEL_29;
        if ( !v7 )
        {
          LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(-1);
          *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = LanguageConfigList;
          if ( !LanguageConfigList )
          {
            v10 = -1073741801;
            goto LABEL_35;
          }
          *a2 = LanguageConfigList;
        }
        v28 = RtlpMuiRegConfigListAddLanguage((__int64 *)v3 + 2, (__int16 *)v3 + 28);
        v7 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v4 = 0;
        v10 = v28;
        if ( v28 >= 0 )
          *a2 = v7;
LABEL_29:
        ++*(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        if ( v10 == -2147483622 )
          break;
      }
    }
  }
  v10 = v4;
LABEL_33:
  if ( !v7 && v10 != -1073741811 )
  {
LABEL_35:
    v29 = RtlpMuiRegCreateLanguageConfigList(1);
    LOWORD(v4) = 0;
    *a2 = v29;
    v7 = v29;
    if ( !v29 )
      v10 = -1073741801;
  }
  if ( v10 < 0 && v7 )
    *(_WORD *)(v7 + 4) = v4;
  return (unsigned int)v10;
}
