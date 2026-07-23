/*
 * XREFs of sub_14053802C @ 0x14053802C
 * Callers:
 *     sub_140538580 @ 0x140538580 (sub_140538580.c)
 * Callees:
 *     sub_1405380DC @ 0x1405380DC (sub_1405380DC.c)
 *     sub_140538108 @ 0x140538108 (sub_140538108.c)
 *     sub_14053842C @ 0x14053842C (sub_14053842C.c)
 */

__int64 __fastcall sub_14053802C(__int64 a1, __int16 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 i; // rdx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdi

  v3 = 0LL;
  v6 = a1;
  if ( *a3 == 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v11 = sub_14053842C(a1, v7);
      v12 = v11;
      if ( !v11 )
        break;
      if ( !*(_WORD *)v11 && *(_WORD *)(v11 + 6) == a2 )
      {
        if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
          return v12 + 4;
        for ( i = 0LL; ; i = v10 )
        {
          v9 = sub_1405380DC(v12, i);
          v10 = v9;
          if ( !v9 )
            break;
          if ( (unsigned __int8)sub_140538108(v9, a3) )
            return v12 + 4;
        }
      }
      v7 = v12;
      a1 = v6;
    }
  }
  return v3;
}
