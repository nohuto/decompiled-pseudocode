/*
 * XREFs of Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kGlobal_EnvironmentMap_Irradiance__ @ 0x1800080D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

int Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kGlobal_EnvironmentMap_Irradiance__()
{
  std::string::string(
    &Spectre::Engine::ShaderConstants::kGlobal_EnvironmentMap_Irradiance,
    "Global/EnvironmentMap/Irradiance");
  return atexit((void (__cdecl *)())Spectre::Engine::ShaderConstants::_dynamic_atexit_destructor_for__kGlobal_EnvironmentMap_Irradiance__);
}
