/*
 * XREFs of ?FlushState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ @ 0x180085068
 * Callers:
 *     ?FlushState@ShaderFamily@Engine@Spectre@@AEAAXXZ @ 0x180060968 (-FlushState@ShaderFamily@Engine@Spectre@@AEAAXXZ.c)
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ @ 0x180084EB0 (-FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ShaderPropertyBlock::FlushState(Spectre::Engine::ShaderPropertyBlock *this)
{
  Spectre::Engine::ShaderPropertyBlock *v1; // rdx

  if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 14) )
    Spectre::Engine::ShaderPropertyBlock::FlushImportedProperties(v1);
}
