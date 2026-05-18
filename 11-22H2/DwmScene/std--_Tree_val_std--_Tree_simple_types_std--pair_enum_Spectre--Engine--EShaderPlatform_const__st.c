/*
 * XREFs of std::_Tree_val_std::_Tree_simple_types_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______ @ 0x18007BD48
 * Callers:
 *     std::_Tree_val_std::_Tree_simple_types_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______ @ 0x18007BD48 (std--_Tree_val_std--_Tree_simple_types_std--pair_enum_Spectre--Engine--EShaderPlatform_const__st.c)
 *     std::_Tree_std::_Tmap_traits_enum_Spectre::Engine::EShaderPlatform_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase__std::less_enum_Spectre::Engine::EShaderPlatform__std::allocator_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase______0___::__Tree_std::_Tmap_traits_enum_Spectre::Engine::EShaderPlatform_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase__std::less_enum_Spectre::Engine::EShaderPlatform__std::allocator_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase______0___ @ 0x18007BFA8 (std--_Tree_std--_Tmap_traits_enum_Spectre--Engine--EShaderPlatform_std--shared_ptr__ea_18007BFA8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______ @ 0x18007BD48 (std--_Tree_val_std--_Tree_simple_types_std--pair_enum_Spectre--Engine--EShaderPlatform_const__st.c)
 */

void __fastcall std::_Tree_val_std::_Tree_simple_types_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  _QWORD *v6; // rdi
  std::_Ref_count_base *v7; // rcx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val_std::_Tree_simple_types_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (__int64 *)*v3;
    v7 = (std::_Ref_count_base *)v6[6];
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    std::_Deallocate<16,0>(v6, 0x38uLL);
  }
}
