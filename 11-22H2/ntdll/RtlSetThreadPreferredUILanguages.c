/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x18006FEF0
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006FD80 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlpMuiRegDupLanguageList @ 0x180011CB8 (RtlpMuiRegDupLanguageList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpCreateLangFallbackList @ 0x1800123DC (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800127FC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015960 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18007021C (RtlpCheckMuiMultiStringSafe.c)
 *     LdrpMultiSZCchLength @ 0x180070294 (LdrpMultiSZCchLength.c)
 *     RtlpInitializeUserList @ 0x180070350 (RtlpInitializeUserList.c)
 *     RtlpUpdateTEBLanguage @ 0x180070548 (RtlpUpdateTEBLanguage.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, __int64 a2, int *a3)
{
  int v5; // esi
  char v6; // r12
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int updated; // edi
  __int64 v10; // rdx
  int v11; // eax
  _DWORD *MergedPrefLanguages; // rcx
  __int64 *UserPrefLanguages; // rcx
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  PVOID BaseAddress; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  ULONG NumberOfLanguages; // [rsp+90h] [rbp+40h] BYREF
  ULONG ReturnLength; // [rsp+A8h] [rbp+58h] BYREF

  NumberOfLanguages = 0;
  ReturnLength = 0;
  v5 = a1;
  BaseAddress = 0LL;
  v6 = 0;
  v22 = 0LL;
  if ( (a1 & 0xFFFF7CF2) != 0 )
    return 3221225485LL;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      return 3221225485LL;
  }
  else
  {
    v5 = a1 | 8;
  }
  if ( (v5 & 0x300) == 0x300 || (v5 & 1) != 0 && (v5 & 0x300) != 0 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v22);
  updated = result;
  if ( (int)result < 0 )
    return result;
  if ( (v5 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v6 = 1;
      RtlpInitializeUserList(v22);
      goto LABEL_23;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(a2, v10, &NumberOfLanguages) < 0 )
      return (unsigned int)-1073741811;
    if ( NumberOfLanguages < 2 || *(_WORD *)a2 || *(_WORD *)(a2 + 2) )
    {
      if ( (int)LdrpCreateLangFallbackList((__int64 *)&BaseAddress, v22, 5u, 0) < 0 || !BaseAddress )
        return (unsigned int)-1073741801;
      updated = RtlpMuiRegAddMultiSzToLangFallbackList(
                  (__int64)g_RegInfo,
                  (const WCHAR *)a2,
                  NumberOfLanguages,
                  v5 | 2u,
                  26,
                  5u,
                  (__int64 *)&BaseAddress);
      if ( (updated & 0x80000000) != 0 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return updated;
      }
      v11 = *((unsigned __int16 *)BaseAddress + 2);
      if ( !(_WORD)v11 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = v11;
    }
  }
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
    NtCurrentTeb()->PreferredLanguages = 0LL;
  }
  NtCurrentTeb()->PreferredLanguages = BaseAddress;
LABEL_23:
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    if ( (MergedPrefLanguages[10] & 0x40) == 0 )
    {
LABEL_31:
      MergedPrefLanguages[10] |= 0x80u;
      NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
      goto LABEL_24;
    }
    v18 = RtlpMuiRegDupLanguageList((__int64)MergedPrefLanguages, v8);
    MergedPrefLanguages = (_DWORD *)v18;
    if ( v18 )
    {
      *(_DWORD *)(v18 + 40) &= ~0x40u;
      goto LABEL_31;
    }
    return (unsigned int)-1073741823;
  }
LABEL_24:
  if ( updated || !v6 )
    return updated;
  if ( !NtCurrentTeb()->UserPrefLanguages )
    goto LABEL_44;
  UserPrefLanguages = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
  v14 = *UserPrefLanguages;
  if ( !*UserPrefLanguages )
    goto LABEL_44;
  if ( (v5 & 1) == 0 )
  {
    v15 = *(_DWORD *)(v14 + 40) & 0x40;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !v15 )
      {
LABEL_39:
        v16 = *(_DWORD *)(v14 + 40) & 0xFFFFFFF9 | 2;
LABEL_40:
        *(_DWORD *)(v14 + 40) = v16;
        if ( (v5 & 0x8000) != 0 && a3 )
        {
          v17 = *a3;
          if ( *a3 )
          {
            *(_WORD *)(v14 + 42) = 0;
            *(_DWORD *)(v14 + 40) |= v17 << 16;
          }
        }
        goto LABEL_44;
      }
      v19 = RtlpMuiRegDupLanguageList(*UserPrefLanguages, v8);
      v14 = v19;
      if ( v19 )
      {
        updated = RtlpUpdateTEBLanguage(v19, 0LL, 4LL);
        if ( !updated )
        {
          *(_DWORD *)(v14 + 40) &= ~0x40u;
          goto LABEL_39;
        }
      }
      return 3221225473LL;
    }
    if ( v15 )
    {
      v20 = RtlpMuiRegDupLanguageList(*UserPrefLanguages, v8);
      v14 = v20;
      if ( !v20 )
        return 3221225473LL;
      updated = RtlpUpdateTEBLanguage(v20, 0LL, 4LL);
      if ( updated )
        return 3221225473LL;
      *(_DWORD *)(v14 + 40) &= ~0x40u;
    }
    v16 = *(_DWORD *)(v14 + 40) & 0xFFFFFFF9 | 4;
    goto LABEL_40;
  }
  *(_DWORD *)(v14 + 40) &= 0xFFFFFFF9;
LABEL_44:
  RtlGetThreadPreferredUILanguages(v5 | 0x30, &NumberOfLanguages, 0LL, &ReturnLength);
  return updated;
}
