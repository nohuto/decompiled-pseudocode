/*
 * XREFs of ?SetShaderTexture@TextureState@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@I@Z @ 0x18009E278
 * Callers:
 *     ?RenderTargetSwap@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@I@Z @ 0x180039474 (-RenderTargetSwap@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@.c)
 *     ?SetShaderSampler@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VSampler@Engine@Spectre@@@std@@I@Z @ 0x180039804 (-SetShaderSampler@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV-$shared_ptr@VSampler@En.c)
 *     ?SetShaderTexture@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@I@Z @ 0x18003981C (-SetShaderTexture@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV-$shared_ptr@VTexture@En.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Spectre::Engine::TextureState::SetShaderTexture(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4)
{
  return std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(16 * (a4 + 16LL * a2) + a1 + 8), a3);
}
