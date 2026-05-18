/*
 * XREFs of ?ShaderOptionIterateCombination@Engine@Spectre@@YA_NAEA_K_K@Z @ 0x180061480
 * Callers:
 *     ?CreatePipelines@ShaderFamily@Engine@Spectre@@QEAA?AV?$vector@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@_K111@Z @ 0x1800603D8 (-CreatePipelines@ShaderFamily@Engine@Spectre@@QEAA-AV-$vector@V-$shared_ptr@VShaderPipeline@Engi.c)
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::ShaderOptionIterateCombination(Spectre::Engine *this, unsigned __int64 a2)
{
  bool v2; // zf

  v2 = (a2 & ((*(_QWORD *)this | ~a2) + 1)) == 0;
  *(_QWORD *)this = a2 & ((*(_QWORD *)this | ~a2) + 1);
  return !v2;
}
