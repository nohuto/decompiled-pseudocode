/*
 * XREFs of std::_Tree_std::_Tmap_traits_enum_Spectre::Engine::EShaderPlatform_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase__std::less_enum_Spectre::Engine::EShaderPlatform__std::allocator_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase______0___::_Emplace_enum_Spectre::Engine::EShaderPlatform_&_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase___ @ 0x18007BC50
 * Callers:
 *     Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetOrCreate @ 0x18007C198 (Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatabase--GetOrCreate.c)
 * Callees:
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void________enum_Spectre::Engine::EShaderPlatform_&_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase___ @ 0x18007B9C4 (std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_enum_Spectre--Engine--EShaderPlatf.c)
 *     std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______::__Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______ @ 0x18007C02C (std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_enum_Spectre--Engine-_ea_18007C02C.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_______::_Insert_node @ 0x18007C484 (std--_Tree_val_std--_Tree_simple_types_std--pair_enum_Spectre--Engine--EShaderPlatf_ea_18007C484.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits_enum_Spectre::Engine::EShaderPlatform_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase__std::less_enum_Spectre::Engine::EShaderPlatform__std::allocator_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase______0___::_Emplace_enum_Spectre::Engine::EShaderPlatform___std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase___(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r9d
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]

  v14 = 0;
  v6 = qword_1801D8A38;
  v7 = *(_QWORD *)(qword_1801D8A38 + 8);
  v13 = v7;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *a3;
    do
    {
      v13 = v7;
      if ( *(_DWORD *)(v7 + 32) >= v8 )
      {
        v6 = v7;
        v14 = 1;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v14 = 0;
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || *a3 < *(_DWORD *)(v6 + 32) )
  {
    if ( qword_1801D8A40 == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v9 = std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void________enum_Spectre::Engine::EShaderPlatform___std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase___(
           v12,
           (__int64)&qword_1801D8A38,
           qword_1801D8A38,
           a3,
           a4);
    v10 = v9[1];
    v9[1] = 0LL;
    std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______::__Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______(v12);
    *(_QWORD *)a2 = std::_Tree_val_std::_Tree_simple_types_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_______::_Insert_node(
                      &qword_1801D8A38,
                      &v13,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
