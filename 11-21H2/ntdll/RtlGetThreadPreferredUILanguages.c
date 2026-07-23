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

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v4; // r13d
  ULONG v5; // r14d
  __int64 v6; // r12
  __int64 v7; // r15
  PVOID v8; // rdi
  NTSTATUS result; // eax
  NTSTATUS PreferredUILanguages; // ebx
  void *MergedPrefLanguages; // rsi
  PVOID v12; // rsi
  __int64 v13; // rcx
  PVOID v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  __int64 *v17; // r15
  char v18; // [rsp+58h] [rbp-39h]
  char v19; // [rsp+59h] [rbp-38h]
  PVOID v20; // [rsp+60h] [rbp-31h] BYREF
  PVOID v21; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-21h]
  void *PreferredLanguages; // [rsp+78h] [rbp-19h]
  ULONG v24; // [rsp+80h] [rbp-11h]
  __int64 v25; // [rsp+88h] [rbp-9h]
  PVOID BaseAddress; // [rsp+90h] [rbp-1h] BYREF
  PVOID v27; // [rsp+98h] [rbp+7h]
  char v28; // [rsp+F8h] [rbp+67h] BYREF
  int *v29; // [rsp+100h] [rbp+6Fh]
  _DWORD *v30; // [rsp+108h] [rbp+77h]
  unsigned int *v31; // [rsp+110h] [rbp+7Fh]

  v31 = ReturnLength;
  v30 = Languages;
  v29 = (int *)NumberOfLanguages;
  v4 = Flags & 0x30;
  v24 = 0;
  v22 = 0;
  v5 = Flags;
  PreferredLanguages = 0LL;
  v6 = 0LL;
  BaseAddress = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  v18 = 0;
  v20 = 0LL;
  v19 = 0;
  v25 = 0LL;
  if ( ReturnLength )
    v24 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_62;
  if ( (Flags & 0xC) != 0 )
  {
    if ( (Flags & 0xC) == 0xC )
      goto LABEL_62;
  }
  else
  {
    v5 = Flags | 8;
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
  if ( !ReturnLength )
    goto LABEL_62;
  if ( !*ReturnLength || Languages )
  {
    if ( (v5 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v20);
      if ( result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v8 = v20;
        if ( *((_DWORD *)v20 + 3) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
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
      if ( *((_DWORD *)v8 + 3) == MEMORY[0x7FFE03A4] )
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
              : *((_QWORD *)v20 + 6);
          PreferredUILanguages = RtlpSetProcUserMachineLangList(v20, 0LL);
          if ( PreferredUILanguages >= 0 )
          {
            v7 = *((_QWORD *)v8 + 7);
LABEL_27:
            if ( NtCurrentTeb()->MergedPrefLanguages )
            {
              v18 = 1;
              if ( v4 == 48 )
              {
                if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
                  && NtCurrentTeb()->MuiGeneration == *((_DWORD *)v20 + 4) )
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
                v15 = *((_QWORD *)v20 + 12);
                if ( v15 && v6 && (*(_BYTE *)(v6 + 40) & 0x40) != 0 && *(char *)(v15 + 40) >= 0 )
                {
                  v8 = v20;
                  v21 = (PVOID)*((_QWORD *)v20 + 12);
                  NtCurrentTeb()->MuiGeneration = *((_DWORD *)v20 + 4);
LABEL_44:
                  MergedPrefLanguages = v21;
LABEL_45:
                  PreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(
                                           (__int64)MergedPrefLanguages,
                                           (__int64)v8,
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
                        if ( !PreferredLanguages && (*(_BYTE *)(v6 + 40) & 0x40) != 0 && v25 == *((_QWORD *)v8 + 6) )
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
                  RtlEnterCriticalSection(&RegistryInfoCritSect);
                  v12 = (PVOID)RtlpMuiRegDupLanguageList(*((_QWORD *)v8 + 9));
                  v27 = v12;
                  v22 = *((_DWORD *)v8 + 4);
                  RtlLeaveCriticalSection(&RegistryInfoCritSect);
                  v19 = 0;
LABEL_36:
                  PreferredUILanguages = LdrpCreateLangFallbackList(&v21, v8, 25LL);
                  if ( PreferredUILanguages < 0 )
                    goto LABEL_109;
                  if ( (v5 & 0x40) != 0 )
                  {
                    PreferredUILanguages = LdrpMergeLangFallbackLists(
                                             v5,
                                             (_DWORD)v8,
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
                    LdrpCreateLangFallbackList(&BaseAddress, v8, 25LL);
                    PreferredUILanguages = LdrpMergeLangFallbackLists(
                                             v5,
                                             (_DWORD)v8,
                                             (unsigned int)&BaseAddress,
                                             (_DWORD)PreferredLanguages,
                                             (__int64)v12,
                                             v6,
                                             v7,
                                             v25,
                                             0);
                    if ( PreferredUILanguages >= 0 )
                    {
                      LOBYTE(v13) = v4 == 48 || (v5 & 0x10) != 0;
                      PreferredUILanguages = RtlpAddNeutralsToMergedList(v13, v8, BaseAddress, &v21);
                    }
                    RtlpMuiRegFreeLanguageList(BaseAddress);
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
        return PreferredUILanguages;
      }
      v20 = 0LL;
      PreferredUILanguages = RtlpMuiRegCreateAndLoadRegistryInfo(&v20);
      if ( PreferredUILanguages >= 0 )
      {
        v8 = v20;
        v19 = 1;
        v17 = (__int64 *)((char *)v20 + 56);
        if ( *((_QWORD *)v20 + 7)
          || (PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                       (_DWORD)v20,
                                       v16,
                                       0,
                                       3,
                                       (__int64)&v28,
                                       (__int64)v20 + 56),
              PreferredUILanguages >= 0)
          || v28 )
        {
          if ( *((_QWORD *)v8 + 8)
            || (v28 = 0,
                PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                         (_DWORD)v8,
                                         v16,
                                         1,
                                         3,
                                         (__int64)&v28,
                                         (__int64)v8 + 64),
                PreferredUILanguages >= 0)
            || v28 )
          {
            v6 = *((_QWORD *)v8 + 8);
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
  return -1073741811;
}
