/*
 * XREFs of ?GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@23@@Z @ 0x180082F6C
 * Callers:
 *     ?AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4ShaderProperty@23@W4ShaderPropertyType@23@@Z @ 0x180081FB4 (-AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4S.c)
 *     ?GetPropertyName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x180082F9C (-GetPropertyName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV-$basic_string@DU-$char_traits@D@s.c)
 *     ?SetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x1800831BC (-SetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@E.c)
 *     ?SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@23@I@Z @ 0x180083864 (-SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@23@I@Z.c)
 *     ?ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180084D94 (-ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA-AW4ShaderProperty@23@AEBUShad.c)
 *     ?GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x1800850D4 (-GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@st.c)
 *     ?ReadPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEBAPEBTValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x180085200 (-ReadPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEBAPEBTValueElement@ShaderProper.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x18008566C (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V-$shared_ptr@VTexture@.c)
 *     ?SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Z @ 0x18008585C (-SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V-$shared_ptr@VS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::GetPropertyInfo(__int64 a1, unsigned __int16 a2)
{
  return *(_QWORD *)(a1 + 56) + 56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
}
