/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x1800494B0
 * Callers:
 *     LdrpSetThreadPreferredLangList @ 0x180042F40 (LdrpSetThreadPreferredLangList.c)
 *     RtlGetFileMUIPath @ 0x1800634A0 (RtlGetFileMUIPath.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006DD30 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006DEA0 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpComputeLangListCheckSum @ 0x180043308 (RtlpComputeLangListCheckSum.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180048CD4 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpCreateLangFallbackList @ 0x180049BE8 (LdrpCreateLangFallbackList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180049D38 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180049E8C (InitializeTEBUserLangList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     LdrpMergeLangFallbackLists @ 0x18004AB28 (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x18004C2E4 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegDupLanguageList @ 0x18004C61C (RtlpMuiRegDupLanguageList.c)
 *     RtlpInitMuiCriticalSection @ 0x18004C6A8 (RtlpInitMuiCriticalSection.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18004C70C (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006DCD0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006E5F4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18006EC44 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpSetProcMergedLangList @ 0x18008745C (RtlpSetProcMergedLangList.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180091338 (RtlUpdateProcessRegistryInfo.c)
 */

__int64 __fastcall RtlGetThreadPreferredUILanguages(int a1, int *a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // r13d
  int v5; // r14d
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 result; // rax
  int PreferredUILanguages; // ebx
  void *MergedPrefLanguages; // rsi
  __int64 v12; // rsi
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  __int64 *v17; // r15
  char v18; // [rsp+58h] [rbp-39h]
  char v19; // [rsp+59h] [rbp-38h]
  __int64 v20; // [rsp+60h] [rbp-31h] BYREF
  void *v21; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-21h]
  void *PreferredLanguages; // [rsp+78h] [rbp-19h]
  unsigned int v24; // [rsp+80h] [rbp-11h]
  __int64 v25; // [rsp+88h] [rbp-9h]
  __int64 v26; // [rsp+90h] [rbp-1h] BYREF
  __int64 v27; // [rsp+98h] [rbp+7h]
  char v28; // [rsp+F8h] [rbp+67h] BYREF
  int *v29; // [rsp+100h] [rbp+6Fh]
  _DWORD *v30; // [rsp+108h] [rbp+77h]
  unsigned int *v31; // [rsp+110h] [rbp+7Fh]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v4 = a1 & 0x30;
  v24 = 0;
  v22 = 0;
  v5 = a1;
  PreferredLanguages = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  v18 = 0;
  v20 = 0LL;
  v19 = 0;
  v25 = 0LL;
  if ( a4 )
    v24 = *a4;
  if ( (a1 & 0xFFFEFC83) != 0 )
    goto LABEL_62;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      goto LABEL_62;
  }
  else
  {
    v5 = a1 | 8;
  }
  if ( (v5 & 0x10000) != 0 )
  {
    if ( (v5 & 0x40) != 0 || (v5 & 0x30) != 0 )
      goto LABEL_62;
    v5 |= 0x30u;
  }
  if ( (v5 & 0x40) != 0 && (v5 & 0x30) != 0 )
    goto LABEL_62;
  if ( (v5 & 0x70) == 0 )
    v5 |= 0x20u;
  if ( !a4 )
    goto LABEL_62;
  if ( !*a4 || a3 )
  {
    if ( (v5 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v20);
      if ( (int)result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v8 = v20;
        if ( *(_DWORD *)(v20 + 12) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
          goto LABEL_17;
        v20 = 0LL;
        PreferredUILanguages = RtlpCreateProcessRegistryInfo(&v20);
        if ( PreferredUILanguages < 0 )
          goto LABEL_101;
      }
      v8 = v20;
LABEL_17:
      if ( (v5 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
        v8 = v20;
        goto LABEL_21;
      }
      v28 = 0;
      PreferredLanguages = 0LL;
      if ( *(_DWORD *)(v8 + 12) == MEMORY[0x7FFE03A4] )
      {
LABEL_21:
        if ( (v5 & 0x40) != 0 )
          goto LABEL_27;
        PreferredUILanguages = InitializeTEBUserLangList(0LL, v8);
        if ( PreferredUILanguages >= 0 )
        {
          v6 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v8 = v20;
          v25 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *(_QWORD *)(v20 + 48);
          PreferredUILanguages = RtlpSetProcUserMachineLangList(v20, 0LL);
          if ( PreferredUILanguages >= 0 )
          {
            v7 = *(_QWORD *)(v8 + 56);
LABEL_27:
            if ( NtCurrentTeb()->MergedPrefLanguages )
            {
              v18 = 1;
              if ( v4 == 48 )
              {
                if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
                  && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v20 + 16) )
                {
                  v8 = v20;
                  MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
                  v21 = MergedPrefLanguages;
                  goto LABEL_45;
                }
                v18 = 0;
                RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
                NtCurrentTeb()->MergedPrefLanguages = 0LL;
              }
            }
            else
            {
              v18 = 0;
              if ( v4 == 48 && !PreferredLanguages )
              {
                v8 = v20;
                v15 = *(_QWORD *)(v20 + 96);
                if ( v15 && v6 && (*(_BYTE *)(v6 + 40) & 0x40) != 0 && *(char *)(v15 + 40) >= 0 )
                {
                  v8 = v20;
                  v21 = *(void **)(v20 + 96);
                  NtCurrentTeb()->MuiGeneration = *(_DWORD *)(v20 + 16);
LABEL_44:
                  MergedPrefLanguages = v21;
LABEL_45:
                  PreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(
                                           (__int64)MergedPrefLanguages,
                                           v8,
                                           v30,
                                           v31,
                                           v5,
                                           0,
                                           v29);
                  if ( ((int)(PreferredUILanguages + 0x80000000) < 0 || PreferredUILanguages == -1073741789) && v4 == 48 )
                  {
                    if ( !*((_WORD *)MergedPrefLanguages + 22) )
                      RtlpComputeLangListCheckSum((__int64)MergedPrefLanguages);
                    if ( !v18 )
                    {
                      if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) == 0 )
                      {
                        RtlpMUIRegPatchLicenseInfortmation(MergedPrefLanguages);
                        if ( !PreferredLanguages && (*(_BYTE *)(v6 + 40) & 0x40) != 0 && v25 == *(_QWORD *)(v8 + 48) )
                          RtlpSetProcMergedLangList(v8, MergedPrefLanguages);
                      }
                      NtCurrentTeb()->MergedPrefLanguages = v21;
                      v8 = v20;
                      NtCurrentTeb()->MuiGeneration = v22;
                    }
                    MergedPrefLanguages = 0LL;
                    v21 = 0LL;
                  }
LABEL_51:
                  if ( MergedPrefLanguages )
                  {
                    v14 = v21;
                    if ( v21 == NtCurrentTeb()->MergedPrefLanguages )
                    {
                      v14 = v21;
                      NtCurrentTeb()->MergedPrefLanguages = 0LL;
                    }
                    RtlpMuiRegFreeLanguageList(v14);
                    v8 = v20;
                  }
                  if ( PreferredUILanguages >= 0 )
                    goto LABEL_56;
                  goto LABEL_63;
                }
LABEL_34:
                v19 = 0;
                if ( (v5 & 0x10000) == 0 )
                {
                  RtlpInitMuiCriticalSection();
                  RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
                  v12 = RtlpMuiRegDupLanguageList(*(_QWORD *)(v8 + 72));
                  v27 = v12;
                  v22 = *(_DWORD *)(v8 + 16);
                  RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
                  v19 = 0;
LABEL_36:
                  PreferredUILanguages = LdrpCreateLangFallbackList(&v21, v8, 25LL);
                  if ( PreferredUILanguages < 0 )
                    goto LABEL_109;
                  if ( (v5 & 0x40) != 0 )
                  {
                    PreferredUILanguages = LdrpMergeLangFallbackLists(
                                             v5,
                                             v8,
                                             (unsigned int)&v21,
                                             (_DWORD)PreferredLanguages,
                                             0LL,
                                             v6,
                                             v7,
                                             v25,
                                             0);
                  }
                  else
                  {
                    LdrpCreateLangFallbackList(&v26, v8, 25LL);
                    PreferredUILanguages = LdrpMergeLangFallbackLists(
                                             v5,
                                             v8,
                                             (unsigned int)&v26,
                                             (_DWORD)PreferredLanguages,
                                             v12,
                                             v6,
                                             v7,
                                             v25,
                                             0);
                    if ( PreferredUILanguages >= 0 )
                    {
                      LOBYTE(v13) = v4 == 48 || (v5 & 0x10) != 0;
                      PreferredUILanguages = RtlpAddNeutralsToMergedList(v13, v8, v26, &v21);
                    }
                    RtlpMuiRegFreeLanguageList(v26);
                  }
                  if ( PreferredUILanguages < 0 )
                  {
LABEL_109:
                    MergedPrefLanguages = v21;
                    goto LABEL_51;
                  }
                  goto LABEL_44;
                }
LABEL_96:
                v12 = v27;
                goto LABEL_36;
              }
            }
            v8 = v20;
            goto LABEL_34;
          }
        }
LABEL_63:
        if ( v30 && v24 )
        {
          if ( v24 == 1 )
            *(_WORD *)v30 = 0;
          else
            *v30 = 0;
        }
LABEL_56:
        if ( v19 && v8 )
          RtlpMuiFreeLangRegistryInfo(v8);
        if ( v27 )
          RtlpMuiRegFreeLanguageList(v27);
        return (unsigned int)PreferredUILanguages;
      }
      v20 = 0LL;
      PreferredUILanguages = RtlpMuiRegCreateAndLoadRegistryInfo(&v20);
      if ( PreferredUILanguages >= 0 )
      {
        v8 = v20;
        v19 = 1;
        v17 = (__int64 *)(v20 + 56);
        if ( *(_QWORD *)(v20 + 56)
          || (PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v20, v16, 0, 3, (__int64)&v28, v20 + 56),
              PreferredUILanguages >= 0)
          || v28 )
        {
          if ( *(_QWORD *)(v8 + 64)
            || (v28 = 0,
                PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v8, v16, 1, 3, (__int64)&v28, v8 + 64),
                PreferredUILanguages >= 0)
            || v28 )
          {
            v6 = *(_QWORD *)(v8 + 64);
            v7 = *v17;
            goto LABEL_96;
          }
        }
        goto LABEL_63;
      }
LABEL_101:
      v8 = v20;
      goto LABEL_63;
    }
LABEL_62:
    PreferredUILanguages = -1073741811;
    goto LABEL_63;
  }
  return (unsigned int)-1073741811;
}
