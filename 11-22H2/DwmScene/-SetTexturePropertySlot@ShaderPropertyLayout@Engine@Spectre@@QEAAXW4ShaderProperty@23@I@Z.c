/*
 * XREFs of ?SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@23@I@Z @ 0x180083864
 * Callers:
 *     ?DefineGlobalPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045218 (-DefineGlobalPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily.c)
 *     ?DefineVolumePropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180046A68 (-DefineVolumePropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily@.c)
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@@Z @ 0x18007FED4 (-DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@.c)
 *     ?SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z @ 0x180083830 (-SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_tr.c)
 * Callees:
 *     ?GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@23@@Z @ 0x180082F6C (-GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // r8d

  v2 = *(unsigned int *)(Spectre::Engine::ShaderPropertyLayout::GetPropertyInfo(a1, a2) + 40);
  result = *(_QWORD *)(v3 + 104);
  *(_DWORD *)(result + 40 * v2 + 32) = v5;
  return result;
}
