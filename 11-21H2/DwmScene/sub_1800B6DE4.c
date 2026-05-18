/*
 * XREFs of sub_1800B6DE4 @ 0x1800B6DE4
 * Callers:
 *     sub_18008A6B0 @ 0x18008A6B0 (sub_18008A6B0.c)
 *     sub_18008DE00 @ 0x18008DE00 (sub_18008DE00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18006BC2C @ 0x18006BC2C (sub_18006BC2C.c)
 *     sub_1800B706C @ 0x1800B706C (sub_1800B706C.c)
 *     sub_1800B70F4 @ 0x1800B70F4 (sub_1800B70F4.c)
 *     sub_1800B7118 @ 0x1800B7118 (sub_1800B7118.c)
 *     sub_1800B7A1C @ 0x1800B7A1C (sub_1800B7A1C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800B6DE4(char **a1, char **a2, __int64 a3, __int64 *a4, __int64 a5)
{
  char *v8; // rdi
  char *v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rdi
  char *v13; // rsi
  char *v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rbx
  __int64 *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 result; // rax
  char *v27; // rbx
  char *v28; // rbx
  __int128 v29; // [rsp+20h] [rbp-71h] BYREF
  __int64 v30; // [rsp+30h] [rbp-61h]
  __int128 v31; // [rsp+38h] [rbp-59h] BYREF
  __int64 v32; // [rsp+48h] [rbp-49h]
  __int64 v33; // [rsp+50h] [rbp-41h] BYREF
  __int64 v34; // [rsp+58h] [rbp-39h]
  _BYTE v35[16]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v36[48]; // [rsp+70h] [rbp-21h] BYREF

  v8 = a1[1];
  v9 = *a1;
  v31 = 0LL;
  v32 = 0LL;
  v10 = (v8 - v9) >> 4;
  if ( v10 )
  {
    if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      sub_180012170();
    v11 = 16 * v10;
    *(_QWORD *)&v31 = sub_180011088(v11);
    v32 = v11 + v31;
    v12 = sub_18006BC2C(v9, v8, (_QWORD *)v31);
    *((_QWORD *)&v31 + 1) = v12;
  }
  else
  {
    v12 = (_QWORD *)*((_QWORD *)&v31 + 1);
  }
  v13 = a2[1];
  v14 = *a2;
  v29 = 0LL;
  v30 = 0LL;
  v15 = (v13 - v14) >> 4;
  if ( v15 )
  {
    if ( v15 > 0xFFFFFFFFFFFFFFFLL )
      sub_180012170();
    v16 = 16 * v15;
    *(_QWORD *)&v29 = sub_180011088(v16);
    v30 = v16 + v29;
    v17 = sub_18006BC2C(v14, v13, (_QWORD *)v29);
    *((_QWORD *)&v29 + 1) = v17;
  }
  else
  {
    v17 = (_QWORD *)*((_QWORD *)&v29 + 1);
  }
  if ( (unsigned __int64)((__int64)((__int64)v12 - v31) >> 4) > 3 )
    sub_1800B70F4(&v31);
  if ( (unsigned __int64)((__int64)((__int64)v17 - v29) >> 4) > 1 )
    sub_1800B706C(&v29);
  v18 = (__int64 *)(a5 + 8);
  v19 = sub_1800B7118(v36, &v31, a3) - a5;
  v20 = 3LL;
  do
  {
    v21 = *(__int64 *)((char *)v18 + v19 - 8);
    v22 = *(__int64 *)((char *)v18 + v19);
    *(__int64 *)((char *)v18 + v19 - 8) = 0LL;
    *(__int64 *)((char *)v18 + v19) = 0LL;
    v33 = *(v18 - 1);
    *(v18 - 1) = v21;
    v34 = *v18;
    *v18 = v22;
    sub_180010910((__int64)&v33);
    v18 += 2;
    --v20;
  }
  while ( v20 );
  sub_18000B4C0((__int64)v36, 16LL, 3LL);
  v23 = (__int64 *)sub_1800B7A1C(v35, &v29, a3);
  v24 = *v23;
  v25 = v23[1];
  *v23 = 0LL;
  v23[1] = 0LL;
  v33 = *a4;
  *a4 = v24;
  v34 = a4[1];
  a4[1] = v25;
  sub_180010910((__int64)&v33);
  result = sub_180010910((__int64)v35);
  v27 = (char *)v29;
  if ( (_QWORD)v29 )
  {
    sub_1800126E8(v29, *((__int64 *)&v29 + 1));
    result = sub_180010884(v27, (v30 - (_QWORD)v27) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  v28 = (char *)v31;
  if ( (_QWORD)v31 )
  {
    sub_1800126E8(v31, *((__int64 *)&v31 + 1));
    return sub_180010884(v28, (v32 - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return result;
}
