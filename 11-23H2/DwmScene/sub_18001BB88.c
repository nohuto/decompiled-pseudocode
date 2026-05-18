/*
 * XREFs of sub_18001BB88 @ 0x18001BB88
 * Callers:
 *     sub_180012AA0 @ 0x180012AA0 (sub_180012AA0.c)
 * Callees:
 *     sub_1800A3B3C @ 0x1800A3B3C (sub_1800A3B3C.c)
 *     sub_1800A3D78 @ 0x1800A3D78 (sub_1800A3D78.c)
 *     sub_1800A3DDC @ 0x1800A3DDC (sub_1800A3DDC.c)
 */

__int64 __fastcall sub_18001BB88(__int64 a1, __int64 a2, float a3)
{
  float *v3; // r8
  float v4; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  __int64 result; // rax
  __m128 *v9; // r9
  __m128 v10; // xmm1
  _DWORD v11[4]; // [rsp+20h] [rbp-E0h] BYREF
  __m128 v12[10]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[144]; // [rsp+D0h] [rbp-30h] BYREF

  sub_1800A3D78(v13, a2, a2, a1);
  v4 = a3 * *v3;
  v6 = a3 * v3[2];
  v7 = a3 * v3[1];
  *(float *)v11 = v4;
  v11[3] = 1065353216;
  *(float *)&v11[1] = v7;
  *(float *)&v11[2] = v6;
  sub_1800A3DDC(v13, v11);
  result = sub_1800A3B3C(v12, v13);
  v9[3] = _mm_add_ps(v9[3], v12[0]);
  v9[4] = _mm_add_ps(v9[4], v12[1]);
  v9[5] = _mm_add_ps(v12[2], v9[5]);
  v9[6] = _mm_add_ps(v9[6], v12[3]);
  v9[7] = _mm_add_ps(v9[7], v12[4]);
  v10 = v12[6];
  v9[8] = _mm_add_ps(v9[8], v12[5]);
  v9[9] = _mm_add_ps(v10, v9[9]);
  v9[10] = _mm_add_ps(v9[10], v12[7]);
  v9[11] = _mm_add_ps(v9[11], v12[8]);
  return result;
}
