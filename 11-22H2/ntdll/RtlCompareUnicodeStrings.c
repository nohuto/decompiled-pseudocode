/*
 * XREFs of RtlCompareUnicodeStrings @ 0x180014B60
 * Callers:
 *     ApiSetpSearchForApiSetHost @ 0x180014D60 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpSearchForApiSet @ 0x180019EF0 (ApiSetpSearchForApiSet.c)
 *     RtlpFindEnvironmentHashEntry @ 0x18001F080 (RtlpFindEnvironmentHashEntry.c)
 *     LdrpHpatAllocationOptOut @ 0x18002CC20 (LdrpHpatAllocationOptOut.c)
 *     LdrpSearchPath @ 0x18002E074 (LdrpSearchPath.c)
 *     LdrpIsSubstringFound @ 0x1800DEAF4 (LdrpIsSubstringFound.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180113A00 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180114000 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800156E8 (NLS_UPCASE.c)
 */

LONG __cdecl RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // ebp
  int v7; // ebx
  PCWCH v8; // r10
  const WCHAR *v9; // rdi
  signed __int64 v10; // r11
  unsigned __int16 v11; // si
  int v13; // r14d
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
      v11 = *(PCWCH)((char *)v8 + v10);
      if ( *v8 != v11 )
      {
        v13 = (unsigned __int16)NLS_UPCASE(qword_1801817B8, *v8);
        v14 = NLS_UPCASE(qword_1801817B8, v11);
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
