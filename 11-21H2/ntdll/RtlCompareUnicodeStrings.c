/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1800416B0
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 *     RtlpFindEnvironmentHashEntry @ 0x180038070 (RtlpFindEnvironmentHashEntry.c)
 *     ApiSetpSearchForApiSet @ 0x180048A80 (ApiSetpSearchForApiSet.c)
 *     LdrpSearchPath @ 0x1800501B4 (LdrpSearchPath.c)
 *     ApiSetpSearchForApiSetHost @ 0x18007439C (ApiSetpSearchForApiSetHost.c)
 *     LdrpIsSubstringFound @ 0x1800E01DC (LdrpIsSubstringFound.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1801135A0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180113B9C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 */

LONG __cdecl RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // esi
  int v7; // ebx
  PCWCH v8; // r10
  const WCHAR *v9; // rdi
  signed __int64 v10; // r11
  unsigned __int16 v12; // r9
  int v13; // ebp
  unsigned __int16 v14; // ax
  int v15; // ecx
  int v16; // eax

  v5 = String1Length;
  v6 = String2Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v7 = String1Length;
  v8 = String1;
  v9 = &String1[v5];
  if ( String1 >= v9 )
    return v7 - v6;
  v10 = (char *)String2 - (char *)String1;
  if ( CaseInSensitive )
  {
    while ( 1 )
    {
      if ( *v8 != *(PCWCH)((char *)v8 + v10) )
      {
        v13 = (unsigned __int16)NLS_UPCASE(qword_1801776F8, *v8);
        v14 = NLS_UPCASE(qword_1801776F8, v12);
        if ( (_WORD)v13 != v14 )
          break;
      }
      if ( ++v8 >= v9 )
        return v7 - v6;
    }
    v15 = v14;
    v16 = v13;
  }
  else
  {
    while ( 1 )
    {
      v16 = *v8;
      v15 = *(PCWCH)((char *)v8 + v10);
      if ( (_WORD)v16 != (_WORD)v15 )
        break;
      if ( ++v8 >= v9 )
        return v7 - v6;
    }
  }
  return v16 - v15;
}
