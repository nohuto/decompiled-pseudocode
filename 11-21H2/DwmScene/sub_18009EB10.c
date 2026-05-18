/*
 * XREFs of sub_18009EB10 @ 0x18009EB10
 * Callers:
 *     sub_1800A068C @ 0x1800A068C (sub_1800A068C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18009EE30 @ 0x18009EE30 (sub_18009EE30.c)
 */

char *__fastcall sub_18009EB10(__int64 *a1, char *a2, char *a3)
{
  char *v3; // r14
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  char *v13; // r14
  __int64 v14; // rdi
  _BYTE *v15; // r8
  char *v16; // rdx
  char *v17; // rcx
  char *result; // rax

  v3 = &a2[-*a1];
  v4 = 0x7FFFFFFFFFFFFFFFLL;
  v5 = a1[1] - *a1;
  if ( v5 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180012170();
  v9 = v5 + 1;
  v10 = a1[2] - *a1;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v5 + 1;
  }
  v12 = sub_180011088(v4);
  v13 = &v3[v12];
  v14 = v12;
  v15 = (_BYTE *)v12;
  *v13 = *a3;
  v16 = (char *)a1[1];
  v17 = (char *)*a1;
  if ( a2 != v16 )
  {
    sub_18009EE30(v17, a2, v12);
    v16 = (char *)a1[1];
    v15 = v13 + 1;
    v17 = a2;
  }
  sub_18009EE30(v17, v16, v15);
  if ( *a1 )
    sub_180010884((char *)*a1, a1[2] - *a1);
  *a1 = v14;
  result = v13;
  a1[1] = v14 + v9;
  a1[2] = v14 + v4;
  return result;
}
