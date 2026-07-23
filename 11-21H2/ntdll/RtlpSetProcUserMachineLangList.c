/*
 * XREFs of RtlpSetProcUserMachineLangList @ 0x180049D38
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeUserOrMachineLangList @ 0x18004D8E4 (InitializeUserOrMachineLangList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006E750 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007E780 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180049C30 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpInitMuiCriticalSection @ 0x18004C6A8 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18006EC44 (RtlpMuiRegLoadPreferredUILanguages.c)
 */

__int64 __fastcall RtlpSetProcUserMachineLangList(__int64 a1, unsigned int a2)
{
  int PreferredUILanguages; // edi
  int v6; // edx
  __int64 LanguageList; // rcx
  bool v8; // sf
  char v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  PreferredUILanguages = 0;
  v10 = 0LL;
  v9 = 0;
  if ( !a1 || a2 > 1 )
    return 3221225485LL;
  if ( a2 == 1 && *(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 56) && !a2 )
    return 0LL;
  RtlpInitMuiCriticalSection();
  RtlEnterCriticalSection(&RegistryInfoCritSect);
  if ( (!*(_QWORD *)(a1 + 64) || a2 != 1) && (!*(_QWORD *)(a1 + 56) || a2) )
  {
    PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(a1, v6, a2, 3, (__int64)&v9, (__int64)&v10);
    LanguageList = v10;
    if ( !v10 )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, a2 != 1, a1);
      v10 = LanguageList;
      if ( !LanguageList )
        PreferredUILanguages = -1073741801;
    }
    v8 = PreferredUILanguages < 0;
    if ( PreferredUILanguages )
    {
      if ( PreferredUILanguages != -1073741801 && v9 )
        PreferredUILanguages = 0;
      v8 = PreferredUILanguages < 0;
    }
    if ( !v8 )
    {
      *(_DWORD *)(LanguageList + 40) |= 0x10u;
      *(_DWORD *)(LanguageList + 40) |= 0x40u;
      if ( a2 == 1 )
      {
        *(_QWORD *)(a1 + 64) = LanguageList;
        *(_DWORD *)a1 |= 0x20u;
      }
      else if ( !a2 )
      {
        *(_QWORD *)(a1 + 56) = LanguageList;
        *(_DWORD *)a1 |= 0x10u;
      }
    }
  }
  RtlLeaveCriticalSection(&RegistryInfoCritSect);
  return (unsigned int)PreferredUILanguages;
}
