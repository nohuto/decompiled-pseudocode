/*
 * XREFs of CmpSearchSectionByName @ 0x140B56A90
 * Callers:
 *     CmpGetSectionLineIndexValueCount @ 0x140B55E34 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetSectionLineCount @ 0x140B5635C (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x140B56900 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x140B56A20 (CmpGetKeyName.c)
 * Callees:
 *     _stricmp @ 0x1403D90F0 (_stricmp.c)
 */

__int64 **__fastcall CmpSearchSectionByName(__int64 ***a1, const char *a2)
{
  __int64 **i; // rbx
  __int64 **v5; // rsi
  const char *v7; // rcx

  i = 0LL;
  if ( a1 && a2 )
  {
    v5 = a1[1];
    i = v5;
    if ( v5 )
    {
      while ( stricmp((const char *)i[1], a2) )
      {
        i = (__int64 **)*i;
        if ( !i )
          goto LABEL_8;
      }
LABEL_5:
      a1[1] = i;
    }
    else
    {
LABEL_8:
      for ( i = *a1; i; i = (__int64 **)*i )
      {
        if ( i == v5 )
          return 0LL;
        v7 = (const char *)i[1];
        if ( v7 && !stricmp(v7, a2) )
          goto LABEL_5;
      }
      if ( v5 )
        return i;
      return 0LL;
    }
  }
  return i;
}
