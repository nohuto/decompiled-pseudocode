/*
 * XREFs of sub_180012720 @ 0x180012720
 * Callers:
 *     sub_180013A60 @ 0x180013A60 (sub_180013A60.c)
 *     sub_180035720 @ 0x180035720 (sub_180035720.c)
 *     sub_18003FCC8 @ 0x18003FCC8 (sub_18003FCC8.c)
 *     sub_18003FE40 @ 0x18003FE40 (sub_18003FE40.c)
 *     sub_18005ECD4 @ 0x18005ECD4 (sub_18005ECD4.c)
 *     sub_180078EB0 @ 0x180078EB0 (sub_180078EB0.c)
 *     sub_18007D30C @ 0x18007D30C (sub_18007D30C.c)
 *     sub_18008ADA0 @ 0x18008ADA0 (sub_18008ADA0.c)
 *     sub_1800A12C4 @ 0x1800A12C4 (sub_1800A12C4.c)
 *     sub_1800A7B24 @ 0x1800A7B24 (sub_1800A7B24.c)
 *     sub_1800A7D00 @ 0x1800A7D00 (sub_1800A7D00.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 */

_QWORD *__fastcall sub_180012720(__int64 *a1, __int64 a2, _QWORD *a3)
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
  __int64 v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
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
  *v14 = 0LL;
  v14[1] = 0LL;
  v15 = a3[1];
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  v16 = (_QWORD *)v13;
  *v14 = *a3;
  v14[1] = a3[1];
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    sub_18001292C(v18, a2, v13);
    v17 = a1[1];
    v16 = v14 + 2;
    v18 = a2;
  }
  sub_18001292C(v18, v17, v16);
  if ( *a1 )
  {
    sub_1800126E8(*a1, a1[1]);
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = v13;
  result = v14;
  a1[1] = v13 + 16 * v8;
  a1[2] = v12 + v13;
  return result;
}
