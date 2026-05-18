/*
 * XREFs of sub_18008ED2C @ 0x18008ED2C
 * Callers:
 *     sub_1800909C8 @ 0x1800909C8 (sub_1800909C8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18008EFFC @ 0x18008EFFC (sub_18008EFFC.c)
 */

_QWORD *__fastcall sub_18008ED2C(__int64 *a1, char *a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdi
  _QWORD *v13; // r8
  _QWORD *v14; // rsi
  char *v15; // rdx
  char *v16; // rcx
  _QWORD *result; // rax
  unsigned __int64 v18; // rax

  v4 = (__int64)&a2[-*a1] >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    sub_180012170();
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v18 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v18 >= v8 )
      v10 = v18;
    if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  else
  {
    v10 = 0x1FFFFFFFFFFFFFFFLL;
  }
  v11 = 8 * v10;
  v12 = sub_180011088(8 * v10);
  v13 = (_QWORD *)v12;
  v14 = (_QWORD *)(v12 + 8 * v4);
  *v14 = *a3;
  v15 = (char *)a1[1];
  v16 = (char *)*a1;
  if ( a2 != v15 )
  {
    sub_18008EFFC(v16, a2, v12);
    v15 = (char *)a1[1];
    v13 = v14 + 1;
    v16 = a2;
  }
  sub_18008EFFC(v16, v15, v13);
  if ( *a1 )
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = v12;
  result = v14;
  a1[1] = v12 + 8 * v8;
  a1[2] = v11 + v12;
  return result;
}
