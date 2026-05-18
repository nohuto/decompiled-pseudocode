/*
 * XREFs of Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kDebug_ShowGrid__ @ 0x180007E00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

int Spectre::Engine::ShaderConstants::_dynamic_initializer_for__kDebug_ShowGrid__()
{
  std::string::string(&Spectre::Engine::ShaderConstants::kDebug_ShowGrid, "Debug/ShowGrid");
  return atexit((void (__cdecl *)())Spectre::Engine::ShaderConstants::_dynamic_atexit_destructor_for__kDebug_ShowGrid__);
}
