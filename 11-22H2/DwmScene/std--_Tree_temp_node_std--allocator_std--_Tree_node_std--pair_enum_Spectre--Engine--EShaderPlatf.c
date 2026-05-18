/*
 * XREFs of std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void________enum_Spectre::Engine::EShaderPlatform_&_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase___ @ 0x18007B9C4
 * Callers:
 *     std::_Tree_std::_Tmap_traits_enum_Spectre::Engine::EShaderPlatform_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase__std::less_enum_Spectre::Engine::EShaderPlatform__std::allocator_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase______0___::_Emplace_enum_Spectre::Engine::EShaderPlatform_&_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase___ @ 0x18007BC50 (std--_Tree_std--_Tmap_traits_enum_Spectre--Engine--EShaderPlatform_std--shared_ptr_Spectre--Engi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase____void________enum_Spectre::Engine::EShaderPlatform___std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  _DWORD *v8; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v8;
  v8[8] = *a4;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 5) = *a5;
  *((_QWORD *)v8 + 6) = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
