/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x180083ED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180048CD4 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpCreateLangFallbackList @ 0x180049BE8 (LdrpCreateLangFallbackList.c)
 *     InitializeTEBUserLangList @ 0x180049E8C (InitializeTEBUserLangList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     LdrpMergeLangFallbackLists @ 0x18004AB28 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18004B090 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007E780 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800FA0D0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x180109740 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlGetUserPreferredUILanguages(int a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4, unsigned int *a5)
{
  unsigned int *v5; // rsi
  _DWORD *v6; // r13
  int v8; // ebx
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // r12d
  int v12; // edx
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
  __int64 v26; // r10
  _BYTE *v27; // rdx
  __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  char v31; // [rsp+28h] [rbp-51h]
  bool v32; // [rsp+58h] [rbp-21h]
  __int16 v33; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v34; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v35; // [rsp+64h] [rbp-15h]
  __int64 v36; // [rsp+68h] [rbp-11h] BYREF
  __int64 v37; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v38; // [rsp+78h] [rbp-1h]
  _QWORD *v39; // [rsp+80h] [rbp+7h] BYREF
  __int64 v40; // [rsp+88h] [rbp+Fh]
  unsigned int v42; // [rsp+E0h] [rbp+67h]

  v5 = a5;
  v36 = 0LL;
  v37 = 0LL;
  v6 = a4;
  v34 = 0;
  v35 = 0;
  v8 = a1;
  v33 = -1;
  v39 = 0LL;
  if ( a5 )
    v35 = *a5;
  if ( a2 )
  {
    v8 = 4104;
    v32 = (a1 & 0x80) != 0;
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( a5 )
        *a5 = 2;
      goto LABEL_40;
    }
  }
  else
  {
    v32 = 0;
    if ( (a1 & 0xFFFF6771) != 0 )
      return 3221225485LL;
  }
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
  v38 = v11;
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
  if ( !a5 || *a5 && !v6 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo((__int64 *)&v39);
  if ( (int)result >= 0 )
  {
    if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v39, a2, 1, &v33) < 0 )
    {
      SystemPreferredUILanguages = -1073741772;
      *a5 = 2;
      goto LABEL_40;
    }
    InitializeTEBUserLangList(v10 & 1, (__int64)v39);
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v15 = v39;
    if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
      v16 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v16 = v39[6];
    v40 = v16;
    if ( (v10 & 0x800) != 0 )
    {
      if ( !v14 )
        goto LABEL_55;
      *a5 = v35;
      v21 = LdrpConvertLangFallbackListToMultiSz(v14, (__int64)v15, v6, a5, v10, v11, &v34);
      SystemPreferredUILanguages = v21;
      if ( v21 >= 0 && *(_WORD *)(v14 + 4) )
        goto LABEL_30;
      if ( v21 != -1073741789 )
      {
LABEL_55:
        *a5 = v35;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       (v10 & 8) != 0 ? 2056 : 2052,
                                       a2,
                                       &v34,
                                       (__int64)v6,
                                       a5);
      }
      goto LABEL_29;
    }
    v17 = LdrpCreateLangFallbackList(&v36, (__int64)v39, 0x19u, 0);
    SystemPreferredUILanguages = v17;
    if ( (v10 & 0x8080) != 0 )
    {
      if ( v17 >= 0 )
      {
        if ( !v36 )
          goto LABEL_30;
        SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                       v10 | 0x30,
                                       (__int64)v15,
                                       &v36,
                                       0LL,
                                       0LL,
                                       v14,
                                       v15[7],
                                       v40,
                                       1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v19 = v36;
          *a5 = v35;
          v20 = LdrpConvertLangFallbackListToMultiSz(v19, (__int64)v15, v6, a5, v10, v11, &v34);
          SystemPreferredUILanguages = v20;
          if ( v20 >= 0 && *(_WORD *)(v19 + 4) || v20 == -1073741789 )
            goto LABEL_25;
          *a5 = v35;
          v30 = RtlGetSystemPreferredUILanguages(((v10 & 8) != 0 ? 8 : 4) | 0x8000u, a2, &v34, (__int64)v6, a5);
          goto LABEL_90;
        }
      }
    }
    else if ( v17 >= 0 )
    {
      if ( !v36 )
        goto LABEL_30;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                     v10 | 0x20,
                                     (__int64)v15,
                                     &v36,
                                     0LL,
                                     0LL,
                                     v14,
                                     0LL,
                                     v40,
                                     0);
      if ( SystemPreferredUILanguages >= 0 )
      {
        SystemPreferredUILanguages = LdrpCreateLangFallbackList(&v37, (__int64)v15, 0x19u, 0);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v19 = v36;
          if ( !v37 )
          {
LABEL_25:
            if ( v19 )
              RtlpMuiRegFreeLanguageList(v19);
            if ( v37 )
              RtlpMuiRegFreeLanguageList(v37);
LABEL_29:
            if ( SystemPreferredUILanguages < 0 )
            {
LABEL_40:
              if ( v6 && v35 )
              {
                if ( v35 == 1 )
                  *(_WORD *)v6 = 0;
                else
                  *v6 = 0;
              }
              return (unsigned int)SystemPreferredUILanguages;
            }
LABEL_30:
            *a3 = v34;
            return (unsigned int)SystemPreferredUILanguages;
          }
          if ( a2 )
          {
            if ( v33 != -1 )
            {
              LOBYTE(v11) = v38;
              v22 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * v33);
              if ( v22 )
              {
                if ( (*v22 & 2) != 0 || v32 && (*v22 & 4) != 0 )
                  LOBYTE(v11) = 0;
                if ( *(_BYTE *)(v37 + 8) )
                  v23 = v15[5];
                else
                  LODWORD(v23) = v40;
                LdrpMergeParentBaseLanguagesToList((unsigned int)&v37, (_DWORD)v22, (_DWORD)v15, v23, v31);
              }
            }
          }
          else
          {
            v24 = 0;
            v42 = 0;
            if ( *(_WORD *)(v36 + 4) )
            {
              LOBYTE(v11) = v38;
              v25 = v40;
              do
              {
                v26 = *(_QWORD *)(v19 + 24);
                if ( *(_WORD *)(v26 + 6LL * v24) == 2 )
                {
                  if ( (*(_BYTE *)(28LL * *(__int16 *)(v26 + 6LL * v24 + 4) + *(_QWORD *)(v15[3] + 16LL)) & 2) != 0 )
                    LOBYTE(v11) = 0;
                  v27 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v24 + 4));
                  if ( (*v27 & 6) != 0 )
                  {
                    if ( *(_BYTE *)(v37 + 8) )
                      v28 = v15[5];
                    else
                      LODWORD(v28) = v25;
                    v29 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v37, (_DWORD)v27, (_DWORD)v15, v28, v31);
                    v24 = v42;
                    SystemPreferredUILanguages = v29;
                    if ( v29 >= 0 )
                      break;
                  }
                }
                v42 = ++v24;
              }
              while ( v24 < *(unsigned __int16 *)(v19 + 4) );
              v5 = a5;
              v6 = a4;
            }
            if ( !*(_WORD *)(*(_QWORD *)(v19 + 24) + 6LL * v24) || SystemPreferredUILanguages < 0 )
            {
              *v5 = v35;
              SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                             (v10 & 8) != 0 ? 4104 : 4100,
                                             0LL,
                                             &v34,
                                             (__int64)v6,
                                             v5);
              if ( SystemPreferredUILanguages >= 0 )
                goto LABEL_25;
            }
          }
          v30 = LdrpConvertLangFallbackListToMultiSz(v37, (__int64)v15, v6, v5, v10, v11, &v34);
LABEL_90:
          SystemPreferredUILanguages = v30;
          goto LABEL_25;
        }
      }
    }
    v19 = v36;
    goto LABEL_25;
  }
  return result;
}
