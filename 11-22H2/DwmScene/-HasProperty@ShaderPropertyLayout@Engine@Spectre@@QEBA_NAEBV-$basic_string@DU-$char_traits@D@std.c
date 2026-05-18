/*
 * XREFs of ?HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800830C8
 * Callers:
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 * Callees:
 *     ?FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C58 (-FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::HasProperty(__int64 a1, _QWORD *a2)
{
  unsigned __int16 Property; // ax
  __int64 v4; // r8

  Property = Spectre::Engine::ShaderPropertyLayout::FindProperty(a1, a2);
  return Spectre::Engine::ShaderPropertyLayout::HasProperty(a1, Property, v4);
}
