/*
 * XREFs of Spectre::Engine::Lineage::_dynamic_initializer_for__kLineageKey_Repository__ @ 0x18000AC60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

int Spectre::Engine::Lineage::_dynamic_initializer_for__kLineageKey_Repository__()
{
  std::string::string(&Spectre::Engine::Lineage::kLineageKey_Repository, "repository");
  return atexit((void (__cdecl *)())Spectre::Engine::Lineage::_dynamic_atexit_destructor_for__kLineageKey_Repository__);
}
