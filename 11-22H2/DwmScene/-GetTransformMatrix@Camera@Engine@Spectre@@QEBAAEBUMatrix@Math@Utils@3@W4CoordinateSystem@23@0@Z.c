/*
 * XREFs of ?GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z @ 0x18005BB34
 * Callers:
 *     ?SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z @ 0x18001AF10 (-SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z.c)
 *     ?GetViewProjectionMatrix@Camera@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18005BB7C (-GetViewProjectionMatrix@Camera@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?InternalTransformVector4D@Camera@Engine@Spectre@@AEBA?AUVector4@Math@Utils@3@U4563@PEBUMatrix@563@W4CoordinateSystem@23@21W4VectorTensorVariance@23@@Z @ 0x18005BC74 (-InternalTransformVector4D@Camera@Engine@Spectre@@AEBA-AUVector4@Math@Utils@3@U4563@PEBUMatrix@5.c)
 *     ?ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x18005CD30 (-ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV-$shared_ptr@VCommandList@Engine@Spectre@.c)
 *     ?PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008E390 (-PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ?UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DBC8 (-UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ.c)
 */

__int64 __fastcall Spectre::Engine::Camera::GetTransformMatrix(Spectre::Engine::Camera *a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx

  v3 = a3;
  v5 = a2;
  Spectre::Engine::Camera::UpdateMatrixStages(a1);
  return (__int64)a1 + 64 * (v3 + 4 * v5) + 548;
}
