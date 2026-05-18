/*
 * XREFs of Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::_EmbeddedShaderDatabase @ 0x18007C080
 * Callers:
 *     Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::_scalar_deleting_destructor_ @ 0x18007C0F0 (Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatabase--_scalar_dele.c)
 * Callees:
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002E824 (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18002E824.c)
 */

void __fastcall Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::_EmbeddedShaderDatabase(
        void **this)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::ShaderRegistration::ProgramRegistration>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderRegistration::ProgramRegistration>,void *>>>(
    this + 2,
    (__int64)(this + 2));
  Spectre::Engine::ShaderDatabase::~ShaderDatabase((Spectre::Engine::ShaderDatabase *)this);
}
