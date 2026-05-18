/*
 * XREFs of ?GetValueArraySize@ShaderPropertyLayout@Engine@Spectre@@AEAAIXZ @ 0x1800830B4
 * Callers:
 *     ?ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180084D94 (-ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA-AW4ShaderProperty@23@AEBUShad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::GetValueArraySize(
        Spectre::Engine::ShaderPropertyLayout *this)
{
  return (__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) >> 2;
}
