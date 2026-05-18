/*
 * XREFs of ?SetInvertedRenderState@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@@Z @ 0x1800875A8
 * Callers:
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::ShaderPipeline::SetInvertedRenderState(__int64 a1, _QWORD *a2)
{
  std::_Ref_count_base *v3; // rcx

  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 96), a2);
  v3 = (std::_Ref_count_base *)a2[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
