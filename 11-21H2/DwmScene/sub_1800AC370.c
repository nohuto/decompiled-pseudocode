/*
 * XREFs of sub_1800AC370 @ 0x1800AC370
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180040BA4 @ 0x180040BA4 (sub_180040BA4.c)
 *     sub_180041688 @ 0x180041688 (sub_180041688.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 *     sub_18004EC7C @ 0x18004EC7C (sub_18004EC7C.c)
 *     sub_18004EC90 @ 0x18004EC90 (sub_18004EC90.c)
 *     sub_18004ECCC @ 0x18004ECCC (sub_18004ECCC.c)
 *     sub_18005221C @ 0x18005221C (sub_18005221C.c)
 *     sub_180052250 @ 0x180052250 (sub_180052250.c)
 *     sub_180093288 @ 0x180093288 (sub_180093288.c)
 *     sub_180093340 @ 0x180093340 (sub_180093340.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800AC370(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  __int64 *v6; // rax
  __m128 **v7; // rax
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  __m128 v10; // xmm0
  __m128 v11; // xmm2
  __int64 v12; // rbx
  __int64 v14[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v17[4]; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v18; // [rsp+98h] [rbp-70h] BYREF
  __m128 v19; // [rsp+A8h] [rbp-60h]
  __m128 v20; // [rsp+B8h] [rbp-50h]
  __m128 v21; // [rsp+C8h] [rbp-40h]
  _OWORD v22[7]; // [rsp+D8h] [rbp-30h] BYREF

  sub_18005221C(a2, &v16);
  sub_18004EC7C(v16);
  sub_18004EC90(v3);
  sub_18004ECCC(v4);
  sub_180052250(a2, v14, v5);
  if ( sub_1800122C0(v14) )
  {
    v6 = (__int64 *)sub_18004871C(a2, &v15);
    sub_180040BA4(*v6, (__int64)&v18);
    sub_180010910((__int64)&v15);
    v7 = (__m128 **)sub_18004871C(a2, &v15);
    sub_180041688(*v7, (__int64)v22);
    sub_180010910((__int64)&v15);
    v8 = _mm_shuffle_ps(v18, v19, 68);
    v9 = _mm_shuffle_ps(v18, v19, 238);
    v10 = _mm_shuffle_ps(v20, v21, 68);
    v11 = _mm_shuffle_ps(v20, v21, 238);
    v17[0] = _mm_shuffle_ps(v8, v10, 136);
    v17[1] = _mm_shuffle_ps(v8, v10, 221);
    v17[2] = _mm_shuffle_ps(v9, v11, 136);
    v17[3] = _mm_shuffle_ps(v9, v11, 221);
    v12 = v14[0];
    sub_180093288(v14[0], &qword_1801F4DB8, v17);
    sub_180093288(v12, &qword_1801F4DD8, v22);
    sub_180093340(v12, &qword_1801F4DF8);
    sub_180093340(v12, &qword_1801F4E18);
    sub_180093340(v12, &qword_1801F4E38);
  }
  sub_180010910((__int64)v14);
  return sub_180010910((__int64)&v16);
}
