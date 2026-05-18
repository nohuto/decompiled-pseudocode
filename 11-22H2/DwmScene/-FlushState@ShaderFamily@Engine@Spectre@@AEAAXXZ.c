/*
 * XREFs of ?FlushState@ShaderFamily@Engine@Spectre@@AEAAXXZ @ 0x180060968
 * Callers:
 *     ?FlushState@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x18004FA38 (-FlushState@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?FlushState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ @ 0x180085068 (-FlushState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ShaderFamily::FlushState(Spectre::Engine::ShaderFamily *this)
{
  Spectre::Engine::ShaderPropertyBlock **v1; // rbx
  Spectre::Engine::ShaderPropertyBlock **v2; // rdi

  v1 = (Spectre::Engine::ShaderPropertyBlock **)((char *)this + 256);
  v2 = (Spectre::Engine::ShaderPropertyBlock **)((char *)this + 416);
  while ( v1 != v2 )
  {
    if ( std::operator!=<Spectre::Engine::Scene>(v1) )
      Spectre::Engine::ShaderPropertyBlock::FlushState(*v1);
    v1 += 2;
  }
}
