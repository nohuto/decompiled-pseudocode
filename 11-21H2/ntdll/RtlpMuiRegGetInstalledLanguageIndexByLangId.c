/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18004B778
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18004AB28 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18004B090 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18004B60C (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     RtlGetUILanguageInfo @ 0x1800FA470 (RtlGetUILanguageInfo.c)
 *     RtlpRefreshCachedUILanguage @ 0x180112EA0 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18011406C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18004B090 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     _MuiRegAllocArray @ 0x18004B8B8 (_MuiRegAllocArray.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByLangId(__int64 a1, unsigned __int16 a2, char a3, _WORD *a4)
{
  LCID v4; // ebp
  __int64 result; // rax
  unsigned int InstalledLanguageIndexByName; // ebx
  char v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  wchar_t *v15; // rax
  wchar_t *v16; // rdi
  _UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  result = 3221225524LL;
  InstalledLanguageIndexByName = -1073741772;
  v10 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 != 4096 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = 0LL;
    if ( !*(_WORD *)(v11 + 6) )
    {
LABEL_13:
      v15 = (wchar_t *)MuiRegAllocArray(v12, 85LL);
      v16 = v15;
      if ( v15 )
      {
        String.Buffer = v15;
        *(_DWORD *)&String.Length = 11141120;
        if ( a3 && RtlLCIDToCultureName(v4, &String) )
          InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(a1, String.Buffer, 0, a4);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
        if ( v10 && InstalledLanguageIndexByName == -1073741772 )
          return 3221225659LL;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return InstalledLanguageIndexByName;
    }
    v13 = *(_QWORD *)(v11 + 16);
    while ( 1 )
    {
      v14 = 28LL * (unsigned int)v12;
      if ( *(_WORD *)(v14 + v13 + 4) == (_WORD)v4 )
      {
        if ( (*(_WORD *)(v14 + v13) & 0x1020) == 0x20 )
        {
          if ( a4 )
            *a4 = v12;
          return 0LL;
        }
        if ( (*(_WORD *)(v14 + v13) & 0x1000) != 0 )
          v10 = 1;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (int)v12 >= *(unsigned __int16 *)(v11 + 6) )
        goto LABEL_13;
    }
  }
  return result;
}
