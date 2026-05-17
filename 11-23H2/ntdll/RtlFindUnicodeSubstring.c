/*
 * XREFs of RtlFindUnicodeSubstring @ 0x180086860
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180086740 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 *     memcmp @ 0x180093310 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // rax
  size_t v4; // rsi
  char *v5; // rbx
  char *v6; // rdi
  char *v7; // r14
  unsigned __int16 *v8; // rbp
  char *i; // rsi
  unsigned __int16 *v10; // r11
  int v11; // edx
  __int64 v12; // r11
  __int16 v13; // ax
  __int16 v14; // r10
  const void *v16; // rbp

  v3 = *a2;
  if ( *a1 < (unsigned __int16)v3 )
    return 0LL;
  v4 = *a2;
  v5 = (char *)*((_QWORD *)a1 + 1);
  v6 = &v5[*a1 - v3];
  if ( !a3 )
  {
    if ( v5 <= v6 )
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
    return 0LL;
  }
  v7 = (char *)*((_QWORD *)a2 + 1);
  v8 = (unsigned __int16 *)&v7[v3];
  if ( v5 > v6 )
    return 0LL;
  for ( i = (char *)(v5 - v7); ; i += 2 )
  {
    v10 = (unsigned __int16 *)v7;
    if ( v7 < (char *)v8 )
    {
      do
      {
        v11 = *v10;
        if ( *(unsigned __int16 *)((char *)v10 + (_QWORD)i) != (_WORD)v11 )
        {
          NLS_UPCASE(qword_180184808, v11);
          v13 = NLS_UPCASE(qword_180184808, *(unsigned __int16 *)&i[v12]);
          if ( v13 != v14 )
            break;
        }
        ++v10;
      }
      while ( v10 < v8 );
    }
    if ( v10 == v8 )
      break;
    v5 += 2;
    if ( v5 > v6 )
      return 0LL;
  }
  return v5;
}
