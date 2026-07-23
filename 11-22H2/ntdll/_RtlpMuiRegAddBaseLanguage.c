/*
 * XREFs of _RtlpMuiRegAddBaseLanguage @ 0x180113604
 * Callers:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180114000 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlpMuiRegGetLanguageSpec @ 0x18000A2C0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpLangNameInMultiSzString @ 0x1800104D0 (RtlpLangNameInMultiSzString.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180111FC0 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180113934 (_RtlpMuiRegInitAnyLanguage.c)
 */

__int64 __fastcall RtlpMuiRegAddBaseLanguage(__int64 a1, _WORD *a2, unsigned int a3, __int64 a4, wchar_t *String2)
{
  char v6; // r15
  wchar_t *v7; // rbx
  char v8; // si
  unsigned __int64 v9; // r12
  __int16 v10; // ax
  __int64 v11; // r9
  int v12; // esi
  int v13; // edi
  int LanguageSpec; // eax
  char v15; // r12
  __int16 v16; // r13
  __int64 v17; // rsi
  int v18; // ecx
  __int16 v19; // dx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int16 v22; // dx
  __int64 v23; // r8
  _WORD *v24; // rcx
  char v26[4]; // [rsp+30h] [rbp-51h] BYREF
  __int16 v27[2]; // [rsp+34h] [rbp-4Dh] BYREF
  char v28; // [rsp+38h] [rbp-49h] BYREF
  char v29; // [rsp+39h] [rbp-48h]
  int v30; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v31; // [rsp+40h] [rbp-41h]
  int inited; // [rsp+48h] [rbp-39h]
  signed int v33; // [rsp+4Ch] [rbp-35h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-31h] BYREF
  _WORD *v35; // [rsp+60h] [rbp-21h]
  _WORD v36[2]; // [rsp+68h] [rbp-19h] BYREF
  __int16 v37; // [rsp+6Ch] [rbp-15h]
  __int16 v38; // [rsp+6Eh] [rbp-13h]
  __int16 v39; // [rsp+70h] [rbp-11h]
  _WORD v40[10]; // [rsp+74h] [rbp-Dh] BYREF

  v31 = a1;
  v33 = a3;
  v35 = a2;
  v26[0] = 0;
  if ( a1 && a2 && a4 && a3 <= 3 )
  {
    v6 = 1;
    v7 = (wchar_t *)(a4 + *(unsigned int *)(a4 + 8));
    if ( !*(_DWORD *)(a4 + 12) || !v7 || (v8 = 1, !*v7) )
      v8 = 0;
    v9 = (unsigned __int64)*(unsigned int *)(a4 + 16) >> 1;
    v10 = *(_WORD *)(a4 + 2 * v9 + 20);
    *(_WORD *)(a4 + 2 * v9 + 20) = 0;
    LOWORD(v30) = v10;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a4 + 20));
    v27[0] = 0;
    if ( v8 )
    {
      v7[(unsigned __int64)*(unsigned int *)(a4 + 12) >> 1] = 0;
      inited = RtlpMuiRegInitAnyLanguage(v31, v36);
      v12 = inited;
      if ( inited < 0 )
        return (unsigned int)v12;
      v29 = 0;
      v36[0] ^= (*v35 ^ v36[0]) & 0x18;
      *(_WORD *)(a4 + 2 * v9 + 20) = v30;
      v13 = 0;
      if ( String2 && *String2 && RtlpLangNameInMultiSzString(v7, String2) )
      {
        LanguageSpec = RtlpMuiRegGetLanguageSpec(v31, String2, &v28, 0LL, &v30);
        v15 = v28;
        v16 = v30;
        if ( LanguageSpec >= 0 )
        {
          v40[0] = v30;
          v29 = 1;
          v13 = 1;
          v39 = v39 & 0xFFFC | v28 & 3;
        }
      }
      else
      {
        v16 = 0;
        v15 = 0;
      }
      if ( v7 )
      {
        v17 = v31;
        v18 = 2 * v13;
        v30 = 2 * v13;
        *(_QWORD *)&DestinationString.Length = &v40[v13];
        do
        {
          if ( !*v7 || v18 >= 8 )
            break;
          if ( (int)RtlpMuiRegGetLanguageSpec(v17, v7, v26, 0LL, v27) < 0 || v29 && v15 == v26[0] && v16 == v27[0] )
          {
            v18 = v30;
          }
          else
          {
            ++v13;
            v18 = v30 + 2;
            v19 = ((v26[0] & 3) << v30) | v39 & ~(3 << v30);
            v30 += 2;
            v39 = v19;
            v20 = *(_QWORD *)&DestinationString.Length;
            **(_WORD **)&DestinationString.Length = v27[0];
            *(_QWORD *)&DestinationString.Length = v20 + 2;
          }
          v21 = -1LL;
          do
            ++v21;
          while ( v7[v21] );
          v7 += v21 + 1;
        }
        while ( v7 );
        v12 = inited;
      }
      if ( v13 < 0 )
      {
        v22 = v37;
        if ( v37 )
        {
LABEL_41:
          v23 = v33;
          v24 = v35;
          v35[4] = v35[4] & ~(3 << (2 * v33)) | ((v6 & 3) << (2 * v33));
          v24[v23 + 6] = v22;
          return (unsigned int)v12;
        }
        v22 = v38;
        if ( v38 > 0 )
        {
          v6 = 3;
          goto LABEL_41;
        }
        return (unsigned int)-1073741823;
      }
      v36[0] &= ~0x20u;
      v12 = RtlpMuiRegGetOrAddLangInfo((__int64 *)(v31 + 24), (__int64)v36, v27);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v6 = 2;
    }
    else
    {
      v12 = RtlpMuiRegGetLanguageSpec(v31, DestinationString.Buffer, v26, v11, v27);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v6 = v26[0];
    }
    v22 = v27[0];
    goto LABEL_41;
  }
  return 3221225485LL;
}
