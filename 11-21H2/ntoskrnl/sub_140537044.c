/*
 * XREFs of sub_140537044 @ 0x140537044
 * Callers:
 *     sub_140AF9238 @ 0x140AF9238 (sub_140AF9238.c)
 * Callees:
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 *     sub_140538278 @ 0x140538278 (sub_140538278.c)
 *     sub_14053842C @ 0x14053842C (sub_14053842C.c)
 */

__int64 __fastcall sub_140537044(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r11
  __int64 v3; // rbx
  int v4; // r10d
  bool v5; // zf
  _WORD *v6; // rdx
  _WORD *v7; // rax
  _WORD *i; // rdx
  _WORD *v9; // rax
  _WORD *v10; // rdi

  v2 = a2;
  v3 = a1;
  v4 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) >= 0x40u )
    {
      v5 = (*(_BYTE *)(a1 + 37) & 4) == 0;
      qword_140D017E8 = a1;
      if ( !v5 )
      {
        v6 = 0LL;
        while ( 1 )
        {
          v7 = (_WORD *)sub_14053842C(a1, v6);
          if ( !v7 )
            break;
          if ( *v7 == 4 )
          {
            LOBYTE(v4) = 0;
            break;
          }
          v6 = v7;
          a1 = v3;
        }
      }
      *v2 = v4;
      v4 = sub_140538278(v3);
      if ( v4 >= 0 )
      {
        for ( i = 0LL; ; i = v10 )
        {
          v9 = (_WORD *)sub_14053842C(v3, i);
          v10 = v9;
          if ( !v9 )
            break;
          if ( !*v9 )
          {
            v4 = sub_1405370FC(v3, v9);
            if ( v4 < 0 )
              break;
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
