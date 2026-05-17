/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x180091790
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180048CD4 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpInitMuiCriticalSection @ 0x18004C6A8 (RtlpInitMuiCriticalSection.c)
 */

__int64 __fastcall RtlGetProcessPreferredUILanguages(int a1, int *a2, _DWORD *a3, unsigned int *a4)
{
  char v7; // bl
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v7 = a1;
  if ( !a4 || !a2 || !a3 && *a4 )
    return 3221225485LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) == 0 && (a1 & 0xC) != 12 )
      goto LABEL_7;
    return 3221225485LL;
  }
  v7 = 8;
LABEL_7:
  result = RtlpCreateProcessRegistryInfo(&v15);
  if ( (int)result >= 0 )
  {
    v13 = v15;
    if ( *(_QWORD *)(v15 + 72) )
    {
      RtlpInitMuiCriticalSection(v10, v9, v11, v12);
      RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
      v14 = LdrpConvertLangFallbackListToMultiSz(*(_QWORD *)(v13 + 72), v13, a3, a4, v7, 0, a2);
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    }
    else
    {
      return (unsigned int)LdrpConvertLangFallbackListToMultiSz(0LL, v15, a3, a4, v7, 0, a2);
    }
    return v14;
  }
  return result;
}
