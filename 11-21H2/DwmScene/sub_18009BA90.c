/*
 * XREFs of sub_18009BA90 @ 0x18009BA90
 * Callers:
 *     sub_18009BF94 @ 0x18009BF94 (sub_18009BF94.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18009BBC0 @ 0x18009BBC0 (sub_18009BBC0.c)
 */

_WORD *__fastcall sub_18009BA90(__int64 *a1, char *a2, _WORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdi
  _WORD *v13; // r8
  _WORD *v14; // rsi
  char *v15; // rdx
  char *v16; // rcx
  _WORD *result; // rax
  unsigned __int64 v18; // rax

  v4 = (__int64)&a2[-*a1] >> 1;
  v6 = (a1[1] - *a1) >> 1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180012170();
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v18 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v18 >= v8 )
      v10 = v18;
    if ( v10 > 0x7FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  else
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v11 = 2 * v10;
  v12 = sub_180011088(2 * v10);
  v13 = (_WORD *)v12;
  v14 = (_WORD *)(v12 + 2 * v4);
  *v14 = *a3;
  v15 = (char *)a1[1];
  v16 = (char *)*a1;
  if ( a2 != v15 )
  {
    sub_18009BBC0(v16, a2, v12);
    v15 = (char *)a1[1];
    v13 = v14 + 1;
    v16 = a2;
  }
  sub_18009BBC0(v16, v15, v13);
  if ( *a1 )
    sub_180010884((char *)*a1, 2 * ((a1[2] - *a1) >> 1));
  *a1 = v12;
  result = v14;
  a1[1] = v12 + 2 * v8;
  a1[2] = v11 + v12;
  return result;
}
