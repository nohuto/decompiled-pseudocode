/*
 * XREFs of ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918
 * Callers:
 *     ?SetTransform@SpectreLightNode@@UEAAJPEBUD2D_VECTOR_3F@@0@Z @ 0x180012F60 (-SetTransform@SpectreLightNode@@UEAAJPEBUD2D_VECTOR_3F@@0@Z.c)
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500 (-Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?Reset@Aimer@Engine@Spectre@@UEAAXXZ @ 0x180096A00 (-Reset@Aimer@Engine@Spectre@@UEAAXXZ.c)
 *     ?Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180096B80 (-Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     acosf @ 0x18000BFE4 (acosf.c)
 *     ?Clamp@Math@Utils@Spectre@@YAMMMM@Z @ 0x18001112C (-Clamp@Math@Utils@Spectre@@YAMMMM@Z.c)
 *     ?Invert@Matrix@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x1800189F4 (-Invert@Matrix@Math@Utils@Spectre@@QEBA-AU1234@XZ.c)
 *     ?CreateFromAxisAngle@Quaternion@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@M@Z @ 0x18003BD60 (-CreateFromAxisAngle@Quaternion@Math@Utils@Spectre@@SA-AU1234@AEBUVector3@234@M@Z.c)
 *     ?GetWorldPosition@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@XZ @ 0x18003C334 (-GetWorldPosition@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@XZ.c)
 *     ?Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ @ 0x18003CF20 (-Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ.c)
 *     ?SetWorldRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003DBA8 (-SetWorldRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?XMMatrixLookToLH@DirectX@@YQ?AUXMMATRIX@1@T__m128@@00@Z @ 0x18003E824 (-XMMatrixLookToLH@DirectX@@YQ-AUXMMATRIX@1@T__m128@@00@Z.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x18003EAC4 (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 */

__int64 __fastcall Spectre::Engine::SceneNode::LookAt(Spectre::Engine::SceneNode *a1, unsigned __int64 *a2, __int64 a3)
{
  __m128 v6; // xmm0
  __m128 v7; // xmm3
  __m128 v8; // xmm8
  __m128 v9; // xmm8
  __m128 v10; // xmm6
  __m128 v11; // xmm4
  __m128 v12; // xmm3
  __m128 v13; // xmm3
  __m128 v14; // xmm1
  __int32 v15; // eax
  __m128 v16; // xmm7
  __m128 v17; // xmm7
  __m128 v18; // xmm2
  __m128 v19; // xmm4
  __m128 v20; // xmm0
  __m128 v21; // xmm3
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  __m128 v24; // xmm2
  __m128 v25; // xmm3
  __m128 v26; // xmm2
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __int128 v30; // xmm0
  __m128 v31; // xmm3
  __m128 v32; // xmm6
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  Spectre::Utils::Math *v35; // rcx
  float v36; // xmm0_4
  float v37; // xmm0_4
  __int128 v38; // xmm0
  __int128 v40; // [rsp+28h] [rbp-89h] BYREF
  union __m128 v41; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v42[64]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v43; // [rsp+88h] [rbp-29h] BYREF

  Spectre::Engine::SceneNode::VerifyWriteAccess(a1);
  Spectre::Engine::SceneNode::GetWorldPosition(a1, (__int64)&v40);
  v6 = (__m128)*((unsigned int *)a2 + 2);
  v7 = 0LL;
  v8 = (__m128)*a2;
  v41.m128_u64[0] = 0LL;
  v9 = _mm_movelh_ps(v8, v6);
  v10 = _mm_movelh_ps((__m128)(unsigned __int64)v40, (__m128)DWORD2(v40));
  v11 = _mm_sub_ps(v9, v10);
  v7.m128_u64[0] = v11.m128_u64[0];
  v41.m128_i32[2] = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  v12 = _mm_movelh_ps(v7, (__m128)v41.m128_u32[2]);
  v13 = _mm_mul_ps(v12, v12);
  v14 = _mm_shuffle_ps(v13, v13, 102);
  v13.m128_f32[0] = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v13, v13, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v38 = Spectre::Utils::Math::Quaternion::Identity;
    goto LABEL_6;
  }
  DWORD2(v40) = v41.m128_i32[2];
  *(_QWORD *)&v40 = v11.m128_u64[0];
  Spectre::Utils::Math::Vector3::Normalize((Spectre::Utils::Math::Vector3 *)&v40);
  v15 = *(_DWORD *)(a3 + 8);
  v41.m128_u64[0] = *(_QWORD *)a3;
  v41.m128_i32[2] = v15;
  Spectre::Utils::Math::Vector3::Normalize((Spectre::Utils::Math::Vector3 *)&v41);
  v16 = (__m128)(unsigned __int64)v40;
  *(_QWORD *)&v40 = 0LL;
  v17 = _mm_movelh_ps(v16, (__m128)DWORD2(v40));
  v18 = _mm_shuffle_ps(v17, v17, 201);
  v19 = _mm_movelh_ps((__m128)v41.m128_u64[0], (__m128)v41.m128_u32[2]);
  v20 = _mm_shuffle_ps(v18, v18, 201);
  v21 = _mm_shuffle_ps(v19, v19, 210);
  v22 = _mm_shuffle_ps(v21, v21, 210);
  v23 = _mm_mul_ps(v21, v18);
  v24 = 0LL;
  v25 = _mm_and_ps(_mm_sub_ps(v23, _mm_mul_ps(v22, v20)), DirectX::g_XMMask3);
  v24.m128_u64[0] = v25.m128_u64[0];
  DWORD2(v40) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
  v26 = _mm_movelh_ps(v24, (__m128)DWORD2(v40));
  v27 = _mm_mul_ps(v26, v26);
  v28 = _mm_shuffle_ps(v27, v27, 102);
  v27.m128_f32[0] = (float)(v27.m128_f32[0] + v28.m128_f32[0]) + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v27, v27, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v31 = _mm_shuffle_ps(v17, v17, 210);
    DWORD2(v40) = -1082130432;
    v32 = _mm_movelh_ps((__m128)(unsigned __int64)Spectre::Utils::Math::Vector3::Forward, (__m128)0xBF800000);
    v33 = _mm_shuffle_ps(v32, v32, 201);
    v34 = _mm_and_ps(
            _mm_sub_ps(_mm_mul_ps(v31, v33), _mm_mul_ps(_mm_shuffle_ps(v31, v31, 210), _mm_shuffle_ps(v33, v33, 201))),
            DirectX::g_XMMask3);
    v41.m128_u64[0] = v34.m128_u64[0];
    v34.m128_i32[0] = _mm_shuffle_ps(v34, v34, 170).m128_u32[0];
    v41.m128_i32[2] = v34.m128_i32[0];
    Spectre::Utils::Math::Vector3::Normalize((Spectre::Utils::Math::Vector3 *)&v41);
    v36 = Spectre::Utils::Math::Clamp(v35, -1.0, 1.0, v34.m128_f32[0]);
    v37 = acosf(v36);
    Spectre::Utils::Math::Quaternion::CreateFromAxisAngle((__int64)&v40, &v41, v37);
    v38 = v40;
LABEL_6:
    v40 = v38;
    return Spectre::Engine::SceneNode::SetWorldRotation(a1, &v40);
  }
  *(_OWORD *)&v42[4] = 0LL;
  *(_OWORD *)&v42[44] = 0LL;
  v29 = v19;
  *((_QWORD *)&v30 + 1) = v10.m128_u64[1];
  *(_OWORD *)&v42[24] = 0LL;
  *(double *)&v30 = DirectX::XMMatrixLookToLH();
  *(_OWORD *)v42 = v30;
  *(__m128 *)&v42[16] = _mm_sub_ps(v10, v9);
  *(__m128 *)&v42[32] = v29;
  *(_OWORD *)&v42[48] = 0LL;
  Spectre::Utils::Math::Matrix::Invert((__int128 *)v42, (__int64)&v43);
  *((_QWORD *)&v30 + 1) = *((_QWORD *)&v43 + 1);
  *(double *)&v30 = DirectX::XMQuaternionRotationMatrix();
  v40 = v30;
  return Spectre::Engine::SceneNode::SetWorldRotation(a1, &v40);
}
