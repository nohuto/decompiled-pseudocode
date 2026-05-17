/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x18006DEA0
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006DD30 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpCreateLangFallbackList @ 0x180049BE8 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18004B31C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegDupLanguageList @ 0x18004C61C (RtlpMuiRegDupLanguageList.c)
 *     LdrpMultiSZCchLength @ 0x18006E1D8 (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18006E290 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpInitializeUserList @ 0x18006E308 (RtlpInitializeUserList.c)
 *     RtlpUpdateTEBLanguage @ 0x18006E500 (RtlpUpdateTEBLanguage.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, __int64 a2, int *a3)
{
  int v5; // esi
  char v6; // r12
  __int64 result; // rax
  unsigned int updated; // edi
  __int64 v9; // rdx
  _DWORD *MergedPrefLanguages; // rcx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 *v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+58h] BYREF

  v22 = 0;
  v23 = 0;
  v5 = a1;
  v20 = 0LL;
  v6 = 0;
  v21 = 0LL;
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
  result = RtlpCreateProcessRegistryInfo(&v21);
  updated = result;
  if ( (int)result < 0 )
    return result;
  if ( (v5 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v6 = 1;
      RtlpInitializeUserList(v21);
      goto LABEL_18;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(a2, v9, &v22) < 0 )
      return (unsigned int)-1073741811;
    if ( v22 < 2 || *(_WORD *)a2 || *(_WORD *)(a2 + 2) )
    {
      if ( (int)LdrpCreateLangFallbackList((__int64 *)&v20, v21, 5u, 0) < 0 || !v20 )
        return (unsigned int)-1073741801;
      updated = RtlpMuiRegAddMultiSzToLangFallbackList(
                  g_RegInfo,
                  (const WCHAR *)a2,
                  v22,
                  v5 | 2u,
                  26,
                  5u,
                  (__int64 *)&v20);
      if ( (updated & 0x80000000) != 0 )
      {
        RtlpMuiRegFreeLanguageList((__int64)v20);
        return updated;
      }
      v16 = v20[2];
      if ( !(_WORD)v16 )
      {
        RtlpMuiRegFreeLanguageList((__int64)v20);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = v16;
    }
  }
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->PreferredLanguages);
    NtCurrentTeb()->PreferredLanguages = 0LL;
  }
  NtCurrentTeb()->PreferredLanguages = v20;
LABEL_18:
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    v11 = MergedPrefLanguages[10];
    if ( (v11 & 0x40) == 0 )
    {
LABEL_20:
      MergedPrefLanguages[10] = v11 | 0x80;
      NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
      goto LABEL_21;
    }
    v17 = RtlpMuiRegDupLanguageList((__int64)MergedPrefLanguages);
    MergedPrefLanguages = (_DWORD *)v17;
    if ( v17 )
    {
      *(_DWORD *)(v17 + 40) &= ~0x40u;
      v11 = *(_DWORD *)(v17 + 40);
      goto LABEL_20;
    }
    return (unsigned int)-1073741823;
  }
LABEL_21:
  if ( updated || !v6 )
    return updated;
  if ( !NtCurrentTeb()->UserPrefLanguages )
    goto LABEL_39;
  v12 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  if ( !v12 )
    goto LABEL_39;
  v13 = *(_DWORD *)(v12 + 40);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 0x100) != 0 )
    {
      if ( (v13 & 0x40) == 0 )
      {
LABEL_34:
        v14 = v13 & 0xFFFFFFF9 | 2;
LABEL_35:
        *(_DWORD *)(v12 + 40) = v14;
        if ( (v5 & 0x8000) != 0 && a3 )
        {
          v15 = *a3;
          if ( *a3 )
          {
            *(_WORD *)(v12 + 42) = 0;
            *(_DWORD *)(v12 + 40) |= v15 << 16;
          }
        }
        goto LABEL_39;
      }
      v18 = RtlpMuiRegDupLanguageList(v12);
      v12 = v18;
      if ( v18 )
      {
        updated = RtlpUpdateTEBLanguage(v18, 0LL, 4LL);
        if ( !updated )
        {
          *(_DWORD *)(v12 + 40) &= ~0x40u;
          v13 = *(_DWORD *)(v12 + 40);
          goto LABEL_34;
        }
      }
      return 3221225473LL;
    }
    if ( (v13 & 0x40) != 0 )
    {
      v19 = RtlpMuiRegDupLanguageList(v12);
      v12 = v19;
      if ( !v19 )
        return 3221225473LL;
      updated = RtlpUpdateTEBLanguage(v19, 0LL, 4LL);
      if ( updated )
        return 3221225473LL;
      *(_DWORD *)(v12 + 40) &= ~0x40u;
      v13 = *(_DWORD *)(v12 + 40);
    }
    v14 = v13 & 0xFFFFFFF9 | 4;
    goto LABEL_35;
  }
  *(_DWORD *)(v12 + 40) = v13 & 0xFFFFFFF9;
LABEL_39:
  RtlGetThreadPreferredUILanguages(v5 | 0x30, (int *)&v22, 0LL, &v23);
  return updated;
}
