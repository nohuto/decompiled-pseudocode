/*
 * XREFs of ?FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C58
 * Callers:
 *     ?FindProperty@Material@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800442D8 (-FindProperty@Material@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@DU-$char_tra.c)
 *     ?SetTextureAsync@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KPEAVResourceManager@23@@Z @ 0x180044924 (-SetTextureAsync@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?DefineObjectPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x1800464D4 (-DefineObjectPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily.c)
 *     ?DefineVolumePropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180046A68 (-DefineVolumePropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily@.c)
 *     ?DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@@Z @ 0x18007FED4 (-DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@.c)
 *     ?FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C98 (-FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_.c)
 *     ?HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800830C8 (-HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NAEBV-$basic_string@DU-$char_traits@D@std.c)
 *     ?SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x1800857F0 (-SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV45@@Z @ 0x18009CCA0 (-Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA-AV-$shared_ptr@VTexture@Engine@Spectre@@@.c)
 * Callees:
 *     ?FindProperty@ShaderManager@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F9DC (-FindProperty@ShaderManager@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@DU-$cha.c)
 *     ?HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z @ 0x1800830EC (-HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::FindProperty(__int64 a1, _QWORD *a2)
{
  unsigned __int16 Property; // ax
  unsigned __int16 v4; // r8

  Property = Spectre::Engine::ShaderManager::FindProperty(*(_QWORD *)(a1 + 1152), a2);
  if ( !(unsigned __int8)Spectre::Engine::ShaderPropertyLayout::HasProperty(a1, Property, Property) )
    return 511;
  return v4;
}
