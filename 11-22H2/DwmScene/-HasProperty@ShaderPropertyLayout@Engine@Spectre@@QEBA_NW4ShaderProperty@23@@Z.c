/*
 * XREFs of ?HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z @ 0x1800830EC
 * Callers:
 *     ?AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4ShaderProperty@23@W4ShaderPropertyType@23@@Z @ 0x180081FB4 (-AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4S.c)
 *     ?AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@23@I@Z @ 0x1800820CC (-AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBV-$basic_str.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C58 (-FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@.c)
 *     ?GetPropertyName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x180082F9C (-GetPropertyName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV-$basic_string@DU-$char_traits@D@s.c)
 *     ?HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800830C8 (-HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NAEBV-$basic_string@DU-$char_traits@D@std.c)
 *     ?SetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x1800831BC (-SetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@E.c)
 *     ?GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x1800850D4 (-GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@st.c)
 *     ?ReadPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEBAPEBTValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x180085200 (-ReadPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEBAPEBTValueElement@ShaderProper.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x18008566C (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V-$shared_ptr@VTexture@.c)
 *     ?SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Z @ 0x18008585C (-SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V-$shared_ptr@VS.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::ShaderPropertyLayout::HasProperty(__int64 a1, unsigned __int16 a2)
{
  return *(_WORD *)(a1 + 2LL * a2 + 128) != 0xFFFF;
}
