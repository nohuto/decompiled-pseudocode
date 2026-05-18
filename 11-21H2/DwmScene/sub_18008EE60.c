/*
 * XREFs of sub_18008EE60 @ 0x18008EE60
 * Callers:
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_18009010C @ 0x18009010C (sub_18009010C.c)
 *     sub_180092984 @ 0x180092984 (sub_180092984.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18008EFBC @ 0x18008EFBC (sub_18008EFBC.c)
 *     sub_18008F14C @ 0x18008F14C (sub_18008F14C.c)
 */

__int64 __fastcall sub_18008EE60(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180012170();
  v4 = a1[1] - *a1;
  v5 = (a1[2] - *a1) >> 2;
  v6 = v4 >> 2;
  v7 = v5 >> 1;
  if ( v5 <= 0x3FFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v8 = v7 + v5;
    if ( v7 + v5 >= a2 )
    {
      if ( v8 > 0x3FFFFFFFFFFFFFFFLL )
        sub_1800120D4();
    }
    else
    {
      v8 = a2;
    }
  }
  else
  {
    v8 = 0x3FFFFFFFFFFFFFFFLL;
  }
  v9 = 4 * v8;
  v10 = sub_180011088(4 * v8);
  sub_18008F14C(v10 + 4 * v6, a2 - v6);
  sub_18008EFBC(*a1, a1[1], v10);
  if ( *a1 )
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFFCuLL);
  *a1 = v10;
  a1[1] = v10 + 4 * a2;
  result = v9 + v10;
  a1[2] = v9 + v10;
  return result;
}
