/*
 * XREFs of Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kMaterial_DiffuseColor__ @ 0x1800085B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

int Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kMaterial_DiffuseColor__()
{
  std::string::string(&Spectre::Engine::ShaderConstants::kMaterial_DiffuseColor, "Material/DiffuseColor");
  return atexit((void (__cdecl *)())Spectre::Engine::ShaderConstants::_dynamic_atexit_destructor_for__kMaterial_DiffuseColor__);
}
