/*
 * XREFs of ?GetOptionsEnabled@ShaderFamily@Engine@Spectre@@QEBA_KXZ @ 0x180060A5C
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Spectre::Engine::ShaderFamily::GetOptionsEnabled(Spectre::Engine::ShaderFamily *this)
{
  return *((_QWORD *)this + 9);
}
