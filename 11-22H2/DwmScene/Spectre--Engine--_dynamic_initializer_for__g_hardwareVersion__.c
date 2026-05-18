/*
 * XREFs of Spectre::Engine::_dynamic_initializer_for__g_hardwareVersion__ @ 0x180003770
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

int Spectre::Engine::_dynamic_initializer_for__g_hardwareVersion__()
{
  std::string::string(&Spectre::Engine::g_hardwareVersion, "Unknown");
  return atexit((void (__cdecl *)())Spectre::Engine::_dynamic_atexit_destructor_for__g_hardwareVersion__);
}
