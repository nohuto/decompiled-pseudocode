/*
 * XREFs of ?ApplyState@ShaderFamily@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x18005FF64
 * Callers:
 *     ?ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4Sides@123@VShaderTypeGroup@23@_N@Z @ 0x180086A7C (-ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@s.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 */

char __fastcall Spectre::Engine::ShaderFamily::ApplyState(__int64 a1)
{
  _UNKNOWN **v1; // rax
  Spectre::Engine::ShaderPropertyBlock **v2; // rsi
  unsigned int i; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = (Spectre::Engine::ShaderPropertyBlock **)(a1 + 256);
  for ( i = 0; i < 0xA; ++i )
  {
    if ( (i & 0xFFFFFFFC) != 0 || i == 1 )
    {
      LOBYTE(v1) = std::operator!=<Spectre::Engine::Scene>((_QWORD *)(a1 + 16 * ((int)i + 16LL)));
      if ( (_BYTE)v1 )
        LOBYTE(v1) = Spectre::Engine::ShaderPropertyBlock::ApplyState(*v2);
    }
    v2 += 2;
  }
  return (char)v1;
}
