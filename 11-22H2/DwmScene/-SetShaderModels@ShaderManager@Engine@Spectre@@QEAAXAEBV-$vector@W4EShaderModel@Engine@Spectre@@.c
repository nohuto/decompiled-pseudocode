/*
 * XREFs of ?SetShaderModels@ShaderManager@Engine@Spectre@@QEAAXAEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x1800507F0
 * Callers:
 *     ?InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z @ 0x180034A30 (-InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Engine::ShaderManager::SetShaderModels(__int64 a1, __int64 a2)
{
  return std::vector<enum Spectre::Engine::EShaderModel>::operator=((_QWORD *)(a1 + 18664), a2);
}
