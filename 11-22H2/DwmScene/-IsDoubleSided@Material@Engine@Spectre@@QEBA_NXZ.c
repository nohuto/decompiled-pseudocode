/*
 * XREFs of ?IsDoubleSided@Material@Engine@Spectre@@QEBA_NXZ @ 0x180044424
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::Material::IsDoubleSided(Spectre::Engine::Material *this)
{
  return (*((_BYTE *)this + 112) & 0x40) == 0;
}
