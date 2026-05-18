/*
 * XREFs of sub_1800B1FC8 @ 0x1800B1FC8
 * Callers:
 *     sub_1800B227C @ 0x1800B227C (sub_1800B227C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180030B3C @ 0x180030B3C (sub_180030B3C.c)
 *     sub_1800B216C @ 0x1800B216C (sub_1800B216C.c)
 */

__int64 __fastcall sub_1800B1FC8(__int64 *a1, char *a2, _DWORD *a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r8
  char *v19; // rdx
  char *v20; // rcx
  __int64 result; // rax
  unsigned __int64 v22; // rax

  v8 = (__int64)&a2[-*a1] / 56;
  v9 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v9 == 0x492492492492492LL )
    sub_180012170();
  v10 = v9 + 1;
  v11 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
  if ( v11 <= 0x492492492492492LL - (v11 >> 1) )
  {
    v22 = (v11 >> 1) + v11;
    v12 = v10;
    if ( v22 >= v10 )
      v12 = v22;
    if ( v12 > 0x492492492492492LL )
      sub_1800120D4();
  }
  else
  {
    v12 = 0x492492492492492LL;
  }
  v13 = 56 * v12;
  v14 = sub_180011088(56 * v12);
  v15 = *a6;
  v16 = v14 + 56 * v8;
  v17 = *a5;
  *(_DWORD *)v16 = *a3;
  sub_18001875C((__int64 *)(v16 + 8), a4);
  *(_QWORD *)(v16 + 40) = v17;
  v18 = v14;
  *(_QWORD *)(v16 + 48) = v15;
  v19 = (char *)a1[1];
  v20 = (char *)*a1;
  if ( a2 != v19 )
  {
    sub_1800B216C(v20, a2, v14);
    v19 = (char *)a1[1];
    v18 = v16 + 56;
    v20 = a2;
  }
  sub_1800B216C(v20, v19, v18);
  if ( *a1 )
  {
    sub_180030B3C((_QWORD *)*a1, (_QWORD *)a1[1]);
    sub_180010884((char *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  result = v16;
  *a1 = v14;
  a1[1] = v14 + 56 * v10;
  a1[2] = v13 + v14;
  return result;
}
