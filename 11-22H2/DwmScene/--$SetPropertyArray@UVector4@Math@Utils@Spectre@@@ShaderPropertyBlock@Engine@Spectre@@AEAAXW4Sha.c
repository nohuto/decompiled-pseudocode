/*
 * XREFs of ??$SetPropertyArray@UVector4@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderProperty@12@QEBUVector4@Math@Utils@2@I@Z @ 0x180083F28
 * Callers:
 *     ?SetVector4Array@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@QEBUVector4@Math@Utils@3@I@Z @ 0x180085A7C (-SetVector4Array@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@QEBUVector4@Math@U.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 *     ?AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x1800846AC (-AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderProp.c)
 */

int __fastcall Spectre::Engine::ShaderPropertyBlock::SetPropertyArray<Spectre::Utils::Math::Vector4>(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = 16LL * a4;
  v7 = (void *)Spectre::Engine::ShaderPropertyBlock::AccessPropertyValueElements(a1, a2, 5LL);
  result = memcmp_0(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy_0(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
