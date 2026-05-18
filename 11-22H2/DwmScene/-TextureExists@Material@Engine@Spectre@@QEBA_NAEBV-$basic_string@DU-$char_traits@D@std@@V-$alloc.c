/*
 * XREFs of ?TextureExists@Material@Engine@Spectre@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180044AAC
 * Callers:
 *     ?OnMeshAttach@StandardShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@23@@Z @ 0x18007E3F0 (-OnMeshAttach@StandardShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@.c)
 * Callees:
 *     ?FindProperty@Material@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800442D8 (-FindProperty@Material@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@DU-$char_tra.c)
 */

__int64 __fastcall Spectre::Engine::Material::TextureExists(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 Property; // ax

  Property = Spectre::Engine::Material::FindProperty(
               a1,
               (__int64)&Spectre::Engine::ShaderConstants::kMaterial_NormalTexture,
               a3);
  return Spectre::Engine::Material::TextureExists(a1, Property);
}
