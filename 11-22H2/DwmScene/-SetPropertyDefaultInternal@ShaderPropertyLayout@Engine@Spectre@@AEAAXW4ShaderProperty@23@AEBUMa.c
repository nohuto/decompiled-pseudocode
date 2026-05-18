/*
 * XREFs of ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUMatrix@Math@Utils@3@@Z @ 0x1800836FC
 * Callers:
 *     ??$SetPropertyDefault@UMatrix@Math@Utils@Spectre@@@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@12@UMatrix@Math@Utils@2@@Z @ 0x180044BB0 (--$SetPropertyDefault@UMatrix@Math@Utils@Spectre@@@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4S.c)
 *     ?SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18008342C (-SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@.c)
 * Callees:
 *     ?AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4ShaderProperty@23@W4ShaderPropertyType@23@@Z @ 0x180081FB4 (-AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4S.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 i; // r9

  result = Spectre::Engine::ShaderPropertyLayout::AccessPropertyDefaultContents(a1, a2);
  for ( i = 0LL; i < 0x10; ++i )
    *(_DWORD *)(result + 4 * i) = *(_DWORD *)(a3 + 4 * i);
  return result;
}
