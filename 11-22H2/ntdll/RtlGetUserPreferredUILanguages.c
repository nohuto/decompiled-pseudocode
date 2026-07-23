/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x180080A70
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x1800123DC (LdrpCreateLangFallbackList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18001252C (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800127FC (RtlpMuiRegFreeLanguageList.c)
 *     InitializeTEBUserLangList @ 0x180012C28 (InitializeTEBUserLangList.c)
 *     LdrpMergeLangFallbackLists @ 0x180013FB0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014994 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180081BE0 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800AE28C (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x180109810 (RtlIsValidLocaleName.c)
 */

NTSTATUS __cdecl RtlGetUserPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v5; // rsi
  ULONG v8; // ebx
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // r12d
  int v12; // eax
  NTSTATUS result; // eax
  __int64 v14; // r14
  _QWORD *v15; // r15
  __int64 v16; // rax
  int LangFallbackList; // eax
  NTSTATUS SystemPreferredUILanguages; // ebx
  _WORD *v19; // r14
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
  NTSTATUS v30; // eax
  char v31; // [rsp+28h] [rbp-51h]
  bool v32; // [rsp+58h] [rbp-21h]
  __int16 v33; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG NumberOfLanguagesa; // [rsp+60h] [rbp-19h] BYREF
  ULONG v35; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  PVOID v37; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v38; // [rsp+78h] [rbp-1h]
  _QWORD *v39; // [rsp+80h] [rbp+7h] BYREF
  __int64 v40; // [rsp+88h] [rbp+Fh]
  unsigned int LocaleNameb; // [rsp+E0h] [rbp+67h]

  v5 = ReturnLength;
  v33 = -1;
  BaseAddress = 0LL;
  v8 = Flags;
  v37 = 0LL;
  NumberOfLanguagesa = 0;
  v35 = 0;
  v39 = 0LL;
  v32 = 0;
  if ( ReturnLength )
    v35 = *ReturnLength;
  if ( LocaleName )
  {
    v8 = 4104;
    v32 = (Flags & 0x80) != 0;
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( ReturnLength )
        *ReturnLength = 2;
      goto LABEL_40;
    }
  }
  if ( (v8 & 0xFFFF6771) != 0 )
    return -1073741811;
  v9 = v8 | 0x80;
  if ( (v8 & 0x9880) != 0 )
    v9 = v8;
  if ( (v9 & 0xC) == 0xC )
    return -1073741811;
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
      return -1073741811;
  }
  else
  {
    v10 |= 0x8000u;
  }
  if ( !ReturnLength || *ReturnLength && !Languages )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v39);
  if ( result < 0 )
    return result;
  if ( LocaleName && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v39, LocaleName, 1, &v33) < 0 )
  {
    SystemPreferredUILanguages = -1073741772;
    *ReturnLength = 2;
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
    *ReturnLength = v35;
    v21 = LdrpConvertLangFallbackListToMultiSz(
            v14,
            (__int64)v15,
            Languages,
            ReturnLength,
            v10,
            v11,
            (int *)&NumberOfLanguagesa);
    SystemPreferredUILanguages = v21;
    if ( v21 >= 0 && *(_WORD *)(v14 + 4) )
      goto LABEL_30;
    if ( v21 != -1073741789 )
    {
LABEL_55:
      *ReturnLength = v35;
      SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                     (v10 & 8) != 0 ? 2056 : 2052,
                                     LocaleName,
                                     &NumberOfLanguagesa,
                                     Languages,
                                     ReturnLength);
    }
    goto LABEL_29;
  }
  LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v39, 0x19u, 0);
  SystemPreferredUILanguages = LangFallbackList;
  if ( (v10 & 0x8080) != 0 )
  {
    if ( LangFallbackList >= 0 )
    {
      if ( !BaseAddress )
        goto LABEL_30;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                     v10 | 0x30,
                                     (__int64)v15,
                                     &BaseAddress,
                                     0LL,
                                     0LL,
                                     v14,
                                     v15[7],
                                     v40,
                                     1);
      if ( SystemPreferredUILanguages >= 0 )
      {
        v19 = BaseAddress;
        *ReturnLength = v35;
        v20 = LdrpConvertLangFallbackListToMultiSz(
                (__int64)v19,
                (__int64)v15,
                Languages,
                ReturnLength,
                v10,
                v11,
                (int *)&NumberOfLanguagesa);
        SystemPreferredUILanguages = v20;
        if ( v20 >= 0 && v19[2] || v20 == -1073741789 )
          goto LABEL_25;
        *ReturnLength = v35;
        v30 = RtlGetSystemPreferredUILanguages(
                ((v10 & 8) != 0 ? 8 : 4) | 0x8000,
                LocaleName,
                &NumberOfLanguagesa,
                Languages,
                ReturnLength);
        goto LABEL_90;
      }
    }
LABEL_91:
    v19 = BaseAddress;
    goto LABEL_25;
  }
  if ( LangFallbackList < 0 )
    goto LABEL_91;
  if ( !BaseAddress )
    goto LABEL_30;
  SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                 v10 | 0x20,
                                 (__int64)v15,
                                 &BaseAddress,
                                 0LL,
                                 0LL,
                                 v14,
                                 0LL,
                                 v40,
                                 0);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_91;
  SystemPreferredUILanguages = LdrpCreateLangFallbackList((__int64 *)&v37, (__int64)v15, 0x19u, 0);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_91;
  v19 = BaseAddress;
  if ( v37 )
  {
    if ( LocaleName )
    {
      if ( v33 != -1 )
      {
        LOBYTE(v11) = v38;
        v22 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * v33);
        if ( v22 )
        {
          if ( (*v22 & 2) != 0 || v32 && (*v22 & 4) != 0 )
            LOBYTE(v11) = 0;
          if ( *((_BYTE *)v37 + 8) )
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
      LocaleNameb = 0;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        LOBYTE(v11) = v38;
        v25 = v40;
        do
        {
          v26 = *((_QWORD *)v19 + 3);
          if ( *(_WORD *)(v26 + 6LL * v24) == 2 )
          {
            v27 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v24 + 4));
            if ( (*v27 & 2) != 0 )
              LOBYTE(v11) = 0;
            if ( (*v27 & 6) != 0 )
            {
              if ( *((_BYTE *)v37 + 8) )
                v28 = v15[5];
              else
                LODWORD(v28) = v25;
              v29 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v37, (_DWORD)v27, (_DWORD)v15, v28, v31);
              v24 = LocaleNameb;
              SystemPreferredUILanguages = v29;
              if ( v29 >= 0 )
                break;
            }
          }
          LocaleNameb = ++v24;
        }
        while ( v24 < (unsigned __int16)v19[2] );
        v5 = ReturnLength;
      }
      if ( !*(_WORD *)(*((_QWORD *)v19 + 3) + 6LL * v24) || SystemPreferredUILanguages < 0 )
      {
        *v5 = v35;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       (v10 & 8) != 0 ? 4104 : 4100,
                                       0LL,
                                       &NumberOfLanguagesa,
                                       Languages,
                                       v5);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_25;
      }
    }
    v30 = LdrpConvertLangFallbackListToMultiSz(
            (__int64)v37,
            (__int64)v15,
            Languages,
            v5,
            v10,
            v11,
            (int *)&NumberOfLanguagesa);
LABEL_90:
    SystemPreferredUILanguages = v30;
  }
LABEL_25:
  if ( v19 )
    RtlpMuiRegFreeLanguageList(v19);
  if ( v37 )
    RtlpMuiRegFreeLanguageList(v37);
LABEL_29:
  if ( SystemPreferredUILanguages < 0 )
  {
LABEL_40:
    if ( Languages && v35 )
    {
      if ( v35 == 1 )
        *Languages = 0;
      else
        *(_DWORD *)Languages = 0;
    }
    return SystemPreferredUILanguages;
  }
LABEL_30:
  *NumberOfLanguages = NumberOfLanguagesa;
  return SystemPreferredUILanguages;
}
