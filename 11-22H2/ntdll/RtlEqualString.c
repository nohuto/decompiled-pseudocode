/*
 * XREFs of RtlEqualString @ 0x180082F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180082FA0 (RtlUpperChar.c)
 */

char __fastcall RtlEqualString(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _BYTE *v5; // rdi
  char *v6; // rsi
  _BYTE *v7; // rbp
  char v8; // r14
  __int64 v9; // rsi
  char v10; // al
  __int64 v11; // rcx

  v3 = *a1;
  if ( (_WORD)v3 != *(_WORD *)a2 )
    return 0;
  v5 = (_BYTE *)*((_QWORD *)a1 + 1);
  v6 = *(char **)(a2 + 8);
  v7 = &v5[v3];
  if ( v5 < &v5[v3] )
  {
    if ( a3 )
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v5 != *v6 )
        {
          LOBYTE(a1) = *v5;
          v10 = RtlUpperChar(a1);
          LOBYTE(v11) = v8;
          if ( v10 != (unsigned __int8)RtlUpperChar(v11) )
            break;
        }
        ++v5;
        ++v6;
        if ( v5 >= v7 )
          return 1;
      }
    }
    else
    {
      v9 = v6 - v5;
      while ( *v5 == v5[v9] )
      {
        if ( ++v5 >= v7 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
