/*
 * XREFs of ?UpdateTransformMatrix@SceneNode@Engine@Spectre@@AEBAXXZ @ 0x18003E150
 * Callers:
 *     ?GetTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C2B4 (-GetTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 * Callees:
 *     ??DMath@Utils@Spectre@@YA?AUMatrix@012@AEBU3012@0@Z @ 0x180017E58 (--DMath@Utils@Spectre@@YA-AUMatrix@012@AEBU3012@0@Z.c)
 *     ?CreateScale@Matrix@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@@Z @ 0x18003BD9C (-CreateScale@Matrix@Math@Utils@Spectre@@SA-AU1234@AEBUVector3@234@@Z.c)
 *     ?CreateTranslation@Matrix@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@@Z @ 0x18003BE0C (-CreateTranslation@Matrix@Math@Utils@Spectre@@SA-AU1234@AEBUVector3@234@@Z.c)
 */

void __fastcall Spectre::Engine::SceneNode::UpdateTransformMatrix(Spectre::Engine::SceneNode *this)
{
  __int64 v1; // r9
  __m128 v2; // xmm3
  __m128 v3; // xmm4
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm5
  __m128 v7; // xmm4
  __m128 v8; // xmm3
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __int128 *v15; // rax
  __int128 *v16; // rax
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm0
  __int64 v20; // r9
  _OWORD v21[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v22[4]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v23[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v24[64]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v25[64]; // [rsp+120h] [rbp+20h] BYREF

  Spectre::Utils::Math::Matrix::CreateTranslation((__int64)v23, (unsigned __int64 *)this + 18);
  v2 = *(__m128 *)(v1 + 156);
  v3 = _mm_add_ps(v2, v2);
  v4 = _mm_mul_ps(v3, v2);
  v5 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 230), _mm_shuffle_ps(v2, v2, 208));
  v6 = _mm_sub_ps(
         _mm_sub_ps((__m128)_xmm, _mm_and_ps(_mm_shuffle_ps(v4, v4, 193), DirectX::g_XMMask3)),
         _mm_and_ps(_mm_shuffle_ps(v4, v4, 218), DirectX::g_XMMask3));
  v7 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 201), _mm_shuffle_ps(v2, v2, 255));
  v8 = _mm_add_ps(v7, v5);
  v9 = _mm_sub_ps(v5, v7);
  v10 = _mm_shuffle_ps(v8, v9, 73);
  v11 = _mm_shuffle_ps(v8, v9, 160);
  v12 = _mm_shuffle_ps(v10, v10, 120);
  v13 = _mm_shuffle_ps(v6, v12, 76);
  v14 = _mm_shuffle_ps(v6, v12, 237);
  v21[0] = _mm_shuffle_ps(v13, v13, 120);
  v21[1] = _mm_shuffle_ps(v14, v14, 114);
  v21[2] = _mm_shuffle_ps(_mm_shuffle_ps(v11, v11, 136), v6, 228);
  v21[3] = DirectX::g_XMIdentityR3;
  Spectre::Utils::Math::Matrix::CreateScale((__int64)v22, (unsigned int *)(v1 + 172));
  v15 = Spectre::Utils::Math::operator*((__int64)v24, v22, v21);
  v16 = Spectre::Utils::Math::operator*((__int64)v25, v15, v23);
  v17 = v16[2];
  v18 = v16[3];
  v19 = *v16;
  *(_OWORD *)(v20 + 240) = v16[1];
  *(_OWORD *)(v20 + 224) = v19;
  *(_OWORD *)(v20 + 256) = v17;
  *(_OWORD *)(v20 + 272) = v18;
  *(_QWORD *)(v20 + 352) = *(_QWORD *)(v20 + 208);
}
