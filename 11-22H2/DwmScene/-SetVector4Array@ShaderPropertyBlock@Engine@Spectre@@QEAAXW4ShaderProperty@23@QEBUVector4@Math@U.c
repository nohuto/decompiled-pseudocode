/*
 * XREFs of ?SetVector4Array@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@QEBUVector4@Math@Utils@3@I@Z @ 0x180085A7C
 * Callers:
 *     ?SetVector4Array@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@@Z @ 0x180085A60 (-SetVector4Array@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV-$vector@UVect.c)
 *     ?Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV45@@Z @ 0x18009CCA0 (-Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA-AV-$shared_ptr@VTexture@Engine@Spectre@@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall Spectre::Engine::ShaderPropertyBlock::SetVector4Array(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4)
{
  return Spectre::Engine::ShaderPropertyBlock::SetPropertyArray<Spectre::Utils::Math::Vector4>(a1, a2, a3, a4);
}
