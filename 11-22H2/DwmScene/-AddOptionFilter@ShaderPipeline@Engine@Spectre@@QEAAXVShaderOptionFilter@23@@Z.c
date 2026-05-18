/*
 * XREFs of ?AddOptionFilter@ShaderPipeline@Engine@Spectre@@QEAAXVShaderOptionFilter@23@@Z @ 0x180086A44
 * Callers:
 *     ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_K0_N@Z @ 0x1800602F8 (-CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPipeline@En_ea_1800602F8.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBVShaderOptionFilter@Engine@Spectre@@@?$vector@VShaderOptionFilter@Engine@Spectre@@V?$allocator@VShaderOptionFilter@Engine@Spectre@@@std@@@std@@QEAAPEAVShaderOptionFilter@Engine@Spectre@@QEAV234@AEBV234@@Z @ 0x180086164 (--$_Emplace_reallocate@AEBVShaderOptionFilter@Engine@Spectre@@@-$vector@VShaderOptionFilter@Engi.c)
 */

char *__fastcall Spectre::Engine::ShaderPipeline::AddOptionFilter(char **a1, _OWORD *a2)
{
  char *v3; // rdx
  char *result; // rax

  v3 = a1[4];
  if ( v3 == a1[5] )
    return std::vector<Spectre::Engine::ShaderOptionFilter>::_Emplace_reallocate<Spectre::Engine::ShaderOptionFilter const &>(
             a1 + 3,
             v3,
             a2);
  *(_OWORD *)v3 = *a2;
  a1[4] += 16;
  return result;
}
