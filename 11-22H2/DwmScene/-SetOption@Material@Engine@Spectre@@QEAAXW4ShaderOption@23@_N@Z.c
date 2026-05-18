/*
 * XREFs of ?SetOption@Material@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z @ 0x1800446D4
 * Callers:
 *     ?SetOption@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044658 (-SetOption@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@@Z @ 0x18009C150 (-ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Material::SetOption(Spectre::Engine::Material *a1, char a2, bool a3)
{
  Spectre::Engine::Material::SetOptions(a1, 1LL << a2, a3);
}
