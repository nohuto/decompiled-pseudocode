/*
 * XREFs of ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@H@Z @ 0x1800837C4
 * Callers:
 *     ?SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18008342C (-SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@.c)
 * Callees:
 *     ?AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4ShaderProperty@23@W4ShaderPropertyType@23@@Z @ 0x180081FB4 (-AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4S.c)
 */

_DWORD *__fastcall Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(
        __int64 a1,
        unsigned __int16 a2,
        int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)Spectre::Engine::ShaderPropertyLayout::AccessPropertyDefaultContents(a1, a2);
  *result = a3;
  return result;
}
