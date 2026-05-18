/*
 * XREFs of ?Decompose@Matrix@Math@Utils@Spectre@@QEBA_NAEAUVector3@234@AEAUQuaternion@234@0@Z @ 0x18003BE90
 * Callers:
 *     Spectre::Engine::MatrixDecompose @ 0x18003CBE0 (Spectre--Engine--MatrixDecompose.c)
 * Callees:
 *     ?XMMatrixDecompose@DirectX@@YQ_NPEAT__m128@@00UXMMATRIX@1@@Z @ 0x18003E330 (-XMMatrixDecompose@DirectX@@YQ_NPEAT__m128@@00UXMMATRIX@1@@Z.c)
 */

char __fastcall Spectre::Utils::Math::Matrix::Decompose(
        Spectre::Utils::Math::Matrix *this,
        struct Spectre::Utils::Math::Vector3 *a2,
        struct Spectre::Utils::Math::Quaternion *a3,
        struct Spectre::Utils::Math::Vector3 *a4)
{
  char result; // al
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __m128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __m128 v12; // [rsp+40h] [rbp-18h] BYREF

  result = DirectX::XMMatrixDecompose(&v10, &v11, &v12);
  if ( result )
  {
    v8 = v10;
    result = 1;
    v9 = v12;
    *(_QWORD *)a2 = v10.m128_u64[0];
    *((_DWORD *)a2 + 2) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
    *(_OWORD *)a3 = v11;
    *(_QWORD *)a4 = v9.m128_u64[0];
    *((_DWORD *)a4 + 2) = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  }
  return result;
}
