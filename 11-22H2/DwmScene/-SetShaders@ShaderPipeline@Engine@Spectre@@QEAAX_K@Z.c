/*
 * XREFs of ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAX_K@Z @ 0x180087B50
 * Callers:
 *     ?AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180098B0C (-AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV-$vect.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K0@Z @ 0x180087868 (-SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@s_ea_180087868.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ShaderPipeline::SetShaders(Spectre::Engine::ShaderPipeline *this, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD v6[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF

  v4 = std::string::string(v6, (__int64)word_180106082);
  v5 = std::string::string(v7, (__int64)word_180106082);
  Spectre::Engine::ShaderPipeline::SetShaders(this, v5, a2, v4);
}
