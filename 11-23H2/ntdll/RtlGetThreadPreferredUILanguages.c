/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180011B40
 * Callers:
 *     RtlGetFileMUIPath @ 0x180009560 (RtlGetFileMUIPath.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001F014 (LdrpSetThreadPreferredLangList.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006FD80 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006FEF0 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A534 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B650 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18001032C (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpInitMuiCriticalSection @ 0x180011A44 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegDupLanguageList @ 0x180011AA8 (RtlpMuiRegDupLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x1800121CC (LdrpCreateLangFallbackList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18001231C (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800125EC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800128C4 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180012A18 (InitializeTEBUserLangList.c)
 *     RtlpComputeLangListCheckSum @ 0x1800135DC (RtlpComputeLangListCheckSum.c)
 *     RtlpAddNeutralsToMergedList @ 0x180013A08 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180013DA0 (LdrpMergeLangFallbackLists.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlpSetProcMergedLangList @ 0x180082AF0 (RtlpSetProcMergedLangList.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18008ABA0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008AC4C (RtlUpdateProcessRegistryInfo.c)
 */

__int64 __fastcall RtlGetThreadPreferredUILanguages(int a1, __int64 a2, _WORD *a3, _DWORD *a4)
{
  int v4; // r13d
  int v5; // r14d
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 result; // rax
  int v9; // esi
  int v10; // ebx
  __int64 v11; // r15
  void *MergedPrefLanguages; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  __int64 *v18; // r15
  char v19; // [rsp+58h] [rbp-39h]
  char v20; // [rsp+59h] [rbp-38h]
  __int64 v21; // [rsp+60h] [rbp-31h] BYREF
  void *v22; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v23; // [rsp+70h] [rbp-21h]
  __int64 v24; // [rsp+78h] [rbp-19h]
  void *PreferredLanguages; // [rsp+80h] [rbp-11h]
  int v26; // [rsp+88h] [rbp-9h]
  __int64 v27; // [rsp+90h] [rbp-1h]
  __int64 v28; // [rsp+98h] [rbp+7h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+Fh]
  char v30; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v31; // [rsp+100h] [rbp+6Fh]
  _WORD *v32; // [rsp+108h] [rbp+77h]
  _DWORD *v33; // [rsp+110h] [rbp+7Fh]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v4 = a1 & 0x30;
  v26 = 0;
  v23 = 0;
  v5 = a1;
  PreferredLanguages = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  v22 = 0LL;
  v29 = 0LL;
  v19 = 0;
  v21 = 0LL;
  v20 = 0;
  v27 = 0LL;
  if ( a4 )
    v26 = *a4;
  if ( (a1 & 0xFFFEFC83) != 0 )
    goto LABEL_63;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      goto LABEL_63;
  }
  else
  {
    v5 = a1 | 8;
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
  if ( !a4 )
    goto LABEL_63;
  if ( !*a4 || a3 )
  {
    if ( (v5 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v21);
      if ( (int)result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v7 = v21;
        if ( *(_DWORD *)(v21 + 12) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
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
      if ( *(_DWORD *)(v7 + 12) == MEMORY[0x7FFE03A4] )
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
              : *(_QWORD *)(v21 + 48);
          v10 = RtlpSetProcUserMachineLangList(v21, 0LL);
          if ( v10 >= 0 )
          {
            v6 = *(_QWORD *)(v7 + 56);
LABEL_27:
            if ( NtCurrentTeb()->MergedPrefLanguages )
            {
              v19 = 1;
              if ( v4 == 48 )
              {
                if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
                  && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v21 + 16) )
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
                v16 = *(_QWORD *)(v21 + 96);
                if ( v16 && v24 && (*(_BYTE *)(v24 + 40) & 0x40) != 0 && *(char *)(v16 + 40) >= 0 )
                {
                  v7 = v21;
                  v11 = v24;
                  v22 = *(void **)(v21 + 96);
                  NtCurrentTeb()->MuiGeneration = *(_DWORD *)(v21 + 16);
LABEL_45:
                  MergedPrefLanguages = v22;
LABEL_46:
                  v10 = LdrpConvertLangFallbackListToMultiSz(
                          (_DWORD)MergedPrefLanguages,
                          v7,
                          (_DWORD)v32,
                          (_DWORD)v33,
                          v5,
                          0,
                          v31);
                  if ( ((int)(v10 + 0x80000000) < 0 || v10 == -1073741789) && v4 == 48 )
                  {
                    if ( !*((_WORD *)MergedPrefLanguages + 22) )
                      RtlpComputeLangListCheckSum(MergedPrefLanguages);
                    if ( !v19 )
                    {
                      if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) == 0 )
                      {
                        RtlpMUIRegPatchLicenseInfortmation((__int64)MergedPrefLanguages);
                        if ( !PreferredLanguages && (*(_BYTE *)(v11 + 40) & 0x40) != 0 && v27 == *(_QWORD *)(v7 + 48) )
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
              v29 = RtlpMuiRegDupLanguageList(*(_QWORD *)(v7 + 72), v13);
              v23 = *(_DWORD *)(v7 + 16);
              RtlLeaveCriticalSection(&RegistryInfoCritSect);
            }
LABEL_36:
            v10 = LdrpCreateLangFallbackList(&v22, v7, 25LL);
            if ( v10 < 0 )
              goto LABEL_107;
            if ( v9 )
            {
              v11 = v24;
              v10 = LdrpMergeLangFallbackLists(
                      v5,
                      v7,
                      (unsigned int)&v22,
                      (_DWORD)PreferredLanguages,
                      0LL,
                      v24,
                      v6,
                      v27,
                      0);
            }
            else
            {
              LdrpCreateLangFallbackList(&v28, v7, 25LL);
              v11 = v24;
              v10 = LdrpMergeLangFallbackLists(
                      v5,
                      v7,
                      (unsigned int)&v28,
                      (_DWORD)PreferredLanguages,
                      v29,
                      v24,
                      v6,
                      v27,
                      0);
              if ( v10 >= 0 )
              {
                LOBYTE(v14) = v4 == 48 || (v5 & 0x10) != 0;
                v10 = RtlpAddNeutralsToMergedList(v14, v7, v28, &v22);
              }
              RtlpMuiRegFreeLanguageList(v28);
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
        return (unsigned int)v10;
      }
      v21 = 0LL;
      v10 = RtlpMuiRegCreateAndLoadRegistryInfo(&v21);
      if ( v10 >= 0 )
      {
        v7 = v21;
        v20 = 1;
        v18 = (__int64 *)(v21 + 56);
        if ( *(_QWORD *)(v21 + 56)
          || (v10 = RtlpMuiRegLoadPreferredUILanguages(v21, v17, 0, 3, &v30, (_QWORD *)(v21 + 56)), v10 >= 0)
          || v30 )
        {
          if ( *(_QWORD *)(v7 + 64)
            || (v30 = 0, v10 = RtlpMuiRegLoadPreferredUILanguages(v7, v17, 1u, 3, &v30, (_QWORD *)(v7 + 64)), v10 >= 0)
            || v30 )
          {
            v6 = *v18;
            v9 = v5 & 0x40;
            v24 = *(_QWORD *)(v7 + 64);
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
  return (unsigned int)-1073741811;
}
