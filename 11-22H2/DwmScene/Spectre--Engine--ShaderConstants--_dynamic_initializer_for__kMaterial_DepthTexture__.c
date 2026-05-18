/*
 * XREFs of Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kMaterial_DepthTexture__ @ 0x180008550
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

int Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kMaterial_DepthTexture__()
{
  std::string::string(&Spectre::Engine::ShaderConstants::kMaterial_DepthTexture, "Material/DepthTexture");
  return atexit((void (__cdecl *)())Spectre::Engine::ShaderConstants::_dynamic_atexit_destructor_for__kMaterial_DepthTexture__);
}
