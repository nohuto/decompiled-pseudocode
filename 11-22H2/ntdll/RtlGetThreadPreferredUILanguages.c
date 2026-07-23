/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180011D50
 * Callers:
 *     RtlGetFileMUIPath @ 0x180009780 (RtlGetFileMUIPath.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001F1F4 (LdrpSetThreadPreferredLangList.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006FD80 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006FEF0 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A754 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B870 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18001053C (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpInitMuiCriticalSection @ 0x180011C54 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegDupLanguageList @ 0x180011CB8 (RtlpMuiRegDupLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x1800123DC (LdrpCreateLangFallbackList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18001252C (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800127FC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012AD4 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180012C28 (InitializeTEBUserLangList.c)
 *     RtlpComputeLangListCheckSum @ 0x1800137EC (RtlpComputeLangListCheckSum.c)
 *     RtlpAddNeutralsToMergedList @ 0x180013C18 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180013FB0 (LdrpMergeLangFallbackLists.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlpSetProcMergedLangList @ 0x180082480 (RtlpSetProcMergedLangList.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18008A3A0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008A44C (RtlUpdateProcessRegistryInfo.c)
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
  PVOID v7; // rdi
  NTSTATUS result; // eax
  int v9; // esi
  NTSTATUS v10; // ebx
  __int64 v11; // r15
  void *MergedPrefLanguages; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  __int64 *v18; // r15
  char v19; // [rsp+58h] [rbp-39h]
  char v20; // [rsp+59h] [rbp-38h]
  PVOID v21; // [rsp+60h] [rbp-31h] BYREF
  PVOID v22; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v23; // [rsp+70h] [rbp-21h]
  __int64 v24; // [rsp+78h] [rbp-19h]
  void *PreferredLanguages; // [rsp+80h] [rbp-11h]
  ULONG v26; // [rsp+88h] [rbp-9h]
  __int64 v27; // [rsp+90h] [rbp-1h]
  PVOID BaseAddress; // [rsp+98h] [rbp+7h] BYREF
  PVOID v29; // [rsp+A0h] [rbp+Fh]
  char v30; // [rsp+F8h] [rbp+67h] BYREF
  PULONG v31; // [rsp+100h] [rbp+6Fh]
  PZZWSTR v32; // [rsp+108h] [rbp+77h]
  PULONG v33; // [rsp+110h] [rbp+7Fh]

  v33 = ReturnLength;
  v32 = Languages;
  v31 = NumberOfLanguages;
  v4 = Flags & 0x30;
  v26 = 0;
  v23 = 0;
  v5 = Flags;
  PreferredLanguages = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  v22 = 0LL;
  v29 = 0LL;
  v19 = 0;
  v21 = 0LL;
  v20 = 0;
  v27 = 0LL;
  if ( ReturnLength )
    v26 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_63;
  if ( (Flags & 0xC) != 0 )
  {
    if ( (Flags & 0xC) == 0xC )
      goto LABEL_63;
  }
  else
  {
    v5 = Flags | 8;
  }
  if ( (v5 & 0x10000) != 0 )
  {
    if ( (v5 & 0x40) != 0 || (v5 & 0x30) != 0 )
      goto LABEL_63;
    v5 |= 0x30u;
  }
  if ( (v5 & 0x40) != 0 && (v5 & 0x30) != 0 )
    goto LABEL_63;
  if ( (v5 & 0x70) == 0 )
    v5 |= 0x20u;
  if ( !ReturnLength )
    goto LABEL_63;
  if ( !*ReturnLength || Languages )
  {
    if ( (v5 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v21);
      if ( result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v7 = v21;
        if ( *((_DWORD *)v21 + 3) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
          goto LABEL_17;
        v21 = 0LL;
        v10 = RtlpCreateProcessRegistryInfo(&v21);
        if ( v10 < 0 )
          goto LABEL_99;
      }
      v7 = v21;
LABEL_17:
      if ( (v5 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
        v7 = v21;
        goto LABEL_21;
      }
      v30 = 0;
      PreferredLanguages = 0LL;
      if ( *((_DWORD *)v7 + 3) == MEMORY[0x7FFE03A4] )
      {
LABEL_21:
        v9 = v5 & 0x40;
        if ( (v5 & 0x40) != 0 )
          goto LABEL_27;
        v10 = InitializeTEBUserLangList(0LL, v7);
        if ( v10 >= 0 )
        {
          v24 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v7 = v21;
          v27 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *((_QWORD *)v21 + 6);
          v10 = RtlpSetProcUserMachineLangList(v21, 0LL);
          if ( v10 >= 0 )
          {
            v6 = *((_QWORD *)v7 + 7);
LABEL_27:
            if ( NtCurrentTeb()->MergedPrefLanguages )
            {
              v19 = 1;
              if ( v4 == 48 )
              {
                if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
                  && NtCurrentTeb()->MuiGeneration == *((_DWORD *)v21 + 4) )
                {
                  v7 = v21;
                  v11 = v24;
                  MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
                  v22 = MergedPrefLanguages;
                  goto LABEL_46;
                }
                v19 = 0;
                RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
                NtCurrentTeb()->MergedPrefLanguages = 0LL;
              }
            }
            else
            {
              v19 = 0;
              if ( v4 == 48 && !PreferredLanguages )
              {
                v7 = v21;
                v16 = *((_QWORD *)v21 + 12);
                if ( v16 && v24 && (*(_BYTE *)(v24 + 40) & 0x40) != 0 && *(char *)(v16 + 40) >= 0 )
                {
                  v7 = v21;
                  v11 = v24;
                  v22 = (PVOID)*((_QWORD *)v21 + 12);
                  NtCurrentTeb()->MuiGeneration = *((_DWORD *)v21 + 4);
LABEL_45:
                  MergedPrefLanguages = v22;
LABEL_46:
                  v10 = LdrpConvertLangFallbackListToMultiSz(
                          (_DWORD)MergedPrefLanguages,
                          (_DWORD)v7,
                          (_DWORD)v32,
                          (_DWORD)v33,
                          v5,
                          0,
                          (__int64)v31);
                  if ( ((int)(v10 + 0x80000000) < 0 || v10 == -1073741789) && v4 == 48 )
                  {
                    if ( !*((_WORD *)MergedPrefLanguages + 22) )
                      RtlpComputeLangListCheckSum(MergedPrefLanguages);
                    if ( !v19 )
                    {
                      if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) == 0 )
                      {
                        RtlpMUIRegPatchLicenseInfortmation((__int64)MergedPrefLanguages);
                        if ( !PreferredLanguages && (*(_BYTE *)(v11 + 40) & 0x40) != 0 && v27 == *((_QWORD *)v7 + 6) )
                          RtlpSetProcMergedLangList(v7, MergedPrefLanguages);
                      }
                      NtCurrentTeb()->MergedPrefLanguages = v22;
                      v7 = v21;
                      NtCurrentTeb()->MuiGeneration = v23;
                    }
                    MergedPrefLanguages = 0LL;
                    v22 = 0LL;
                  }
LABEL_52:
                  if ( MergedPrefLanguages )
                  {
                    v15 = v22;
                    if ( v22 == NtCurrentTeb()->MergedPrefLanguages )
                    {
                      v15 = v22;
                      NtCurrentTeb()->MergedPrefLanguages = 0LL;
                    }
                    RtlpMuiRegFreeLanguageList(v15);
                    v7 = v21;
                  }
                  if ( v10 >= 0 )
                    goto LABEL_57;
                  goto LABEL_64;
                }
                goto LABEL_34;
              }
            }
            v7 = v21;
LABEL_34:
            if ( (v5 & 0x10000) == 0 )
            {
              RtlpInitMuiCriticalSection();
              RtlEnterCriticalSection(&RegistryInfoCritSect);
              v29 = (PVOID)RtlpMuiRegDupLanguageList(*((_QWORD *)v7 + 9), v13);
              v23 = *((_DWORD *)v7 + 4);
              RtlLeaveCriticalSection(&RegistryInfoCritSect);
            }
LABEL_36:
            v10 = LdrpCreateLangFallbackList(&v22, v7, 25LL);
            if ( v10 < 0 )
              goto LABEL_107;
            if ( v9 )
            {
              v11 = v24;
              v10 = LdrpMergeLangFallbackLists(v5, v7, &v22, PreferredLanguages, 0LL, v24, v6, v27, 0);
            }
            else
            {
              LdrpCreateLangFallbackList(&BaseAddress, v7, 25LL);
              v11 = v24;
              v10 = LdrpMergeLangFallbackLists(v5, v7, &BaseAddress, PreferredLanguages, v29, v24, v6, v27, 0);
              if ( v10 >= 0 )
              {
                LOBYTE(v14) = v4 == 48 || (v5 & 0x10) != 0;
                v10 = RtlpAddNeutralsToMergedList(v14, v7, BaseAddress, &v22);
              }
              RtlpMuiRegFreeLanguageList(BaseAddress);
            }
            if ( v10 < 0 )
            {
LABEL_107:
              MergedPrefLanguages = v22;
              goto LABEL_52;
            }
            goto LABEL_45;
          }
        }
LABEL_64:
        if ( v32 && v26 )
        {
          if ( v26 == 1 )
            *v32 = 0;
          else
            *(_DWORD *)v32 = 0;
        }
LABEL_57:
        if ( v20 && v7 )
          RtlpMuiFreeLangRegistryInfo(v7);
        if ( v29 )
          RtlpMuiRegFreeLanguageList(v29);
        return v10;
      }
      v21 = 0LL;
      v10 = RtlpMuiRegCreateAndLoadRegistryInfo(&v21);
      if ( v10 >= 0 )
      {
        v7 = v21;
        v20 = 1;
        v18 = (__int64 *)((char *)v21 + 56);
        if ( *((_QWORD *)v21 + 7)
          || (v10 = RtlpMuiRegLoadPreferredUILanguages((__int64)v21, v17, 0, 3, &v30, (_QWORD *)v21 + 7), v10 >= 0)
          || v30 )
        {
          if ( *((_QWORD *)v7 + 8)
            || (v30 = 0,
                v10 = RtlpMuiRegLoadPreferredUILanguages((__int64)v7, v17, 1u, 3, &v30, (_QWORD *)v7 + 8),
                v10 >= 0)
            || v30 )
          {
            v6 = *v18;
            v9 = v5 & 0x40;
            v24 = *((_QWORD *)v7 + 8);
            goto LABEL_36;
          }
        }
        goto LABEL_64;
      }
LABEL_99:
      v7 = v21;
      goto LABEL_64;
    }
LABEL_63:
    v10 = -1073741811;
    goto LABEL_64;
  }
  return -1073741811;
}
