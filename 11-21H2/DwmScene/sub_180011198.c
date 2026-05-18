/*
 * XREFs of sub_180011198 @ 0x180011198
 * Callers:
 *     sub_180010EC0 @ 0x180010EC0 (sub_180010EC0.c)
 *     sub_180017078 @ 0x180017078 (sub_180017078.c)
 *     sub_180017260 @ 0x180017260 (sub_180017260.c)
 *     sub_180017448 @ 0x180017448 (sub_180017448.c)
 *     sub_180026478 @ 0x180026478 (sub_180026478.c)
 *     sub_180026808 @ 0x180026808 (sub_180026808.c)
 *     sub_1800488B8 @ 0x1800488B8 (sub_1800488B8.c)
 *     sub_18004D06C @ 0x18004D06C (sub_18004D06C.c)
 *     sub_18004D278 @ 0x18004D278 (sub_18004D278.c)
 *     sub_180053AF8 @ 0x180053AF8 (sub_180053AF8.c)
 *     sub_180053CE0 @ 0x180053CE0 (sub_180053CE0.c)
 *     sub_180053EC8 @ 0x180053EC8 (sub_180053EC8.c)
 *     sub_1800540B0 @ 0x1800540B0 (sub_1800540B0.c)
 *     sub_180054298 @ 0x180054298 (sub_180054298.c)
 *     sub_18005F020 @ 0x18005F020 (sub_18005F020.c)
 *     sub_180066C28 @ 0x180066C28 (sub_180066C28.c)
 *     sub_1800911D0 @ 0x1800911D0 (sub_1800911D0.c)
 *     sub_180093CE8 @ 0x180093CE8 (sub_180093CE8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     sub_1800112F0 @ 0x1800112F0 (sub_1800112F0.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 */

_QWORD *__fastcall sub_180011198(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  _QWORD *v14; // r15
  _QWORD *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *result; // rax

  v4 = a2 - *a1;
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
  v14 = (_QWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v15 = (_QWORD *)v13;
  *v14 = 0LL;
  v14[1] = 0LL;
  *v14 = *a3;
  v14[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    sub_1800112F0(v17, a2, v13);
    v16 = a1[1];
    v15 = v14 + 2;
    v17 = a2;
  }
  sub_1800112F0(v17, v16, v15);
  if ( *a1 )
  {
    sub_180011138(*a1, a1[1]);
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = v13;
  result = v14;
  a1[1] = v13 + 16 * v8;
  a1[2] = v12 + v13;
  return result;
}
