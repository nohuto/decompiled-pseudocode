/*
 * XREFs of ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@M@Z @ 0x1800837E4
 * Callers:
 *     ??$SetPropertyDefault@M@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@12@M@Z @ 0x180044BA4 (--$SetPropertyDefault@M@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@12@M@Z.c)
 *     ?SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18008342C (-SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@.c)
 * Callees:
 *     ?AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4ShaderProperty@23@W4ShaderPropertyType@23@@Z @ 0x180081FB4 (-AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4S.c)
 */

float *__fastcall Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(
        __int64 a1,
        unsigned __int16 a2,
        float a3)
{
  float *result; // rax

  result = (float *)Spectre::Engine::ShaderPropertyLayout::AccessPropertyDefaultContents(a1, a2);
  *result = a3;
  return result;
}
