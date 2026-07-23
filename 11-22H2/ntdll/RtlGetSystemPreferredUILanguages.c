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

NTSTATUS __cdecl RtlGetSystemPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v7; // rcx
  void *v9; // r15
  ULONG v10; // r14d
  __int16 v11; // di
  ULONG v12; // eax
  int v13; // r14d
  char v14; // r12
  int v15; // eax
  ULONG v16; // ebx
  NTSTATUS result; // eax
  _QWORD *v18; // rdi
  int v19; // eax
  NTSTATUS LangFallbackList; // ebx
  unsigned int *v21; // r9
  _QWORD *v22; // rsi
  NTSTATUS v23; // eax
  ULONG v24; // ebx
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
  ULONG v38; // [rsp+60h] [rbp-19h] BYREF
  ULONG v39; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  void *v41; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v42; // [rsp+78h] [rbp-1h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v45; // [rsp+E0h] [rbp+67h]

  v37 = -1;
  v38 = 0;
  v7 = ReturnLength;
  BaseAddress = 0LL;
  v9 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v10 = *ReturnLength;
  if ( LocaleName )
  {
    v24 = Flags & 0x80;
    v11 = 4104;
    RtlInitUnicodeString(&DestinationString, LocaleName);
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      LangFallbackList = -1073741772;
LABEL_34:
      if ( Languages )
      {
        if ( v10 )
          *Languages = 0;
        if ( v10 > 1 )
          Languages[1] = 0;
      }
      return LangFallbackList;
    }
    v7 = ReturnLength;
    v25 = v24 == 0;
    Flags = 4104;
    v36 = !v25;
  }
  else
  {
    v36 = 0;
    v11 = Flags;
    if ( (Flags & 0xFFFF6373) != 0 )
      return -1073741811;
  }
  v12 = Flags | 0x80;
  if ( (v11 & 0x9880) != 0 )
    v12 = Flags;
  if ( (v12 & 0xC) == 0xC )
    return -1073741811;
  v13 = v12 | 8;
  if ( (v12 & 0xC) != 0 )
    v13 = v12;
  v14 = (v13 & 0x400) == 0;
  v15 = v13 & 0x9880;
  if ( (v13 & 0x9880) != 0 )
  {
    if ( v15 != 128 && v15 != 2048 && v15 != 4096 && v15 != 0x8000 )
      return -1073741811;
  }
  else
  {
    v13 |= 0x8000u;
  }
  v16 = *v7;
  v39 = v16;
  if ( v16 && !Languages )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v42);
  if ( result < 0 )
    return result;
  v18 = v42;
  if ( LocaleName && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v42, LocaleName, 0, &v37) < 0 )
  {
    LangFallbackList = -1073741772;
LABEL_31:
    v10 = v39;
    goto LABEL_34;
  }
  result = RtlpSetProcUserMachineLangList((__int64)v18, 0);
  if ( result < 0 )
    return result;
  if ( (v13 & 0x800) != 0 )
  {
    *ReturnLength = v16;
    LangFallbackList = LdrpConvertLangFallbackListToMultiSz(
                         v18[7],
                         (__int64)v18,
                         Languages,
                         ReturnLength,
                         v13,
                         v14,
                         (int *)&v38);
    if ( LangFallbackList >= 0 && v38 )
      goto LABEL_27;
    LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v18, 0x19u, 1);
    if ( LangFallbackList >= 0 )
    {
      LangFallbackList = LdrpMergeLangFallbackLists(v13 | 0x30u, (__int64)v18, &BaseAddress, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      if ( LangFallbackList >= 0 )
      {
        v21 = ReturnLength;
        *ReturnLength = v39;
        goto LABEL_20;
      }
    }
    goto LABEL_80;
  }
  v19 = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v18, 0x19u, 1);
  LangFallbackList = v19;
  if ( (v13 & 0x8080) != 0 )
  {
    if ( v19 >= 0 )
    {
      LangFallbackList = LdrpMergeLangFallbackLists(
                           v13 | 0x30u,
                           (__int64)v18,
                           &BaseAddress,
                           0LL,
                           0LL,
                           0LL,
                           v18[7],
                           0LL,
                           1);
      if ( LangFallbackList >= 0 )
      {
        v21 = ReturnLength;
LABEL_20:
        v22 = BaseAddress;
        v23 = LdrpConvertLangFallbackListToMultiSz(
                (__int64)BaseAddress,
                (__int64)v18,
                Languages,
                v21,
                v13,
                v14,
                (int *)&v38);
LABEL_21:
        LangFallbackList = v23;
        goto LABEL_22;
      }
    }
    goto LABEL_80;
  }
  if ( v19 >= 0 )
  {
    LangFallbackList = LdrpMergeLangFallbackLists(
                         v13 | 0x30u,
                         (__int64)v18,
                         &BaseAddress,
                         0LL,
                         0LL,
                         0LL,
                         v18[7],
                         0LL,
                         0);
    if ( LangFallbackList >= 0 )
    {
      v26 = LdrpCreateLangFallbackList((__int64 *)&v41, (__int64)v18, 0x19u, 1);
      v22 = BaseAddress;
      LangFallbackList = v26;
      if ( v26 >= 0 )
      {
        v27 = v14;
        if ( !LocaleName )
        {
          v30 = 0;
          v45 = 0;
          if ( *((_WORD *)BaseAddress + 2) )
          {
            while ( 1 )
            {
              v31 = v22[3];
              if ( *(_WORD *)(v31 + 6LL * v30) == 2 )
              {
                v32 = (_BYTE *)(*(_QWORD *)(v18[3] + 16LL) + 28LL * *(__int16 *)(v31 + 6LL * v30 + 4));
                if ( (*v32 & 2) != 0 )
                  v27 = 0;
                if ( (*v32 & 6) != 0 )
                {
                  if ( *((_BYTE *)v22 + 8) )
                    v33 = v18[5];
                  else
                    v33 = v18[6];
                  LangFallbackList = LdrpMergeParentBaseLanguagesToList(
                                       (unsigned int)&v41,
                                       (_DWORD)v32,
                                       (_DWORD)v18,
                                       v33,
                                       v34);
                  if ( LangFallbackList >= 0 )
                    goto LABEL_78;
                  v30 = v45;
                }
              }
              v45 = ++v30;
              if ( v30 >= *((unsigned __int16 *)v22 + 2) )
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
        v29 = *((_BYTE *)BaseAddress + 8) ? v18[5] : v18[6];
        LangFallbackList = LdrpMergeParentBaseLanguagesToList((unsigned int)&v41, (_DWORD)v28, (_DWORD)v18, v29, v34);
LABEL_77:
        if ( LangFallbackList >= 0 )
        {
LABEL_78:
          v35 = v27;
          v9 = v41;
          v23 = LdrpConvertLangFallbackListToMultiSz(
                  (__int64)v41,
                  (__int64)v18,
                  Languages,
                  ReturnLength,
                  v13,
                  v35,
                  (int *)&v38);
          goto LABEL_21;
        }
      }
      v9 = v41;
      goto LABEL_22;
    }
  }
LABEL_80:
  v22 = BaseAddress;
LABEL_22:
  if ( v22 )
    RtlpMuiRegFreeLanguageList(v22);
  if ( v9 )
    RtlpMuiRegFreeLanguageList(v9);
  if ( LangFallbackList < 0 )
    goto LABEL_31;
LABEL_27:
  *NumberOfLanguages = v38;
  return LangFallbackList;
}
