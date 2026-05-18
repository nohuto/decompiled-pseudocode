/*
 * XREFs of Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetPrograms @ 0x18007C290
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18007BA70 (--$-0V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

__int64 *__fastcall Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetPrograms(
        __int64 a1,
        __int64 *a2,
        char a3)
{
  std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::ShaderRegistration::ProgramRegistration,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::ShaderRegistration::ProgramRegistration>>,0>>::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::ShaderRegistration::ProgramRegistration,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::ShaderRegistration::ProgramRegistration>>,0>>(
    a2,
    (_QWORD *)(a1 + 16),
    a3);
  return a2;
}
