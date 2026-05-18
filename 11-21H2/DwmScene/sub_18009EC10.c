/*
 * XREFs of sub_18009EC10 @ 0x18009EC10
 * Callers:
 *     sub_1800A0D7C @ 0x1800A0D7C (sub_1800A0D7C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180020530 @ 0x180020530 (sub_180020530.c)
 *     sub_18005C5EC @ 0x18005C5EC (sub_18005C5EC.c)
 */

char *__fastcall sub_18009EC10(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  char *v10; // rsi
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180012170();
  v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
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
  v10 = (char *)sub_180011088(4 * v8);
  sub_18005C5EC((__int64)&v10[4 * v6], a2 - v6);
  sub_180020530(*(void **)a1, *(_QWORD *)(a1 + 8), v10);
  if ( *(_QWORD *)a1 )
    sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = &v10[4 * a2];
  result = &v10[v9];
  *(_QWORD *)(a1 + 16) = &v10[v9];
  return result;
}
