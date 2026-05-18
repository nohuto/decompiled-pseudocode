/*
 * XREFs of ?CalculateTriangleNormal@Spectre@@YAXPEBUVector3@Math@Utils@1@III_NPEAU2341@@Z @ 0x1800E1ED8
 * Callers:
 *     ??$CalculateIndexedNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIW4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@@Z @ 0x1800E0F34 (--$CalculateIndexedNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIW4TriangularMe.c)
 *     ??$CalculateIndexedNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIW4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@@Z @ 0x1800E10D4 (--$CalculateIndexedNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIW4TriangularMe.c)
 *     ??$CalculateIndexedTangentsAndNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@55@Z @ 0x1800E1624 (--$CalculateIndexedTangentsAndNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEB.c)
 *     ??$CalculateIndexedTangentsAndNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@55@Z @ 0x1800E1840 (--$CalculateIndexedTangentsAndNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEB.c)
 *     ?CalculateNonIndexedNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IW4TriangularMeshTopology@GeometryUtils@12@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU3452@@Z @ 0x1800E1B98 (-CalculateNonIndexedNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IW4TriangularMeshTopo.c)
 *     ?CalculateNonIndexedeTangentsAndNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVector2@452@W4TriangularMeshTopology@GeometryUtils@12@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU3452@44@Z @ 0x1800E1D90 (-CalculateNonIndexedeTangentsAndNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVect.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::CalculateTriangleNormal(
        Spectre *this,
        const struct Spectre::Utils::Math::Vector3 *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // rdx
  __m128 v7; // xmm3
  __int64 v8; // r9
  __int64 v9; // r8
  __m128 v10; // xmm4
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 v13; // xmm0
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm2
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm3
  __m128 v23; // xmm3
  __m128 v24; // xmm2
  __m128 v25; // xmm2
  __m128 v26; // xmm2
  unsigned __int32 v27; // [rsp+8h] [rbp-18h]

  v6 = 3LL * (unsigned int)a2;
  v7 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 4 * v6), (__m128)*((unsigned int *)this + v6 + 2));
  v8 = 3LL * a4;
  v9 = 3LL * a3;
  v10 = _mm_sub_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 4 * v8), (__m128)*((unsigned int *)this + v8 + 2)),
          v7);
  v11 = _mm_sub_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 4 * v9), (__m128)*((unsigned int *)this + v9 + 2)),
          v7);
  v12 = 0LL;
  v12.m128_u64[0] = v11.m128_u64[0];
  v13 = (__m128)_mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  v14 = 0LL;
  v14.m128_u64[0] = v10.m128_u64[0];
  v15 = _mm_movelh_ps(v12, v13);
  v16 = _mm_movelh_ps(v14, (__m128)_mm_shuffle_ps(v10, v10, 170).m128_u32[0]);
  v17 = _mm_shuffle_ps(v16, v16, 210);
  v18 = _mm_shuffle_ps(v15, v15, 201);
  v19 = _mm_and_ps(
          _mm_sub_ps(_mm_mul_ps(v17, v18), _mm_mul_ps(_mm_shuffle_ps(v17, v17, 210), _mm_shuffle_ps(v18, v18, 201))),
          DirectX::g_XMMask3);
  v27 = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  if ( a5 )
  {
    v20 = 0LL;
    v20.m128_u64[0] = v19.m128_u64[0];
    v21 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps(v20, (__m128)v27));
    v19.m128_u64[0] = v21.m128_u64[0];
    v27 = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
  }
  v22 = 0LL;
  v22.m128_u64[0] = v19.m128_u64[0];
  v23 = _mm_movelh_ps(v22, (__m128)v27);
  v24 = _mm_add_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(a6 + 4 * v6), (__m128)*(unsigned int *)(a6 + 4 * v6 + 8)),
          v23);
  *(_QWORD *)(a6 + 4 * v6) = v24.m128_u64[0];
  *(_DWORD *)(a6 + 4 * v6 + 8) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
  v25 = _mm_add_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(a6 + 4 * v9), (__m128)*(unsigned int *)(a6 + 4 * v9 + 8)),
          v23);
  *(_QWORD *)(a6 + 4 * v9) = v25.m128_u64[0];
  *(_DWORD *)(a6 + 4 * v9 + 8) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
  v26 = _mm_add_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(a6 + 4 * v8), (__m128)*(unsigned int *)(a6 + 4 * v8 + 8)),
          v23);
  *(_QWORD *)(a6 + 4 * v8) = v26.m128_u64[0];
  *(_DWORD *)(a6 + 4 * v8 + 8) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
}
