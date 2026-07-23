/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x18007E780
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180083ED0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180048CD4 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpCreateLangFallbackList @ 0x180049BE8 (LdrpCreateLangFallbackList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180049D38 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     LdrpMergeLangFallbackLists @ 0x18004AB28 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18004B090 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800FA0D0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x180109740 (RtlIsValidLocaleName.c)
 */

NTSTATUS __cdecl RtlGetSystemPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v6; // rdx
  void *v8; // r14
  ULONG v9; // r15d
  ULONG v10; // edi
  int v11; // ecx
  int v12; // r15d
  char v13; // r12
  int v14; // r8d
  ULONG v15; // ebx
  NTSTATUS result; // eax
  _QWORD *v17; // rdi
  int v18; // eax
  NTSTATUS LangFallbackList; // ebx
  unsigned int *v20; // r9
  _QWORD *v21; // rsi
  NTSTATUS v22; // eax
  ULONG v23; // ebx
  int v24; // eax
  char v25; // r14
  _BYTE *v26; // rdx
  __int64 v27; // r9
  unsigned int v28; // r8d
  __int64 v29; // r10
  _BYTE *v30; // rdx
  __int64 v31; // r9
  char v32; // [rsp+28h] [rbp-51h]
  char v33; // [rsp+30h] [rbp-49h]
  bool v34; // [rsp+58h] [rbp-21h]
  __int16 v35; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG v36; // [rsp+60h] [rbp-19h] BYREF
  ULONG v37; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  void *v39; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v40; // [rsp+78h] [rbp-1h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v43; // [rsp+E0h] [rbp+67h]

  v6 = ReturnLength;
  v36 = 0;
  BaseAddress = 0LL;
  v39 = 0LL;
  v8 = 0LL;
  v9 = *ReturnLength;
  v35 = -1;
  v40 = 0LL;
  if ( LocaleName )
  {
    v23 = Flags & 0x80;
    v10 = 4104;
    RtlInitUnicodeString(&DestinationString, LocaleName);
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      LangFallbackList = -1073741772;
LABEL_34:
      if ( Languages )
      {
        if ( v9 )
          *Languages = 0;
        if ( v9 > 1 )
          Languages[1] = 0;
      }
      return LangFallbackList;
    }
    v6 = ReturnLength;
    v34 = v23 != 0;
  }
  else
  {
    v34 = 0;
    v10 = Flags;
    if ( (Flags & 0xFFFF6373) != 0 )
      return -1073741811;
  }
  v11 = v10 | 0x80;
  if ( (v10 & 0x9880) != 0 )
    v11 = v10;
  if ( (v11 & 0xC) == 0xC )
    return -1073741811;
  v12 = v11 | 8;
  if ( (v11 & 0xC) != 0 )
    v12 = v11;
  v13 = (v12 & 0x400) == 0;
  v14 = v12 & 0x9880;
  if ( (v12 & 0x9880) != 0 )
  {
    if ( v14 != 128 && v14 != 2048 && v14 != 4096 && v14 != 0x8000 )
      return -1073741811;
  }
  else
  {
    v12 |= 0x8000u;
  }
  v15 = *v6;
  v37 = v15;
  if ( v15 && !Languages )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v40);
  if ( result < 0 )
    return result;
  v17 = v40;
  if ( LocaleName && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v40, LocaleName, 0, &v35) < 0 )
  {
    LangFallbackList = -1073741772;
LABEL_31:
    v9 = v37;
    goto LABEL_34;
  }
  result = RtlpSetProcUserMachineLangList((__int64)v17, 0);
  if ( result < 0 )
    return result;
  if ( (v12 & 0x800) != 0 )
  {
    *ReturnLength = v15;
    LangFallbackList = LdrpConvertLangFallbackListToMultiSz(
                         v17[7],
                         (__int64)v17,
                         Languages,
                         ReturnLength,
                         v12,
                         v13,
                         (int *)&v36);
    if ( LangFallbackList >= 0 && v36 )
      goto LABEL_27;
    LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v17, 0x19u, 1);
    if ( LangFallbackList >= 0 )
    {
      LangFallbackList = LdrpMergeLangFallbackLists(v12 | 0x30u, (__int64)v17, &BaseAddress, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      if ( LangFallbackList >= 0 )
      {
        v20 = ReturnLength;
        *ReturnLength = v37;
        goto LABEL_20;
      }
    }
    goto LABEL_80;
  }
  v18 = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v17, 0x19u, 1);
  LangFallbackList = v18;
  if ( (v12 & 0x8080) != 0 )
  {
    if ( v18 >= 0 )
    {
      LangFallbackList = LdrpMergeLangFallbackLists(
                           v12 | 0x30u,
                           (__int64)v17,
                           &BaseAddress,
                           0LL,
                           0LL,
                           0LL,
                           v17[7],
                           0LL,
                           1);
      if ( LangFallbackList >= 0 )
      {
        v20 = ReturnLength;
LABEL_20:
        v21 = BaseAddress;
        v22 = LdrpConvertLangFallbackListToMultiSz(
                (__int64)BaseAddress,
                (__int64)v17,
                Languages,
                v20,
                v12,
                v13,
                (int *)&v36);
LABEL_21:
        LangFallbackList = v22;
        goto LABEL_22;
      }
    }
    goto LABEL_80;
  }
  if ( v18 >= 0 )
  {
    LangFallbackList = LdrpMergeLangFallbackLists(
                         v12 | 0x30u,
                         (__int64)v17,
                         &BaseAddress,
                         0LL,
                         0LL,
                         0LL,
                         v17[7],
                         0LL,
                         0);
    if ( LangFallbackList >= 0 )
    {
      v24 = LdrpCreateLangFallbackList((__int64 *)&v39, (__int64)v17, 0x19u, 1);
      v21 = BaseAddress;
      LangFallbackList = v24;
      if ( v24 >= 0 )
      {
        v25 = v13;
        if ( !LocaleName )
        {
          v28 = 0;
          v43 = 0;
          if ( *((_WORD *)BaseAddress + 2) )
          {
            while ( 1 )
            {
              v29 = v21[3];
              if ( *(_WORD *)(v29 + 6LL * v28) == 2 )
              {
                if ( (*(_BYTE *)(28LL * *(__int16 *)(v29 + 6LL * v28 + 4) + *(_QWORD *)(v17[3] + 16LL)) & 2) != 0 )
                  v25 = 0;
                v30 = (_BYTE *)(*(_QWORD *)(v17[3] + 16LL) + 28LL * *(__int16 *)(v29 + 6LL * v28 + 4));
                if ( (*v30 & 6) != 0 )
                {
                  if ( *((_BYTE *)v21 + 8) )
                    v31 = v17[5];
                  else
                    v31 = v17[6];
                  LangFallbackList = LdrpMergeParentBaseLanguagesToList(
                                       (unsigned int)&v39,
                                       (_DWORD)v30,
                                       (_DWORD)v17,
                                       v31,
                                       v32);
                  if ( LangFallbackList >= 0 )
                    goto LABEL_78;
                  v28 = v43;
                }
              }
              v43 = ++v28;
              if ( v28 >= *((unsigned __int16 *)v21 + 2) )
                goto LABEL_77;
            }
          }
          goto LABEL_78;
        }
        if ( v35 == -1 )
          goto LABEL_78;
        v26 = (_BYTE *)(*(_QWORD *)(v17[3] + 16LL) + 28LL * v35);
        if ( !v26 )
          goto LABEL_78;
        if ( (*v26 & 2) != 0 || v34 && (*v26 & 4) != 0 )
          v25 = 0;
        v27 = *((_BYTE *)BaseAddress + 8) ? v17[5] : v17[6];
        LangFallbackList = LdrpMergeParentBaseLanguagesToList((unsigned int)&v39, (_DWORD)v26, (_DWORD)v17, v27, v32);
LABEL_77:
        if ( LangFallbackList >= 0 )
        {
LABEL_78:
          v33 = v25;
          v8 = v39;
          v22 = LdrpConvertLangFallbackListToMultiSz(
                  (__int64)v39,
                  (__int64)v17,
                  Languages,
                  ReturnLength,
                  v12,
                  v33,
                  (int *)&v36);
          goto LABEL_21;
        }
      }
      v8 = v39;
      goto LABEL_22;
    }
  }
LABEL_80:
  v21 = BaseAddress;
LABEL_22:
  if ( v21 )
    RtlpMuiRegFreeLanguageList(v21);
  if ( v8 )
    RtlpMuiRegFreeLanguageList(v8);
  if ( LangFallbackList < 0 )
    goto LABEL_31;
LABEL_27:
  *NumberOfLanguages = v36;
  return LangFallbackList;
}
