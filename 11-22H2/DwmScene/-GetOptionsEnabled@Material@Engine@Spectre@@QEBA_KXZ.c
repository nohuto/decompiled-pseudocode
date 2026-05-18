/*
 * XREFs of ?GetOptionsEnabled@Material@Engine@Spectre@@QEBA_KXZ @ 0x180044334
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Spectre::Engine::Material::GetOptionsEnabled(Spectre::Engine::Material *this)
{
  return *((_QWORD *)this + 19);
}
