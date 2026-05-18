/*
 * XREFs of ?CreateTranslation@Matrix@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@@Z @ 0x18003BE0C
 * Callers:
 *     ?UpdateTransformMatrix@SceneNode@Engine@Spectre@@AEBAXXZ @ 0x18003E150 (-UpdateTransformMatrix@SceneNode@Engine@Spectre@@AEBAXXZ.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Utils::Math::Matrix::CreateTranslation(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  __m128 v3; // xmm2
  __m128 v4; // xmm3

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
  v3 = (__m128)*((unsigned int *)a2 + 2);
  v4 = (__m128)*a2;
  *(_OWORD *)a1 = DirectX::g_XMIdentityR0;
  *(_OWORD *)(a1 + 16) = DirectX::g_XMIdentityR1;
  *(_OWORD *)(a1 + 32) = DirectX::g_XMIdentityR2;
  *(__m128 *)(a1 + 48) = _mm_movelh_ps(v4, _mm_unpacklo_ps(v3, (__m128)LODWORD(FLOAT_1_0)));
  return result;
}
