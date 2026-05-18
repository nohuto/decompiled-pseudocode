/*
 * XREFs of Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kLighting_LightViewProjectionMatrix_Array__ @ 0x180008490
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

int Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kLighting_LightViewProjectionMatrix_Array__()
{
  std::string::string(
    &Spectre::Engine::ShaderConstants::kLighting_LightViewProjectionMatrix_Array,
    "Lighting/ViewProjectionMatrix");
  return atexit((void (__cdecl *)())Spectre::Engine::ShaderConstants::_dynamic_atexit_destructor_for__kLighting_LightViewProjectionMatrix_Array__);
}
