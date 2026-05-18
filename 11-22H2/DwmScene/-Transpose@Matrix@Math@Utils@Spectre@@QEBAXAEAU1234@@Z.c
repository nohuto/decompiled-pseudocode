/*
 * XREFs of ?Transpose@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z @ 0x18005D800
 * Callers:
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 *     ?OnMeshRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x180080EF0 (-OnMeshRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 *     ?OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x18009B340 (-OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 *     ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764 (-UpdateLightConstants@LightGatherer@Engine@Spectre@@CA-AV-$array@V-$shared_ptr@$$CBVShadowMapCam.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

void __fastcall Spectre::Utils::Math::Matrix::Transpose(__m128 *this, __m128 *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1
  __m128 v4; // xmm4
  __m128 v5; // xmm3
  __m128 v6; // xmm0
  __m128 v7; // xmm2

  v2 = this[1];
  v3 = this[3];
  v4 = _mm_shuffle_ps(*this, v2, 238);
  v5 = _mm_shuffle_ps(*this, v2, 68);
  v6 = _mm_shuffle_ps(this[2], v3, 68);
  v7 = _mm_shuffle_ps(this[2], v3, 238);
  *a2 = _mm_shuffle_ps(v5, v6, 136);
  a2[1] = _mm_shuffle_ps(v5, v6, 221);
  a2[2] = _mm_shuffle_ps(v4, v7, 136);
  a2[3] = _mm_shuffle_ps(v4, v7, 221);
}
