/*
 * XREFs of ?GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@XZ @ 0x1800850B0
 * Callers:
 *     ?FindProperty@Material@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800442D8 (-FindProperty@Material@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@DU-$char_tra.c)
 *     ?GetPropertyName@Material@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x180044368 (-GetPropertyName@Material@Engine@Spectre@@QEBAAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?SetTextureAsync@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KPEAVResourceManager@23@@Z @ 0x180044924 (-SetTextureAsync@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 *     ?ClearTextureState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ @ 0x180084C40 (-ClearTextureState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ.c)
 *     ?FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ @ 0x180084EB0 (-FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ.c)
 *     ?Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV45@@Z @ 0x18009CCA0 (-Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA-AV-$shared_ptr@VTexture@Engine@Spectre@@@.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::GetLayout(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 16));
  return v2;
}
