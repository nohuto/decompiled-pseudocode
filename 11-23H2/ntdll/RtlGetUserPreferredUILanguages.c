/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x1800810E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x1800121CC (LdrpCreateLangFallbackList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18001231C (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800125EC (RtlpMuiRegFreeLanguageList.c)
 *     InitializeTEBUserLangList @ 0x180012A18 (InitializeTEBUserLangList.c)
 *     LdrpMergeLangFallbackLists @ 0x180013DA0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014788 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180082250 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800B035C (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x18010ACB0 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlGetUserPreferredUILanguages(int a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4, unsigned int *a5)
{
  unsigned int *v5; // rsi
  int v8; // ebx
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // r12d
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // r14
  _QWORD *v15; // r15
  __int64 v16; // rax
  int v17; // eax
  int SystemPreferredUILanguages; // ebx
  __int64 v19; // r14
  int v20; // eax
  int v21; // eax
  _BYTE *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r8d
  int v25; // esi
  __int64 v26; // rax
  _BYTE *v27; // rdx
  __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  char v32; // [rsp+28h] [rbp-51h]
  bool v33; // [rsp+58h] [rbp-21h]
  __int16 v34; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v35; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v36; // [rsp+64h] [rbp-15h]
  __int64 v37; // [rsp+68h] [rbp-11h] BYREF
  __int64 v38; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v39; // [rsp+78h] [rbp-1h]
  _QWORD *v40; // [rsp+80h] [rbp+7h] BYREF
  __int64 v41; // [rsp+88h] [rbp+Fh]
  unsigned int v43; // [rsp+E0h] [rbp+67h]

  v5 = a5;
  v34 = -1;
  v37 = 0LL;
  v8 = a1;
  v38 = 0LL;
  v35 = 0;
  v36 = 0;
  v40 = 0LL;
  v33 = 0;
  if ( a5 )
    v36 = *a5;
  if ( a2 )
  {
    v8 = 4104;
    v33 = (a1 & 0x80) != 0;
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( a5 )
        *a5 = 2;
      goto LABEL_40;
    }
  }
  if ( (v8 & 0xFFFF6771) != 0 )
    return 3221225485LL;
  v9 = v8 | 0x80;
  if ( (v8 & 0x9880) != 0 )
    v9 = v8;
  if ( (v9 & 0xC) == 0xC )
    return 3221225485LL;
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v11 = v10 >> 1;
  LOBYTE(v11) = (v10 & 2) == 0;
  v39 = v11;
  v12 = v10 & 0x9880;
  if ( (v10 & 0x9880) != 0 )
  {
    if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 )
      return 3221225485LL;
  }
  else
  {
    v10 |= 0x8000u;
  }
  if ( !a5 || *a5 && !a4 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo((__int64 *)&v40);
  if ( (int)result < 0 )
    return result;
  if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v40, a2, 1, &v34) < 0 )
  {
    SystemPreferredUILanguages = -1073741772;
    *a5 = 2;
    goto LABEL_40;
  }
  InitializeTEBUserLangList(v10 & 1, (__int64)v40);
  v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  v15 = v40;
  if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
    v16 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
  else
    v16 = v40[6];
  v41 = v16;
  if ( (v10 & 0x800) != 0 )
  {
    if ( !v14 )
      goto LABEL_55;
    *a5 = v36;
    v21 = LdrpConvertLangFallbackListToMultiSz(v14, (__int64)v15, a4, a5, v10, v11, &v35);
    SystemPreferredUILanguages = v21;
    if ( v21 >= 0 && *(_WORD *)(v14 + 4) )
      goto LABEL_30;
    if ( v21 != -1073741789 )
    {
LABEL_55:
      *a5 = v36;
      SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages((v10 & 8) != 0 ? 2056 : 2052, a2, &v35, a4, a5);
    }
    goto LABEL_29;
  }
  v17 = LdrpCreateLangFallbackList(&v37, (__int64)v40, 0x19u, 0);
  SystemPreferredUILanguages = v17;
  if ( (v10 & 0x8080) != 0 )
  {
    if ( v17 >= 0 )
    {
      if ( !v37 )
        goto LABEL_30;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v10 | 0x30, v15, &v37, 0LL, 0LL, v14, v15[7], v41, 1);
      if ( SystemPreferredUILanguages >= 0 )
      {
        v19 = v37;
        *a5 = v36;
        v20 = LdrpConvertLangFallbackListToMultiSz(v19, (__int64)v15, a4, a5, v10, v11, &v35);
        SystemPreferredUILanguages = v20;
        if ( v20 >= 0 && *(_WORD *)(v19 + 4) || v20 == -1073741789 )
          goto LABEL_25;
        *a5 = v36;
        v31 = (v10 & 8) != 0 ? 8 : 4;
        LODWORD(v31) = v31 | 0x8000;
        v30 = RtlGetSystemPreferredUILanguages(v31, a2, &v35, a4, a5);
        goto LABEL_90;
      }
    }
LABEL_91:
    v19 = v37;
    goto LABEL_25;
  }
  if ( v17 < 0 )
    goto LABEL_91;
  if ( !v37 )
    goto LABEL_30;
  SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v10 | 0x20, v15, &v37, 0LL, 0LL, v14, 0LL, v41, 0);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_91;
  SystemPreferredUILanguages = LdrpCreateLangFallbackList(&v38, (__int64)v15, 0x19u, 0);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_91;
  v19 = v37;
  if ( v38 )
  {
    if ( a2 )
    {
      if ( v34 != -1 )
      {
        LOBYTE(v11) = v39;
        v22 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * v34);
        if ( v22 )
        {
          if ( (*v22 & 2) != 0 || v33 && (*v22 & 4) != 0 )
            LOBYTE(v11) = 0;
          if ( *(_BYTE *)(v38 + 8) )
            v23 = v15[5];
          else
            LODWORD(v23) = v41;
          LdrpMergeParentBaseLanguagesToList((unsigned int)&v38, (_DWORD)v22, (_DWORD)v15, v23, v32);
        }
      }
    }
    else
    {
      v24 = 0;
      v43 = 0;
      if ( *(_WORD *)(v37 + 4) )
      {
        LOBYTE(v11) = v39;
        v25 = v41;
        do
        {
          v26 = *(_QWORD *)(v19 + 24);
          if ( *(_WORD *)(v26 + 6LL * v24) == 2 )
          {
            v27 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v24 + 4));
            if ( (*v27 & 2) != 0 )
              LOBYTE(v11) = 0;
            if ( (*v27 & 6) != 0 )
            {
              if ( *(_BYTE *)(v38 + 8) )
                v28 = v15[5];
              else
                LODWORD(v28) = v25;
              v29 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v38, (_DWORD)v27, (_DWORD)v15, v28, v32);
              v24 = v43;
              SystemPreferredUILanguages = v29;
              if ( v29 >= 0 )
                break;
            }
          }
          v43 = ++v24;
        }
        while ( v24 < *(unsigned __int16 *)(v19 + 4) );
        v5 = a5;
      }
      if ( !*(_WORD *)(*(_QWORD *)(v19 + 24) + 6LL * v24) || SystemPreferredUILanguages < 0 )
      {
        *v5 = v36;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages((v10 & 8) != 0 ? 4104 : 4100, 0LL, &v35, a4, v5);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_25;
      }
    }
    v30 = LdrpConvertLangFallbackListToMultiSz(v38, (__int64)v15, a4, v5, v10, v11, &v35);
LABEL_90:
    SystemPreferredUILanguages = v30;
  }
LABEL_25:
  if ( v19 )
    RtlpMuiRegFreeLanguageList(v19);
  if ( v38 )
    RtlpMuiRegFreeLanguageList(v38);
LABEL_29:
  if ( SystemPreferredUILanguages < 0 )
  {
LABEL_40:
    if ( a4 && v36 )
    {
      if ( v36 == 1 )
        *(_WORD *)a4 = 0;
      else
        *a4 = 0;
    }
    return (unsigned int)SystemPreferredUILanguages;
  }
LABEL_30:
  *a3 = v35;
  return (unsigned int)SystemPreferredUILanguages;
}
