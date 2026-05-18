/*
 * XREFs of sub_180018350 @ 0x180018350
 * Callers:
 *     sub_180016BE4 @ 0x180016BE4 (sub_180016BE4.c)
 *     sub_180029130 @ 0x180029130 (sub_180029130.c)
 *     sub_18003460C @ 0x18003460C (sub_18003460C.c)
 *     sub_1800A3BA0 @ 0x1800A3BA0 (sub_1800A3BA0.c)
 *     sub_1800D78AC @ 0x1800D78AC (sub_1800D78AC.c)
 *     sub_1800D7B74 @ 0x1800D7B74 (sub_1800D7B74.c)
 *     sub_1800D7E3C @ 0x1800D7E3C (sub_1800D7E3C.c)
 *     sub_1800D8104 @ 0x1800D8104 (sub_1800D8104.c)
 *     sub_1800D83CC @ 0x1800D83CC (sub_1800D83CC.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 */

_QWORD *__fastcall sub_180018350(__int64 *a1, char *a2, _QWORD *a3)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // r15
  _QWORD *v15; // r8
  char *v16; // rdx
  char *v17; // rcx
  _QWORD *result; // rax

  v4 = (unsigned __int64)&a2[-*a1];
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
  v12 = 2 * v11;
  v13 = (_QWORD *)sub_180011088(v12 * 8);
  v14 = (_QWORD *)((char *)v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v15 = v13;
  *v14 = 0LL;
  v14[1] = 0LL;
  *v14 = *a3;
  v14[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v16 = (char *)a1[1];
  v17 = (char *)*a1;
  if ( a2 != v16 )
  {
    sub_18001292C(v17, a2, v13);
    v16 = (char *)a1[1];
    v15 = v14 + 2;
    v17 = a2;
  }
  sub_18001292C(v17, v16, v15);
  if ( *a1 )
  {
    sub_1800126E8(*a1, a1[1]);
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = (__int64)v13;
  result = v14;
  a1[1] = (__int64)&v13[2 * v8];
  a1[2] = (__int64)&v13[v12];
  return result;
}
