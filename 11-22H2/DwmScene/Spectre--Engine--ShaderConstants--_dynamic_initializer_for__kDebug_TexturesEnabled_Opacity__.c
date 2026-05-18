/*
 * XREFs of Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kDebug_TexturesEnabled_Opacity__ @ 0x180007F20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

int Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kDebug_TexturesEnabled_Opacity__()
{
  std::string::string(
    &Spectre::Engine::ShaderConstants::kDebug_TexturesEnabled_Opacity,
    "Debug/TexturesEnabled/Opacity");
  return atexit((void (__cdecl *)())Spectre::Engine::ShaderConstants::_dynamic_atexit_destructor_for__kDebug_TexturesEnabled_Opacity__);
}
