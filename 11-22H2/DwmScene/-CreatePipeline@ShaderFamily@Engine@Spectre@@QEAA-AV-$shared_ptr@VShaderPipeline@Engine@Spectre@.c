/*
 * XREFs of ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@W4ShaderOption@23@@Z @ 0x1800602C0
 * Callers:
 *     ?OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x180080830 (-OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 * Callees:
 *     ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_K0_N@Z @ 0x1800602F8 (-CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPipeline@En_ea_1800602F8.c)
 */

__int64 __fastcall Spectre::Engine::ShaderFamily::CreatePipeline(int a1, __int64 a2, char a3)
{
  Spectre::Engine::ShaderFamily::CreatePipeline(a1, a2, 1LL << a3, 0, 1);
  return a2;
}
