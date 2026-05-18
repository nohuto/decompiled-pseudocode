/*
 * XREFs of ?ComputeTriangleTangents@Spectre@@YAXPEBUVector3@Math@Utils@1@PEBUVector2@341@III_NPEAU2341@3@Z @ 0x1800E2ED0
 * Callers:
 *     ??$CalculateIndexedTangents@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@5@Z @ 0x1800E1274 (--$CalculateIndexedTangents@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@3.c)
 *     ??$CalculateIndexedTangents@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@5@Z @ 0x1800E1450 (--$CalculateIndexedTangents@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@3.c)
 *     ??$CalculateIndexedTangentsAndNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@55@Z @ 0x1800E1624 (--$CalculateIndexedTangentsAndNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEB.c)
 *     ??$CalculateIndexedTangentsAndNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@55@Z @ 0x1800E1840 (--$CalculateIndexedTangentsAndNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEB.c)
 *     ?CalculateNonIndexedTangents@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVector2@452@W4TriangularMeshTopology@GeometryUtils@12@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU3452@4@Z @ 0x1800E1C74 (-CalculateNonIndexedTangents@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVector2@452@W4T.c)
 *     ?CalculateNonIndexedeTangentsAndNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVector2@452@W4TriangularMeshTopology@GeometryUtils@12@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU3452@44@Z @ 0x1800E1D90 (-CalculateNonIndexedeTangentsAndNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVect.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::ComputeTriangleTangents(
        Spectre *this,
        const struct Spectre::Utils::Math::Vector3 *a2,
        const struct Spectre::Utils::Math::Vector2 *a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        struct Spectre::Utils::Math::Vector3 *a8)
{
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r9
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm12_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm9_4
  float v19; // xmm11_4
  float v20; // xmm13_4
  float v21; // xmm1_4
  __m128 v22; // xmm3
  __m128 v24; // xmm3
  __m128 v25; // xmm2
  __m128 v26; // xmm2
  __m128 v27; // xmm2
  __m128 v28; // xmm3
  __m128 v29; // xmm2
  __m128 v30; // xmm2
  __m128 v31; // xmm2
  __int64 v32; // [rsp+8h] [rbp-79h]
  unsigned __int64 v33; // [rsp+8h] [rbp-79h]
  float v34; // [rsp+10h] [rbp-71h]
  float v35; // [rsp+10h] [rbp-71h]
  __int64 v36; // [rsp+18h] [rbp-69h]
  unsigned __int64 v37; // [rsp+18h] [rbp-69h]
  __int64 v38; // [rsp+28h] [rbp-59h]

  v8 = (unsigned int)a3;
  v9 = a4;
  v10 = 3LL * a4;
  v11 = *((float *)a2 + 2 * v9 + 1) - *((float *)a2 + 2 * v8 + 1);
  v12 = *((float *)a2 + 2 * v9) - *((float *)a2 + 2 * v8);
  v32 = *(_QWORD *)((char *)this + 12 * v8);
  v36 = *(_QWORD *)((char *)this + 4 * v10);
  v13 = *(float *)&v36 - *(float *)&v32;
  v14 = *((float *)&v36 + 1) - *((float *)&v32 + 1);
  v34 = *((float *)this + 3 * v8 + 2);
  v15 = *((float *)this + v10 + 2) - v34;
  v16 = *((float *)a2 + 2 * a5 + 1) - *((float *)a2 + 2 * v8 + 1);
  v17 = *((float *)a2 + 2 * a5) - *((float *)a2 + 2 * v8);
  v38 = *(_QWORD *)((char *)this + 12 * a5);
  v18 = *(float *)&v38 - *(float *)&v32;
  v19 = *((float *)&v38 + 1) - *((float *)&v32 + 1);
  v20 = *((float *)this + 3 * a5 + 2) - v34;
  v21 = (float)(v16 * v12) - (float)(v11 * v17);
  if ( v21 != 0.0 )
  {
    *(float *)&v33 = (float)((float)(v16 * v13) - (float)(v11 * v18)) * (float)(1.0 / v21);
    *((float *)&v33 + 1) = (float)((float)(v16 * v14) - (float)(v11 * v19)) * (float)(1.0 / v21);
    v35 = (float)((float)(v16 * v15) - (float)(v11 * v20)) * (float)(1.0 / v21);
    if ( a6 )
    {
      v22 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v33, (__m128)LODWORD(v35)));
      v33 = v22.m128_u64[0];
      LODWORD(v35) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
    }
    v24 = _mm_movelh_ps((__m128)v33, (__m128)LODWORD(v35));
    v25 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a7 + 12 * v8), (__m128)*(unsigned int *)(a7 + 12 * v8 + 8)),
            v24);
    *(_QWORD *)(a7 + 12 * v8) = v25.m128_u64[0];
    *(_DWORD *)(a7 + 12 * v8 + 8) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
    v26 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a7 + 4 * v10), (__m128)*(unsigned int *)(a7 + 4 * v10 + 8)),
            v24);
    *(_QWORD *)(a7 + 4 * v10) = v26.m128_u64[0];
    *(_DWORD *)(a7 + 4 * v10 + 8) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
    v27 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a7 + 12LL * a5), (__m128)*(unsigned int *)(a7 + 12LL * a5 + 8)),
            v24);
    *((float *)&v37 + 1) = (float)((float)(v12 * v19) - (float)(v17 * v14)) * (float)(1.0 / v21);
    *(float *)&v37 = (float)((float)(v12 * v18) - (float)(v17 * v13)) * (float)(1.0 / v21);
    v28 = _mm_movelh_ps(
            (__m128)v37,
            (__m128)COERCE_UNSIGNED_INT((float)((float)(v12 * v20) - (float)(v17 * v15)) * (float)(1.0 / v21)));
    *(_QWORD *)(a7 + 12LL * a5) = v27.m128_u64[0];
    *(_DWORD *)(a7 + 12LL * a5 + 8) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
    v29 = _mm_add_ps(
            _mm_movelh_ps(
              (__m128)*(unsigned __int64 *)((char *)a8 + 12 * v8),
              (__m128)*((unsigned int *)a8 + 3 * v8 + 2)),
            v28);
    *(_QWORD *)((char *)a8 + 12 * v8) = v29.m128_u64[0];
    *((_DWORD *)a8 + 3 * v8 + 2) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
    v30 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a8 + 4 * v10), (__m128)*((unsigned int *)a8 + v10 + 2)),
            v28);
    *(_QWORD *)((char *)a8 + 4 * v10) = v30.m128_u64[0];
    *((_DWORD *)a8 + v10 + 2) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
    v31 = _mm_add_ps(
            _mm_movelh_ps(
              (__m128)*(unsigned __int64 *)((char *)a8 + 12 * a5),
              (__m128)*((unsigned int *)a8 + 3 * a5 + 2)),
            v28);
    *(_QWORD *)((char *)a8 + 12 * a5) = v31.m128_u64[0];
    *((_DWORD *)a8 + 3 * a5 + 2) = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
  }
}
