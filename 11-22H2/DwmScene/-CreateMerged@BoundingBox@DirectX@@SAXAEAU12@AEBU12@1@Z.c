/*
 * XREFs of ?CreateMerged@BoundingBox@DirectX@@SAXAEAU12@AEBU12@1@Z @ 0x180040AA0
 * Callers:
 *     ?MergeWorldSpace@Bounds@Engine@Spectre@@QEAAXAEAUBoundingBox@DirectX@@AEA_N@Z @ 0x18004A3B0 (-MergeWorldSpace@Bounds@Engine@Spectre@@QEAAXAEAUBoundingBox@DirectX@@AEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectX::BoundingBox::CreateMerged(
        struct DirectX::BoundingBox *a1,
        const struct DirectX::BoundingBox *a2,
        const struct DirectX::BoundingBox *a3)
{
  __m128 v3; // xmm5
  __m128 v4; // xmm6
  __m128 v5; // xmm4
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm0
  __m128 v9; // xmm6
  __m128 v10; // xmm0

  v3 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a2, (__m128)*((unsigned int *)a2 + 2));
  v4 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a2 + 12), (__m128)*((unsigned int *)a2 + 5));
  v5 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a3, (__m128)*((unsigned int *)a3 + 2));
  v6 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a3 + 12), (__m128)*((unsigned int *)a3 + 5));
  v7 = _mm_min_ps(_mm_sub_ps(v3, v4), _mm_sub_ps(v5, v6));
  v8 = _mm_max_ps(_mm_add_ps(v4, v3), _mm_add_ps(v6, v5));
  v9 = _mm_mul_ps(_mm_sub_ps(v8, v7), (__m128)_xmm);
  v10 = _mm_mul_ps(_mm_add_ps(v8, v7), (__m128)_xmm);
  *(_QWORD *)a1 = v10.m128_u64[0];
  *((_DWORD *)a1 + 2) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  *(_QWORD *)((char *)a1 + 12) = v9.m128_u64[0];
  *((_DWORD *)a1 + 5) = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
}
