/*
 * XREFs of ?AddGlobalProperty@ShaderManager@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18004F194
 * Callers:
 *     ?Startup@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800509E8 (-Startup@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderManager::AddGlobalProperty(__int64 a1)
{
  return Spectre::Engine::ShaderPropertyBlock::ExtendLayoutWithProperty(*(_QWORD *)(a1 + 18648));
}
