/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x180081BE0
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180080A70 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x1800123DC (LdrpCreateLangFallbackList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18001252C (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800127FC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012AD4 (RtlpSetProcUserMachineLangList.c)
 *     LdrpMergeLangFallbackLists @ 0x180013FB0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014994 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800AE28C (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x180109810 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlGetSystemPreferredUILanguages(int a1, const WCHAR *a2, _DWORD *a3, __int64 a4, unsigned int *a5)
{
  unsigned int *v7; // rcx
  __int64 v9; // r15
  unsigned int v10; // r14d
  __int16 v11; // di
  int v12; // eax
  int v13; // r14d
  char v14; // r12
  int v15; // eax
  unsigned int v16; // ebx
  __int64 result; // rax
  _QWORD *v18; // rdi
  int v19; // eax
  int v20; // ebx
  unsigned int *v21; // r9
  __int64 v22; // rsi
  int v23; // eax
  int v24; // ebx
  bool v25; // zf
  int v26; // eax
  char v27; // r15
  _BYTE *v28; // rdx
  __int64 v29; // r9
  unsigned int v30; // r8d
  __int64 v31; // rax
  _BYTE *v32; // rdx
  __int64 v33; // r9
  char v34; // [rsp+28h] [rbp-51h]
  char v35; // [rsp+30h] [rbp-49h]
  bool v36; // [rsp+58h] [rbp-21h]
  __int16 v37; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v38; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v39; // [rsp+64h] [rbp-15h]
  __int64 v40; // [rsp+68h] [rbp-11h] BYREF
  __int64 v41; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v42; // [rsp+78h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v45; // [rsp+E0h] [rbp+67h]

  v37 = -1;
  v38 = 0;
  v7 = a5;
  v40 = 0LL;
  v9 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v10 = *a5;
  if ( a2 )
  {
    v24 = a1 & 0x80;
    v11 = 4104;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
    {
      v20 = -1073741772;
LABEL_34:
      if ( a4 )
      {
        if ( v10 )
          *(_WORD *)a4 = 0;
        if ( v10 > 1 )
          *(_WORD *)(a4 + 2) = 0;
      }
      return (unsigned int)v20;
    }
    v7 = a5;
    v25 = v24 == 0;
    a1 = 4104;
    v36 = !v25;
  }
  else
  {
    v36 = 0;
    v11 = a1;
    if ( (a1 & 0xFFFF6373) != 0 )
      return 3221225485LL;
  }
  v12 = a1 | 0x80;
  if ( (v11 & 0x9880) != 0 )
    v12 = a1;
  if ( (v12 & 0xC) == 0xC )
    return 3221225485LL;
  v13 = v12 | 8;
  if ( (v12 & 0xC) != 0 )
    v13 = v12;
  v14 = (v13 & 0x400) == 0;
  v15 = v13 & 0x9880;
  if ( (v13 & 0x9880) != 0 )
  {
    if ( v15 != 128 && v15 != 2048 && v15 != 4096 && v15 != 0x8000 )
      return 3221225485LL;
  }
  else
  {
    v13 |= 0x8000u;
  }
  v16 = *v7;
  v39 = v16;
  if ( v16 && !a4 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo((__int64 *)&v42);
  if ( (int)result < 0 )
    return result;
  v18 = v42;
  if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v42, a2, 0, &v37) < 0 )
  {
    v20 = -1073741772;
LABEL_31:
    v10 = v39;
    goto LABEL_34;
  }
  result = RtlpSetProcUserMachineLangList((__int64)v18, 0);
  if ( (int)result < 0 )
    return result;
  if ( (v13 & 0x800) != 0 )
  {
    *a5 = v16;
    v20 = LdrpConvertLangFallbackListToMultiSz(v18[7], (__int64)v18, (_DWORD *)a4, a5, v13, v14, &v38);
    if ( v20 >= 0 && v38 )
      goto LABEL_27;
    v20 = LdrpCreateLangFallbackList(&v40, (__int64)v18, 0x19u, 1);
    if ( v20 >= 0 )
    {
      v20 = LdrpMergeLangFallbackLists(v13 | 0x30u, v18, &v40, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      if ( v20 >= 0 )
      {
        v21 = a5;
        *a5 = v39;
        goto LABEL_20;
      }
    }
    goto LABEL_80;
  }
  v19 = LdrpCreateLangFallbackList(&v40, (__int64)v18, 0x19u, 1);
  v20 = v19;
  if ( (v13 & 0x8080) != 0 )
  {
    if ( v19 >= 0 )
    {
      v20 = LdrpMergeLangFallbackLists(v13 | 0x30u, v18, &v40, 0LL, 0LL, 0LL, v18[7], 0LL, 1);
      if ( v20 >= 0 )
      {
        v21 = a5;
LABEL_20:
        v22 = v40;
        v23 = LdrpConvertLangFallbackListToMultiSz(v40, (__int64)v18, (_DWORD *)a4, v21, v13, v14, &v38);
LABEL_21:
        v20 = v23;
        goto LABEL_22;
      }
    }
    goto LABEL_80;
  }
  if ( v19 >= 0 )
  {
    v20 = LdrpMergeLangFallbackLists(v13 | 0x30u, v18, &v40, 0LL, 0LL, 0LL, v18[7], 0LL, 0);
    if ( v20 >= 0 )
    {
      v26 = LdrpCreateLangFallbackList(&v41, (__int64)v18, 0x19u, 1);
      v22 = v40;
      v20 = v26;
      if ( v26 >= 0 )
      {
        v27 = v14;
        if ( !a2 )
        {
          v30 = 0;
          v45 = 0;
          if ( *(_WORD *)(v40 + 4) )
          {
            while ( 1 )
            {
              v31 = *(_QWORD *)(v22 + 24);
              if ( *(_WORD *)(v31 + 6LL * v30) == 2 )
              {
                v32 = (_BYTE *)(*(_QWORD *)(v18[3] + 16LL) + 28LL * *(__int16 *)(v31 + 6LL * v30 + 4));
                if ( (*v32 & 2) != 0 )
                  v27 = 0;
                if ( (*v32 & 6) != 0 )
                {
                  if ( *(_BYTE *)(v22 + 8) )
                    v33 = v18[5];
                  else
                    v33 = v18[6];
                  v20 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v41, (_DWORD)v32, (_DWORD)v18, v33, v34);
                  if ( v20 >= 0 )
                    goto LABEL_78;
                  v30 = v45;
                }
              }
              v45 = ++v30;
              if ( v30 >= *(unsigned __int16 *)(v22 + 4) )
                goto LABEL_77;
            }
          }
          goto LABEL_78;
        }
        if ( v37 == -1 )
          goto LABEL_78;
        v28 = (_BYTE *)(*(_QWORD *)(v18[3] + 16LL) + 28LL * v37);
        if ( !v28 )
          goto LABEL_78;
        if ( (*v28 & 2) != 0 || v36 && (*v28 & 4) != 0 )
          v27 = 0;
        v29 = *(_BYTE *)(v40 + 8) ? v18[5] : v18[6];
        v20 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v41, (_DWORD)v28, (_DWORD)v18, v29, v34);
LABEL_77:
        if ( v20 >= 0 )
        {
LABEL_78:
          v35 = v27;
          v9 = v41;
          v23 = LdrpConvertLangFallbackListToMultiSz(v41, (__int64)v18, (_DWORD *)a4, a5, v13, v35, &v38);
          goto LABEL_21;
        }
      }
      v9 = v41;
      goto LABEL_22;
    }
  }
LABEL_80:
  v22 = v40;
LABEL_22:
  if ( v22 )
    RtlpMuiRegFreeLanguageList(v22);
  if ( v9 )
    RtlpMuiRegFreeLanguageList(v9);
  if ( v20 < 0 )
    goto LABEL_31;
LABEL_27:
  *a3 = v38;
  return (unsigned int)v20;
}
