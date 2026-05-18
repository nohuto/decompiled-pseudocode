/*
 * XREFs of ?SetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@V?$shared_ptr@VShader@Engine@Spectre@@@std@@@Z @ 0x180087774
 * Callers:
 *     ?GetShader@ShaderPipeline@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@W4EShaderType@23@@Z @ 0x1800873D4 (-GetShader@ShaderPipeline@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@W4ES.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ResetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@@Z @ 0x1800874E4 (-ResetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@@Z.c)
 */

void __fastcall Spectre::Engine::ShaderPipeline::SetShader(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v6; // rcx

  v3 = a2;
  Spectre::Engine::ShaderPipeline::ResetShader(a1, a2);
  std::shared_ptr<Spectre::Engine::Light>::operator=(&a1[2 * v3 + 48], a3);
  v6 = (std::_Ref_count_base *)a3[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
