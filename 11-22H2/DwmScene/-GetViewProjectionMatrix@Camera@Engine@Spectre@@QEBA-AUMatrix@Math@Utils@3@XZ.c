/*
 * XREFs of ?GetViewProjectionMatrix@Camera@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18005BB7C
 * Callers:
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 *     ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764 (-UpdateLightConstants@LightGatherer@Engine@Spectre@@CA-AV-$array@V-$shared_ptr@$$CBVShadowMapCam.c)
 * Callees:
 *     ?GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z @ 0x18005BB34 (-GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z.c)
 */

_OWORD *__fastcall Spectre::Engine::Camera::GetViewProjectionMatrix(Spectre::Engine::Camera *a1, _OWORD *a2)
{
  _OWORD *TransformMatrix; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD *result; // rax

  TransformMatrix = (_OWORD *)Spectre::Engine::Camera::GetTransformMatrix(a1, 0, 2);
  v4 = TransformMatrix[1];
  *a2 = *TransformMatrix;
  v5 = TransformMatrix[2];
  a2[1] = v4;
  v6 = TransformMatrix[3];
  result = a2;
  a2[2] = v5;
  a2[3] = v6;
  return result;
}
