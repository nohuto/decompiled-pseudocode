/*
 * XREFs of ?AddShaderOptions@UnlitShaderExtension@Engine@Spectre@@MEAAXXZ @ 0x18007FB00
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOption@ShaderFamily@Engine@Spectre@@QEAA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005FE4C (-AddOption@ShaderFamily@Engine@Spectre@@QEAA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_trai.c)
 */

void __fastcall Spectre::Engine::UnlitShaderExtension::AddShaderOptions(Spectre::Engine::UnlitShaderExtension *this)
{
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_AlphaMask);
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_AlphaBlend);
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)Spectre::Engine::ShaderConstants::kOption_Diagnostics);
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_TransparentRenderPass);
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_Wireframe);
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_Skinning);
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_DepthOnly);
}
