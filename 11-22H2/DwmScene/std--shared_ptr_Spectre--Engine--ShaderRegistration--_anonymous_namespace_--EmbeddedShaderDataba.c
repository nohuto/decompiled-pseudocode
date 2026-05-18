/*
 * XREFs of std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_::_shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_ @ 0x18007C060
 * Callers:
 *     _Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetOrCreate_::_1_::dtor$1 @ 0x1800E9B8C (_Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatabase_ea_1800E9B8C.c)
 *     _Spectre::Engine::ShaderRegistration::RegisterShaderProgram_::_1_::dtor$1 @ 0x1800E9BC2 (_Spectre--Engine--ShaderRegistration--RegisterShaderProgram_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_::_shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
