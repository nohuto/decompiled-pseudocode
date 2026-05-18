/*
 * XREFs of sub_18001D120 @ 0x18001D120
 * Callers:
 *     sub_180013140 @ 0x180013140 (sub_180013140.c)
 * Callees:
 *     sub_1800B6364 @ 0x1800B6364 (sub_1800B6364.c)
 *     sub_1800B659C @ 0x1800B659C (sub_1800B659C.c)
 *     sub_1800B6600 @ 0x1800B6600 (sub_1800B6600.c)
 */

__int64 __fastcall sub_18001D120(__int64 a1, __int64 a2, float a3)
{
  float *v3; // r8
  float v4; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  __int64 result; // rax
  __m128 *v9; // r9
  _DWORD v10[4]; // [rsp+20h] [rbp-E0h] BYREF
  __m128 v11[10]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[144]; // [rsp+D0h] [rbp-30h] BYREF

  sub_1800B659C(v12, a2, a2, a1);
  v4 = a3 * *v3;
  v6 = a3 * v3[2];
  v7 = a3 * v3[1];
  *(float *)v10 = v4;
  v10[3] = 1065353216;
  *(float *)&v10[1] = v7;
  *(float *)&v10[2] = v6;
  sub_1800B6600(v12, v10);
  result = sub_1800B6364(v11, v12);
  v9[3] = _mm_add_ps(v9[3], v11[0]);
  v9[4] = _mm_add_ps(v9[4], v11[1]);
  v9[5] = _mm_add_ps(v9[5], v11[2]);
  v9[6] = _mm_add_ps(v9[6], v11[3]);
  v9[7] = _mm_add_ps(v9[7], v11[4]);
  v9[8] = _mm_add_ps(v9[8], v11[5]);
  v9[9] = _mm_add_ps(v9[9], v11[6]);
  v9[10] = _mm_add_ps(v9[10], v11[7]);
  v9[11] = _mm_add_ps(v9[11], v11[8]);
  return result;
}
