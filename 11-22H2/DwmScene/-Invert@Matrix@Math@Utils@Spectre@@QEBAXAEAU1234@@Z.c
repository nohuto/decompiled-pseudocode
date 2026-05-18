/*
 * XREFs of ?Invert@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z @ 0x18003C8D8
 * Callers:
 *     ?GetWorldTransformMatrixInverse@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C7D8 (-GetWorldTransformMatrixInverse@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 * Callees:
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x18001B080 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

void __fastcall Spectre::Utils::Math::Matrix::Invert(
        Spectre::Utils::Math::Matrix *this,
        struct Spectre::Utils::Math::Matrix *a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __m128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_OWORD *)this + 1);
  v4 = *((_OWORD *)this + 2);
  v5 = *((_OWORD *)this + 3);
  *(__m128 *)a2 = DirectX::XMMatrixInverse(&v6, *(double *)&v3, *(double *)&v4, *(double *)&v5);
  *((_OWORD *)a2 + 1) = v3;
  *((_OWORD *)a2 + 2) = v4;
  *((_OWORD *)a2 + 3) = v5;
}
