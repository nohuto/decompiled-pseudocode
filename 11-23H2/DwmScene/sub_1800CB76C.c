/*
 * XREFs of sub_1800CB76C @ 0x1800CB76C
 * Callers:
 *     sub_1800111B0 @ 0x1800111B0 (sub_1800111B0.c)
 *     sub_1800CBBFC @ 0x1800CBBFC (sub_1800CBBFC.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015EE4 @ 0x180015EE4 (sub_180015EE4.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_180028AB4 @ 0x180028AB4 (sub_180028AB4.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_1800CB6E8 @ 0x1800CB6E8 (sub_1800CB6E8.c)
 *     sub_1800CD0D4 @ 0x1800CD0D4 (sub_1800CD0D4.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800CB76C(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, int a5, int a6)
{
  int v10; // r13d
  int v11; // eax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rax
  void **v16; // rax
  __m128 v17; // xmm2
  __m128 v18; // xmm0
  __int64 v20; // [rsp+20h] [rbp-99h] BYREF
  int v21; // [rsp+28h] [rbp-91h]
  __int64 v22; // [rsp+30h] [rbp-89h] BYREF
  __int64 v23; // [rsp+38h] [rbp-81h]
  __int64 v24; // [rsp+40h] [rbp-79h] BYREF
  __int64 v25; // [rsp+48h] [rbp-71h]
  __int64 *v26; // [rsp+50h] [rbp-69h]
  __int64 *v27; // [rsp+58h] [rbp-61h]
  __int64 *v28; // [rsp+60h] [rbp-59h]
  __int64 v29; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v30[4]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v31; // [rsp+98h] [rbp-21h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-19h]

  v26 = a2;
  v27 = a3;
  v28 = a4;
  v10 = 1;
  v11 = 1;
  if ( a5 )
    v11 = a5;
  v21 = v11;
  if ( a6 )
    v10 = a6;
  sub_180011C50((__int64)(a1 + 9), &v24);
  v12 = sub_180015EE4(v24, &v22);
  sub_180011020(a1 + 12, v12);
  if ( v23 )
    sub_180010530(v23);
  sub_18001246C(&v29, a1 + 12);
  sub_180017600((__int64)&v22);
  v20 = *a3;
  sub_180011520(&v20);
  sub_1800CD0D4(v22, &v20, 0LL);
  if ( sub_18001070C(a4) )
  {
    v13 = sub_180015EE4(v24, &v31);
    sub_180011020(a1 + 14, v13);
    if ( v32 )
      sub_180010530(v32);
    v14 = a1[14];
    v15 = sub_18002963C((__int64)a1, &v31);
    v16 = (void **)sub_18001C61C(v30, v15, (__int64)"Staging");
    sub_180029824(v14, v16);
    sub_180011B24((__int64)&v31);
    sub_18001246C(v30, a1 + 14);
    sub_180017600((__int64)&v31);
    v20 = 0LL;
    if ( &v20 != a4 )
    {
      v20 = *a4;
      *a4 = 0LL;
    }
    sub_1800CD0D4(v31, &v20, 128LL);
    if ( v32 )
      sub_180010530(v32);
  }
  sub_1800CB6E8(a1 + 16, a2);
  v17 = 0LL;
  v17.m128_f32[0] = (float)v10;
  v18 = 0LL;
  v18.m128_f32[0] = (float)v21;
  sub_180028AB4((__int64)a1, _mm_unpacklo_ps(v18, v17).m128_i64[0]);
  if ( v23 )
    sub_180010530(v23);
  if ( v25 )
    sub_180010530(v25);
  sub_18000E72C(a2);
  sub_18000E72C(a3);
  return sub_18000E72C(a4);
}
