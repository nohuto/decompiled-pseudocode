/*
 * XREFs of ?CreateScale@Matrix@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@@Z @ 0x18003BD9C
 * Callers:
 *     ?UpdateTransformMatrix@SceneNode@Engine@Spectre@@AEBAXXZ @ 0x18003E150 (-UpdateTransformMatrix@SceneNode@Engine@Spectre@@AEBAXXZ.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Utils::Math::Matrix::CreateScale(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __m128 v3; // xmm2
  __m128 v4; // xmm1

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  result = a1;
  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v3 = _mm_unpacklo_ps((__m128)0LL, (__m128)a2[1]);
  v4 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0LL, (__m128)a2[2]), (__m128)_xmm);
  *(_OWORD *)a1 = *a2;
  *(__m128 *)(a1 + 16) = v3;
  *(__m128 *)(a1 + 32) = v4;
  *(_OWORD *)(a1 + 48) = DirectX::g_XMIdentityR3;
  return result;
}
