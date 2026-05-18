/*
 * XREFs of ??$SetPropertyArray@UMatrix@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderProperty@12@QEBUMatrix@Math@Utils@2@I@Z @ 0x180083EB8
 * Callers:
 *     ?SetMatrixArray@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@QEBUMatrix@Math@Utils@3@I@Z @ 0x18008557C (-SetMatrixArray@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@QEBUMatrix@Math@Uti.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 *     ?AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x1800846AC (-AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderProp.c)
 */

int __fastcall Spectre::Engine::ShaderPropertyBlock::SetPropertyArray<Spectre::Utils::Math::Matrix>(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = (unsigned __int64)a4 << 6;
  v7 = (void *)Spectre::Engine::ShaderPropertyBlock::AccessPropertyValueElements(a1, a2, 7LL);
  result = memcmp_0(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy_0(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
