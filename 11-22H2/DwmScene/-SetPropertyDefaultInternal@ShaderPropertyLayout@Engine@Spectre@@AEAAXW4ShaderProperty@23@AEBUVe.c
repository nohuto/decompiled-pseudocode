/*
 * XREFs of ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUVector2@Math@Utils@3@@Z @ 0x18008373C
 * Callers:
 *     ?SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18008342C (-SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@.c)
 * Callees:
 *     ?AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4ShaderProperty@23@W4ShaderPropertyType@23@@Z @ 0x180081FB4 (-AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4S.c)
 */

_DWORD *__fastcall Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)Spectre::Engine::ShaderPropertyLayout::AccessPropertyDefaultContents(a1, a2);
  *result = *a3;
  result[1] = a3[1];
  return result;
}
