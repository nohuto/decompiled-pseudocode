/*
 * XREFs of ?SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z @ 0x180083830
 * Callers:
 *     ?DefineGlobalPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045218 (-DefineGlobalPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily.c)
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 * Callees:
 *     ?FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C98 (-FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  unsigned __int16 PropertyChecked; // ax

  PropertyChecked = Spectre::Engine::ShaderPropertyLayout::FindPropertyChecked(a1, a2);
  return Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(a1, PropertyChecked, a3);
}
