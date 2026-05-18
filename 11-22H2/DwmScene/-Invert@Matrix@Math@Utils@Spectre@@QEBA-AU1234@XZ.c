/*
 * XREFs of ?Invert@Matrix@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x1800189F4
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 *     ?SetWorldPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x18003DA80 (-SetWorldPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DC38 (-UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DE70 (-UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 * Callees:
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x18001B080 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

__int64 __fastcall Spectre::Utils::Math::Matrix::Invert(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int64 result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(double *)&v2 = DirectX::XMMatrixInverse(v8);
  *(_OWORD *)a2 = v2;
  result = a2;
  *(_OWORD *)(a2 + 16) = v4;
  *(_OWORD *)(a2 + 32) = v5;
  *(_OWORD *)(a2 + 48) = v6;
  return result;
}
