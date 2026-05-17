/*
 * XREFs of RtlSetProcessPreferredUILanguages @ 0x18006D920
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18004B31C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpInitMuiCriticalSection @ 0x18004C6A8 (RtlpInitMuiCriticalSection.c)
 *     LdrpMultiSZCchLength @ 0x18006E1D8 (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18006E290 (RtlpCheckMuiMultiStringSafe.c)
 */

__int64 __fastcall RtlSetProcessPreferredUILanguages(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v19[0] = 0LL;
  v18 = 0LL;
  v5 = a1;
  if ( NtCurrentTeb()->IsImpersonating )
    return 3221225741LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
      return 3221225485LL;
  }
  else
  {
    v5 = 8;
  }
  result = RtlpCreateProcessRegistryInfo(v19);
  v11 = result;
  if ( (int)result >= 0 )
  {
    if ( !a2 )
      goto LABEL_27;
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetProcessPreferredUILanguages is not a valid"
        " multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(a2, v12, &v20) < 0 )
      return (unsigned int)-1073741811;
    v9 = v20;
    if ( v20 < 2 || *(_WORD *)a2 || *(_WORD *)(a2 + 2) )
    {
      v11 = RtlpMuiRegAddMultiSzToLangFallbackList(g_RegInfo, (const WCHAR *)a2, v20, v5 | 2u, 26, 5u, &v18);
      if ( v11 < 0 )
      {
        v17 = v18;
LABEL_29:
        RtlpMuiRegFreeLanguageList(v17);
        return (unsigned int)v11;
      }
      v13 = v18;
      if ( !v18 || !*(_WORD *)(v18 + 4) )
      {
        RtlpMuiRegFreeLanguageList(v18);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = *(unsigned __int16 *)(v18 + 4);
    }
    else
    {
LABEL_27:
      v13 = v18;
    }
    RtlpInitMuiCriticalSection(v8, v7, v9, v10);
    RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
    v14 = v19[0];
    v15 = *(_QWORD *)(v19[0] + 72);
    *(_QWORD *)(v19[0] + 72) = v13;
    ++*(_DWORD *)(v14 + 16);
    v16 = *(_QWORD *)(v14 + 96);
    if ( v16 )
      *(_DWORD *)(v16 + 40) |= 0x80u;
    RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    if ( !v15 )
      return (unsigned int)v11;
    v17 = v15;
    goto LABEL_29;
  }
  return result;
}
