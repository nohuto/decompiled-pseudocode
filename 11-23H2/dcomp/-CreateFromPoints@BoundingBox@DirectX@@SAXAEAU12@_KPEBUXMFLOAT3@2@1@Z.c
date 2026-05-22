/*
 * XREFs of ?CreateFromPoints@BoundingBox@DirectX@@SAXAEAU12@_KPEBUXMFLOAT3@2@1@Z @ 0x1801323EC
 * Callers:
 *     ?UpdateBounds@SceneMesh@Scenes@Composition@UI@Windows@@AEAAXXZ @ 0x180132B84 (-UpdateBounds@SceneMesh@Scenes@Composition@UI@Windows@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectX::BoundingBox::CreateFromPoints(
        struct DirectX::BoundingBox *a1,
        unsigned __int64 a2,
        const struct DirectX::XMFLOAT3 *a3)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm4
  unsigned __int64 *v5; // r8
  unsigned __int64 v6; // rdx
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  __m128 v12; // xmm0

  v3 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a3, (__m128)*((unsigned int *)a3 + 2));
  v4 = v3;
  if ( a2 > 1 )
  {
    v5 = (unsigned __int64 *)((char *)a3 + 12);
    v6 = a2 - 1;
    do
    {
      v7 = (__m128)*v5;
      v8 = (__m128)*((unsigned int *)v5 + 2);
      v5 = (unsigned __int64 *)((char *)v5 + 12);
      v9 = _mm_movelh_ps(v7, v8);
      v4 = _mm_min_ps(v4, v9);
      v3 = _mm_max_ps(v3, v9);
      --v6;
    }
    while ( v6 );
  }
  v10 = v3;
  v11 = _mm_mul_ps(_mm_sub_ps(v3, v4), (__m128)_xmm);
  v12 = _mm_mul_ps(_mm_add_ps(v10, v4), (__m128)_xmm);
  *(_QWORD *)a1 = v12.m128_u64[0];
  *((_DWORD *)a1 + 2) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  *(_QWORD *)((char *)a1 + 12) = v11.m128_u64[0];
  *((_DWORD *)a1 + 5) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
}
