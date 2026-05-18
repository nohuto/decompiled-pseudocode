/*
 * XREFs of sub_180060A6C @ 0x180060A6C
 * Callers:
 *     sub_180062BE0 @ 0x180062BE0 (sub_180062BE0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180060694 @ 0x180060694 (sub_180060694.c)
 *     sub_180060BA8 @ 0x180060BA8 (sub_180060BA8.c)
 *     sub_180060C30 @ 0x180060C30 (sub_180060C30.c)
 */

__int64 __fastcall sub_180060A6C(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 result; // rax

  if ( a2 > 0x555555555555555LL )
    sub_180012170();
  v4 = a1[1] - *a1;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 4);
  v6 = v5 >> 1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * (v4 >> 4);
  if ( v5 <= 0x555555555555555LL - (v5 >> 1) )
  {
    v8 = v6 + v5;
    if ( v6 + v5 >= a2 )
    {
      if ( v8 > 0x555555555555555LL )
        sub_1800120D4();
    }
    else
    {
      v8 = a2;
    }
  }
  else
  {
    v8 = 0x555555555555555LL;
  }
  v9 = 48 * v8;
  v10 = sub_180011088(48 * v8);
  sub_180060C30(v10 + 48 * v7, a2 - v7);
  sub_180060BA8(*a1, a1[1], v10);
  if ( *a1 )
  {
    sub_180060694(*a1, a1[1]);
    sub_180010884((char *)*a1, 16 * ((a1[2] - *a1) >> 4));
  }
  *a1 = v10;
  a1[1] = v10 + 48 * a2;
  result = v9 + v10;
  a1[2] = v9 + v10;
  return result;
}
