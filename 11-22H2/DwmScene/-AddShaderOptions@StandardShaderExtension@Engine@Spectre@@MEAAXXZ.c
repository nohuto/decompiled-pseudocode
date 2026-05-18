/*
 * XREFs of ?AddShaderOptions@StandardShaderExtension@Engine@Spectre@@MEAAXXZ @ 0x18007D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOption@ShaderFamily@Engine@Spectre@@QEAA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005FE4C (-AddOption@ShaderFamily@Engine@Spectre@@QEAA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_trai.c)
 */

void __fastcall Spectre::Engine::StandardShaderExtension::AddShaderOptions(
        Spectre::Engine::StandardShaderExtension *this)
{
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_AlphaMask);
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_AlphaBlend);
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_Background);
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
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_StochasticTransparency);
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_DepthToColor);
  Spectre::Engine::ShaderFamily::AddOption(
    *((_QWORD *)this + 7),
    (void **)&Spectre::Engine::ShaderConstants::kOption_GLTFMaterial);
}
