/*
 * XREFs of sub_180093E70 @ 0x180093E70
 * Callers:
 *     sub_1800948D4 @ 0x1800948D4 (sub_1800948D4.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180094030 @ 0x180094030 (sub_180094030.c)
 */

_OWORD *__fastcall sub_180093E70(__int64 *a1, char *a2, _OWORD *a3)
{
  char *v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  _OWORD *v15; // r15
  _OWORD *v16; // r8
  char *v17; // rdx
  char *v18; // rcx
  _OWORD *result; // rax

  v4 = &a2[-*a1];
  v5 = (a1[1] - *a1) >> 4;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012170();
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0xFFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  else
  {
    v11 = 0xFFFFFFFFFFFFFFFLL;
  }
  v12 = 16 * v11;
  v13 = sub_180011088(v12);
  v14 = v13;
  v15 = (_OWORD *)(v13 + ((unsigned __int64)v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v16 = (_OWORD *)v13;
  *v15 = *a3;
  v17 = (char *)a1[1];
  v18 = (char *)*a1;
  if ( a2 != v17 )
  {
    sub_180094030(v18, a2, v13);
    v17 = (char *)a1[1];
    v16 = v15 + 1;
    v18 = a2;
  }
  sub_180094030(v18, v17, v16);
  if ( *a1 )
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = v14;
  result = v15;
  a1[1] = v14 + 16 * v8;
  a1[2] = v12 + v14;
  return result;
}
