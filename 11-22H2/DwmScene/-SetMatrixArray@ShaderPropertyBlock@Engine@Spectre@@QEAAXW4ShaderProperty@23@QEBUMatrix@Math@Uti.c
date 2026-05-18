/*
 * XREFs of ?SetMatrixArray@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@QEBUMatrix@Math@Utils@3@I@Z @ 0x18008557C
 * Callers:
 *     ?SetMatrixArray@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@@Z @ 0x180085560 (-SetMatrixArray@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV-$vector@UMatri.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall Spectre::Engine::ShaderPropertyBlock::SetMatrixArray(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4)
{
  return Spectre::Engine::ShaderPropertyBlock::SetPropertyArray<Spectre::Utils::Math::Matrix>(a1, a2, a3, a4);
}
