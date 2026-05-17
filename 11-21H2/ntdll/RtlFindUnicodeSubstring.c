/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1800F5EF0
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x1800F5FE0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 *     memcmp @ 0x180097B10 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // rax
  size_t v4; // rsi
  char *v5; // rbx
  char *v6; // rdi
  unsigned __int16 *v7; // rbp
  unsigned __int16 *v8; // rsi
  char *i; // r11
  unsigned __int16 *j; // r10
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int16 v13; // ax
  __int16 v14; // r9
  const void *v16; // rbp

  v3 = *a2;
  if ( *a1 >= (unsigned __int16)v3 )
  {
    v4 = *a2;
    v5 = (char *)*((_QWORD *)a1 + 1);
    v6 = &v5[*a1 - v3];
    if ( a3 )
    {
      v7 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
      v8 = (unsigned __int16 *)((char *)v7 + *a2);
      if ( v5 <= v6 )
      {
        for ( i = (char *)(v5 - (char *)v7); ; i += 2 )
        {
          for ( j = v7; j < v8; ++j )
          {
            if ( *(unsigned __int16 *)((char *)j + (_QWORD)i) != *j )
            {
              NLS_UPCASE(qword_1801776F8, *j);
              v13 = NLS_UPCASE(qword_1801776F8, *(_WORD *)(v12 + v11));
              if ( v13 != v14 )
                break;
            }
          }
          if ( j == v8 )
            break;
          v5 += 2;
          if ( v5 > v6 )
            return 0LL;
        }
        return v5;
      }
    }
    else if ( v5 <= v6 )
    {
      v16 = (const void *)*((_QWORD *)a2 + 1);
      while ( memcmp(v5, v16, v4) )
      {
        v5 += 2;
        if ( v5 > v6 )
          return 0LL;
      }
      return v5;
    }
  }
  return 0LL;
}
