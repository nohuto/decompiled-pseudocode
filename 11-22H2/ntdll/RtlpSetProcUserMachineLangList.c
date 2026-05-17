/*
 * XREFs of RtlpSetProcUserMachineLangList @ 0x180012AD4
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x18000A360 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeUserOrMachineLangList @ 0x180070780 (InitializeUserOrMachineLangList.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180081BE0 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B870 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpInitMuiCriticalSection @ 0x180011C54 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180012424 (RtlpMuiRegCreateLanguageList.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpSetProcUserMachineLangList(__int64 a1, unsigned int a2)
{
  int v4; // edi
  int v6; // edx
  __int64 LanguageList; // rcx
  bool v8; // sf
  int v9; // eax
  char v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0LL;
  v10 = 0;
  if ( !a1 || a2 > 1 )
    return 3221225485LL;
  if ( a2 == 1 && *(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 56) && !a2 )
    return 0LL;
  RtlpInitMuiCriticalSection();
  RtlEnterCriticalSection(&RegistryInfoCritSect);
  if ( (!*(_QWORD *)(a1 + 64) || a2 != 1) && (!*(_QWORD *)(a1 + 56) || a2) )
  {
    v4 = RtlpMuiRegLoadPreferredUILanguages(a1, v6, a2, 3, &v10, &v11);
    LanguageList = v11;
    if ( !v11 )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, a2 != 1, a1);
      v11 = LanguageList;
      if ( !LanguageList )
        v4 = -1073741801;
    }
    v8 = v4 < 0;
    if ( v4 )
    {
      if ( v4 != -1073741801 && v10 )
        v4 = 0;
      v8 = v4 < 0;
    }
    if ( !v8 )
    {
      v9 = *(_DWORD *)(LanguageList + 40) | 0x10;
      *(_DWORD *)(LanguageList + 40) = v9;
      *(_DWORD *)(LanguageList + 40) = v9 | 0x40;
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
  return (unsigned int)v4;
}
