/*
 * XREFs of _dynamic_initializer_for__Spectre::Engine::Scene::RootNodeName__ @ 0x180003880
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

int dynamic_initializer_for__Spectre::Engine::Scene::RootNodeName__()
{
  std::string::string(&Spectre::Engine::Scene::RootNodeName, "Root");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Spectre::Engine::Scene::RootNodeName__);
}
