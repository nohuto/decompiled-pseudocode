/*
 * XREFs of sub_18008E1E0 @ 0x18008E1E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180040BA4 @ 0x180040BA4 (sub_180040BA4.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 *     sub_18005221C @ 0x18005221C (sub_18005221C.c)
 *     sub_180052250 @ 0x180052250 (sub_180052250.c)
 *     sub_180093288 @ 0x180093288 (sub_180093288.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008E1E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r9
  __int64 *v5; // rax
  __m128 v6; // xmm3
  __m128 v7; // xmm4
  __m128 v8; // xmm0
  __m128 v9; // xmm2
  _QWORD v11[2]; // [rsp+20h] [rbp-59h] BYREF
  __int128 v12; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-39h] BYREF
  __m128 v14; // [rsp+50h] [rbp-29h]
  __m128 v15; // [rsp+60h] [rbp-19h]
  _OWORD v16[2]; // [rsp+70h] [rbp-9h]
  __m128 v17; // [rsp+90h] [rbp+17h] BYREF
  __m128 v18; // [rsp+A0h] [rbp+27h]
  __m128 v19; // [rsp+B0h] [rbp+37h]
  __m128 v20; // [rsp+C0h] [rbp+47h]

  sub_18005221C(a2, v13);
  sub_180052250(v3, v11, v4);
  if ( sub_1800122C0(v11) )
  {
    v5 = (__int64 *)sub_18004871C(a2, &v12);
    sub_180040BA4(*v5, (__int64)&v17);
    sub_180010910((__int64)&v12);
    v6 = _mm_shuffle_ps(v17, v18, 68);
    v7 = _mm_shuffle_ps(v17, v18, 238);
    v8 = _mm_shuffle_ps(v19, v20, 68);
    v9 = _mm_shuffle_ps(v19, v20, 238);
    v14 = _mm_shuffle_ps(v6, v8, 136);
    v15 = _mm_shuffle_ps(v6, v8, 221);
    v16[0] = _mm_shuffle_ps(v7, v9, 136);
    v16[1] = _mm_shuffle_ps(v7, v9, 221);
    sub_180093288(v11[0]);
  }
  sub_180010910((__int64)v11);
  return sub_180010910((__int64)v13);
}
