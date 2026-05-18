/*
 * XREFs of ?FinalizeVertexTangents@Spectre@@YAXPEAUVector4@Math@Utils@1@IPEBUVector3@341@11_N@Z @ 0x1800E3210
 * Callers:
 *     ?ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@0IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E23E0 (-ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils@Spectre@@.c)
 *     ?ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@2@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2910 (-ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::FinalizeVertexTangents(
        __m128 *this,
        struct Spectre::Utils::Math::Vector4 *a2,
        __int64 a3,
        const struct Spectre::Utils::Math::Vector3 *a4,
        const struct Spectre::Utils::Math::Vector3 *a5,
        const struct Spectre::Utils::Math::Vector3 *a6)
{
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  __m128 v9; // xmm7
  __m128 v10; // xmm3
  __m128 v11; // xmm5
  __m128 v12; // xmm2
  __m128 v13; // xmm6
  __m128 v14; // xmm1
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  __m128 v18; // xmm5
  __m128 v19; // xmm3
  __m128 v20; // xmm3
  __m128 v21; // xmm2
  __m128 v22; // xmm0
  __m128 v23; // xmm2
  __m128 v24; // xmm2
  __m128 v25; // xmm2
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm6
  __m128 v30; // xmm4
  __m128 v31; // xmm1
  float v32; // xmm0_4
  unsigned int v33; // [rsp+50h] [rbp-9h]

  if ( (_DWORD)a2 )
  {
    v6 = a3 - (_QWORD)a4;
    v7 = a5 - a4;
    v8 = (unsigned int)a2;
    do
    {
      v9 = (__m128)*(unsigned __int64 *)((char *)a4 + v7);
      v10 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a4, (__m128)*((unsigned int *)a4 + 2));
      v11 = _mm_movelh_ps(
              (__m128)*(unsigned __int64 *)((char *)a4 + v6),
              (__m128)*(unsigned int *)((char *)a4 + v6 + 8));
      v33 = *(_DWORD *)((char *)a4 + v7 + 8);
      v12 = _mm_mul_ps(v11, v10);
      v13 = _mm_shuffle_ps(v10, v10, 210);
      v14 = _mm_shuffle_ps(v12, v12, 153);
      v12.m128_f32[0] = (float)(v12.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
      v15 = _mm_shuffle_ps(v12, v12, 0);
      v16 = 0LL;
      v17 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v11);
      v18 = _mm_shuffle_ps(v11, v11, 201);
      v16.m128_u64[0] = v17.m128_u64[0];
      v19 = _mm_sub_ps(v10, _mm_movelh_ps(v16, (__m128)_mm_shuffle_ps(v17, v17, 170).m128_u32[0]));
      this->m128_i32[0] = v19.m128_i32[0];
      this->m128_i32[1] = v19.m128_i32[1];
      this->m128_i32[2] = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
      v20 = 0LL;
      v21 = _mm_mul_ps(*this, *this);
      v22 = _mm_shuffle_ps(v21, v21, 238);
      v23 = _mm_add_ps(v21, v22);
      v24 = _mm_shuffle_ps(v23, v23, 64);
      v25 = _mm_add_ps(v24, _mm_shuffle_ps(v22, v24, 240));
      v26 = _mm_shuffle_ps(v25, v25, 170);
      v27 = _mm_sqrt_ps(v26);
      v28 = _mm_cmpneq_ps(v26, DirectX::g_XMInfinity);
      *this = _mm_or_ps(
                _mm_and_ps(_mm_and_ps(_mm_div_ps(*this, v27), _mm_cmpneq_ps((__m128)0LL, v27)), v28),
                _mm_andnot_ps(v28, DirectX::g_XMQNaN));
      v29 = _mm_and_ps(
              _mm_sub_ps(_mm_mul_ps(v13, v18), _mm_mul_ps(_mm_shuffle_ps(v13, v13, 210), _mm_shuffle_ps(v18, v18, 201))),
              DirectX::g_XMMask3);
      v20.m128_u64[0] = v29.m128_u64[0];
      v30 = _mm_mul_ps(
              _mm_movelh_ps(v9, (__m128)v33),
              _mm_movelh_ps(v20, (__m128)_mm_shuffle_ps(v29, v29, 170).m128_u32[0]));
      v31 = _mm_shuffle_ps(v30, v30, 153);
      if ( (float)((float)(v30.m128_f32[0] + v31.m128_f32[0]) + _mm_shuffle_ps(v31, v31, 85).m128_f32[0]) >= 0.0 )
        v32 = FLOAT_1_0;
      else
        v32 = FLOAT_N1_0;
      if ( (_BYTE)a6 )
        LODWORD(v32) ^= _xmm;
      this->m128_f32[3] = v32;
      a4 = (const struct Spectre::Utils::Math::Vector3 *)((char *)a4 + 12);
      ++this;
      --v8;
    }
    while ( v8 );
  }
}
