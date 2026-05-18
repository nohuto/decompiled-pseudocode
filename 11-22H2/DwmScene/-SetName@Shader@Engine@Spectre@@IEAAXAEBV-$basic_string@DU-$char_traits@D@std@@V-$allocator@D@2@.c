/*
 * XREFs of ?SetName@Shader@Engine@Spectre@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18008B2A0
 * Callers:
 *     ?GetShader@ShaderManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18004FE4C (-GetShader@ShaderManager@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@V-$ba.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 */

void __fastcall Spectre::Engine::Shader::SetName(__int64 a1, __int64 a2)
{
  void **v3; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (void **)std::string::string(v4, a2);
  Spectre::Engine::RendererResource::SetName(a1, v3);
}
