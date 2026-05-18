/*
 * XREFs of ??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x180031AA0
 * Callers:
 *     _Spectre::InitializeShaderManager::Engine::InitializeShaderManager_::_1_::dtor$3 @ 0x1800E5CD7 (_Spectre--InitializeShaderManager--Engine--InitializeShaderManager_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall std::map<std::string,Spectre::Engine::ShaderRegistration::ProgramRegistration>::~map<std::string,Spectre::Engine::ShaderRegistration::ProgramRegistration>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::ShaderRegistration::ProgramRegistration>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderRegistration::ProgramRegistration>,void *>>>(
    a1,
    (__int64)a1);
}
