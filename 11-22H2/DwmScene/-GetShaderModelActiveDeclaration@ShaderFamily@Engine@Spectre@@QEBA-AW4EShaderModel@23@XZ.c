/*
 * XREFs of ?GetShaderModelActiveDeclaration@ShaderFamily@Engine@Spectre@@QEBA?AW4EShaderModel@23@XZ @ 0x180060D44
 * Callers:
 *     ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_K0_N@Z @ 0x1800602F8 (-CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPipeline@En_ea_1800602F8.c)
 *     ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K0@Z @ 0x180087868 (-SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@s_ea_180087868.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderFamily::GetShaderModelActiveDeclaration(__int64 a1)
{
  return *(unsigned int *)(a1 + 552);
}
