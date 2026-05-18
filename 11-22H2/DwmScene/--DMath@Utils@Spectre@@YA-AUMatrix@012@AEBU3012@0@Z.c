/*
 * XREFs of ??DMath@Utils@Spectre@@YA?AUMatrix@012@AEBU3012@0@Z @ 0x180017E58
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?UpdateTransformMatrix@SceneNode@Engine@Spectre@@AEBAXXZ @ 0x18003E150 (-UpdateTransformMatrix@SceneNode@Engine@Spectre@@AEBAXXZ.c)
 *     ?UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D910 (-UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?UpdateViewProjectionMatrixStage@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DFE8 (-UpdateViewProjectionMatrixStage@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008E390 (-PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x18001B368 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 */

_OWORD *__fastcall Spectre::Utils::Math::operator*(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm5
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int128 v9; // xmm5
  _OWORD *v10; // rcx
  _OWORD *result; // rax
  _OWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a3[1];
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v12[0] = *a3;
  v8 = a3[2];
  v12[1] = v3;
  v9 = a3[3];
  v12[2] = v8;
  v12[3] = v9;
  *(double *)&v4 = DirectX::XMMatrixMultiply(a1, v12);
  *v10 = v4;
  result = v10;
  v10[1] = v5;
  v10[2] = v6;
  v10[3] = v7;
  return result;
}
