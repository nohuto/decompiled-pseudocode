/*
 * XREFs of sub_140538480 @ 0x140538480
 * Callers:
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 * Callees:
 *     sub_1405380DC @ 0x1405380DC (sub_1405380DC.c)
 *     sub_140538108 @ 0x140538108 (sub_140538108.c)
 *     sub_14053842C @ 0x14053842C (sub_14053842C.c)
 */

__int64 __fastcall sub_140538480(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v5; // r15
  __int64 i; // rdx
  _BYTE *v7; // rax
  __int64 j; // rdx
  __int64 k; // rdx
  __int64 m; // rdx
  char *v11; // rax
  char *v12; // r14
  char *v13; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi

  v2 = 0;
  if ( *(_WORD *)a2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v5 = *(_BYTE *)(a2 + 4);
    if ( (v5 & 1) != 0 )
    {
      for ( i = 0LL; ; i = (__int64)v7 )
      {
        v7 = (_BYTE *)sub_1405380DC(a2, i);
        if ( !v7 )
          break;
        if ( (unsigned __int8)(*v7 - 1) <= 1u )
          return (unsigned int)-1073741823;
      }
    }
    for ( j = 0LL; ; j = v15 )
    {
      v14 = sub_14053842C(a1, j);
      v15 = v14;
      if ( !v14 )
        break;
      if ( !*(_WORD *)v14 && v14 != a2 && *(_WORD *)(v14 + 6) == *(_WORD *)(a2 + 6) )
      {
        if ( (v5 & *(_BYTE *)(v14 + 4) & 1) != 0 )
          return (unsigned int)-1073741823;
        for ( k = 0LL; ; k = (__int64)v13 )
        {
          v13 = (char *)sub_1405380DC(a2, k);
          if ( !v13 )
            break;
          for ( m = 0LL; ; m = (__int64)v12 )
          {
            v11 = (char *)sub_1405380DC(v15, m);
            v12 = v11;
            if ( !v11 )
              break;
            if ( sub_140538108(v13, v11) )
              return (unsigned int)-1073741823;
          }
        }
      }
    }
  }
  return v2;
}
