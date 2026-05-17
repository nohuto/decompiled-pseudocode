/*
 * XREFs of RtlPrefixString @ 0x18000BEB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x18000C350 (RtlUpperChar.c)
 */

char __fastcall RtlPrefixString(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char *v4; // rdi
  _BYTE *v5; // rsi
  char *v6; // rbp
  char v7; // r14
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rsi

  v3 = *a1;
  v4 = (char *)*((_QWORD *)a1 + 1);
  v5 = *(_BYTE **)(a2 + 8);
  if ( *(_WORD *)a2 >= (unsigned __int16)v3 )
  {
    v6 = &v4[v3];
    if ( v4 >= &v4[v3] )
      return 1;
    if ( a3 )
    {
      while ( 1 )
      {
        v7 = *v4;
        if ( *v4 != *v5 )
        {
          LOBYTE(a1) = *v5;
          v9 = RtlUpperChar(a1);
          LOBYTE(v10) = v7;
          if ( (unsigned __int8)RtlUpperChar(v10) != v9 )
            break;
        }
        ++v4;
        ++v5;
        if ( v4 >= v6 )
          return 1;
      }
    }
    else
    {
      v11 = v5 - v4;
      while ( *v4 == v4[v11] )
      {
        if ( ++v4 >= v6 )
          return 1;
      }
    }
  }
  return 0;
}
