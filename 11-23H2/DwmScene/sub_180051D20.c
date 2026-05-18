/*
 * XREFs of sub_180051D20 @ 0x180051D20
 * Callers:
 *     sub_180051810 @ 0x180051810 (sub_180051810.c)
 *     sub_180051C0C @ 0x180051C0C (sub_180051C0C.c)
 *     sub_180051CB0 @ 0x180051CB0 (sub_180051CB0.c)
 * Callees:
 *     sub_180051910 @ 0x180051910 (sub_180051910.c)
 */

void __fastcall sub_180051D20(__int64 a1)
{
  __m128 v1; // xmm2
  __int64 v2; // rax
  __int64 v3; // rax
  float v4; // xmm3_4
  float v5; // xmm0_4
  __int64 v6; // rax
  int v7; // xmm4_4
  float v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = _mm_add_ps(_mm_add_ps(*(__m128 *)(a1 + 320), *(__m128 *)(a1 + 304)), *(__m128 *)(a1 + 336));
  *(_DWORD *)(a1 + 400) = v1.m128_i32[0];
  *(_DWORD *)(a1 + 408) = _mm_shuffle_ps(v1, v1, 170).m128_u32[0];
  *(_DWORD *)(a1 + 404) = _mm_shuffle_ps(v1, v1, 85).m128_u32[0];
  *(_DWORD *)(a1 + 412) = _mm_shuffle_ps(v1, v1, 255).m128_u32[0];
  *(__m128 *)(a1 + 400) = _mm_mul_ps((__m128)xmmword_18019B920, *(__m128 *)(a1 + 400));
  *(_OWORD *)v8 = *(_OWORD *)(a1 + 256);
  sub_180051910(v8);
  *(_OWORD *)v8 = *(_OWORD *)(v2 + 272);
  v4 = sub_180051910(v8);
  *(_OWORD *)v8 = *(_OWORD *)(v3 + 288);
  v5 = sub_180051910(v8);
  *(_DWORD *)(v6 + 416) = v7;
  *(float *)(v6 + 420) = v4;
  *(float *)(v6 + 424) = v5;
  sub_18003CFA0((unsigned __int64 *)(v6 + 416));
}
