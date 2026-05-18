/*
 * XREFs of ??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18002B854
 * Callers:
 *     _Spectre::SendShutdownOrSuspendTelemetry::Engine::SendShutdownOrSuspendTelemetry_::_1_::dtor$2 @ 0x1800E516F (_Spectre--SendShutdownOrSuspendTelemetry--Engine--SendShutdownOrSuspendTelemetry_--_1_--dtor$2.c)
 *     _Spectre::Engine::ShaderManager::ShaderManager_::_1_::dtor$1 @ 0x1800E7153 (_Spectre--Engine--ShaderManager--ShaderManager_--_1_--dtor$1.c)
 *     _Spectre::Engine::ShaderManager::ShaderManager_::_1_::dtor$3 @ 0x1800E717F (_Spectre--Engine--ShaderManager--ShaderManager_--_1_--dtor$3.c)
 *     _Spectre::Engine::ShaderFamily::ShaderFamily_::_1_::dtor$6 @ 0x1800E7BE2 (_Spectre--Engine--ShaderFamily--ShaderFamily_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<std::string,enum Spectre::Engine::ShaderOption>::~map<std::string,enum Spectre::Engine::ShaderOption>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>::~_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>(a1);
}
