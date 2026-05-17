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

__int64 __fastcall RtlCompareUnicodeStrings(_WORD *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v5; // rax
  int v6; // esi
  int v7; // ebx
  _WORD *v8; // r10
  unsigned __int64 v9; // rdi
  __int64 v10; // r11
  unsigned __int16 v12; // r9
  int v13; // ebp
  unsigned __int16 v14; // ax
  int v15; // ecx
  int v16; // eax

  v5 = a2;
  v6 = a4;
  if ( a2 > a4 )
    v5 = a4;
  v7 = a2;
  v8 = a1;
  v9 = (unsigned __int64)&a1[v5];
  if ( (unsigned __int64)a1 >= v9 )
    return (unsigned int)(v7 - v6);
  v10 = a3 - (_QWORD)a1;
  if ( a5 )
  {
    while ( 1 )
    {
      if ( *v8 != *(_WORD *)((char *)v8 + v10) )
      {
        v13 = (unsigned __int16)NLS_UPCASE(qword_1801776F8, (unsigned __int16)*v8);
        v14 = NLS_UPCASE(qword_1801776F8, v12);
        if ( (_WORD)v13 != v14 )
          break;
      }
      if ( (unsigned __int64)++v8 >= v9 )
        return (unsigned int)(v7 - v6);
    }
    v15 = v14;
    v16 = v13;
  }
  else
  {
    while ( 1 )
    {
      v16 = (unsigned __int16)*v8;
      v15 = *(unsigned __int16 *)((char *)v8 + v10);
      if ( (_WORD)v16 != (_WORD)v15 )
        break;
      if ( (unsigned __int64)++v8 >= v9 )
        return (unsigned int)(v7 - v6);
    }
  }
  return (unsigned int)(v16 - v15);
}
