/*
 * XREFs of sub_180060890 @ 0x180060890
 * Callers:
 *     sub_18006180C @ 0x18006180C (sub_18006180C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 *     sub_180020570 @ 0x180020570 (sub_180020570.c)
 */

__int64 *__fastcall sub_180060890(__int64 *a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 *v14; // r15
  _OWORD *v15; // rsi
  _QWORD *v16; // rdx
  _OWORD *v17; // r8
  _QWORD *v18; // rcx
  __int64 *result; // rax

  v4 = (unsigned __int64)a2 - *a1;
  v5 = (a1[1] - *a1) >> 5;
  if ( v5 == 0x7FFFFFFFFFFFFFFLL )
    sub_180012170();
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 5;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x7FFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  else
  {
    v11 = 0x7FFFFFFFFFFFFFFLL;
  }
  v12 = 2 * v11;
  v13 = sub_180011088(v12 * 16);
  v14 = (__int64 *)(v13 + (v4 & 0xFFFFFFFFFFFFFFE0uLL));
  v15 = (_OWORD *)v13;
  sub_1800129F4(v14, a3);
  v16 = (_QWORD *)a1[1];
  v17 = v15;
  v18 = (_QWORD *)*a1;
  if ( a2 != v16 )
  {
    sub_180020570(v18, a2, v15);
    v16 = (_QWORD *)a1[1];
    v17 = v14 + 4;
    v18 = a2;
  }
  sub_180020570(v18, v16, v17);
  if ( *a1 )
  {
    sub_18001FF34(*a1, a1[1]);
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *a1 = (__int64)v15;
  result = v14;
  a1[1] = (__int64)&v15[2 * v8];
  a1[2] = (__int64)&v15[v12];
  return result;
}
