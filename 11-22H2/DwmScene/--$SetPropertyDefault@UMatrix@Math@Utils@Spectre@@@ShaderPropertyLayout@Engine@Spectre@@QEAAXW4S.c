/*
 * XREFs of ??$SetPropertyDefault@UMatrix@Math@Utils@Spectre@@@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@12@UMatrix@Math@Utils@2@@Z @ 0x180044BB0
 * Callers:
 *     ?DefineObjectPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x1800464D4 (-DefineObjectPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily.c)
 *     ?DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@@Z @ 0x18007FED4 (-DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@.c)
 * Callees:
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUMatrix@Math@Utils@3@@Z @ 0x1800836FC (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUMa.c)
 */

__int64 Spectre::Engine::ShaderPropertyLayout::SetPropertyDefault<Spectre::Utils::Math::Matrix>()
{
  return Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal();
}
