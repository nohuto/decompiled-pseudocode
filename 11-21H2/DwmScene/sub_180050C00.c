/*
 * XREFs of sub_180050C00 @ 0x180050C00
 * Callers:
 *     sub_1800535FC @ 0x1800535FC (sub_1800535FC.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180050B9C @ 0x180050B9C (sub_180050B9C.c)
 *     sub_180050E54 @ 0x180050E54 (sub_180050E54.c)
 *     sub_180050F64 @ 0x180050F64 (sub_180050F64.c)
 */

__int64 __fastcall sub_180050C00(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 result; // rax

  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    sub_180012170();
  v4 = a1[1] - *a1;
  v5 = 0x2E8BA2E8BA2E8BA3LL * ((a1[2] - *a1) >> 3);
  v6 = v5 >> 1;
  v7 = 0x2E8BA2E8BA2E8BA3LL * (v4 >> 3);
  if ( v5 <= 0x2E8BA2E8BA2E8BALL - (v5 >> 1) )
  {
    v8 = v6 + v5;
    if ( v6 + v5 >= a2 )
    {
      if ( v8 > 0x2E8BA2E8BA2E8BALL )
        sub_1800120D4();
    }
    else
    {
      v8 = a2;
    }
  }
  else
  {
    v8 = 0x2E8BA2E8BA2E8BALL;
  }
  v9 = 88 * v8;
  v10 = sub_180011088(88 * v8);
  sub_180050F64(v10 + 88 * v7, a2 - v7);
  sub_180050E54(*a1, a1[1], v10);
  if ( *a1 )
  {
    sub_180050B9C(*a1, a1[1]);
    sub_180010884((char *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  *a1 = v10;
  a1[1] = v10 + 88 * a2;
  result = v9 + v10;
  a1[2] = v9 + v10;
  return result;
}
