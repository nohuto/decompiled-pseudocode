/*
 * XREFs of Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetOrCreate @ 0x18007C198
 * Callers:
 *     ?GetEmbeddedShaderDatabase@ShaderRegistration@Engine@Spectre@@YA?AV?$shared_ptr@VShaderDatabase@Engine@Spectre@@@std@@W4EShaderPlatform@23@@Z @ 0x18007C14C (-GetEmbeddedShaderDatabase@ShaderRegistration@Engine@Spectre@@YA-AV-$shared_ptr@VShaderDatabase@.c)
 *     ?RegisterShaderProgram@ShaderRegistration@Engine@Spectre@@YA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@123@@Z @ 0x18007C35C (-RegisterShaderProgram@ShaderRegistration@Engine@Spectre@@YA_NV-$basic_string@DU-$char_traits@D@.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::_Tree_std::_Tmap_traits_enum_Spectre::Engine::EShaderPlatform_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase__std::less_enum_Spectre::Engine::EShaderPlatform__std::allocator_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase______0___::_Emplace_enum_Spectre::Engine::EShaderPlatform_&_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase___ @ 0x18007BC50 (std--_Tree_std--_Tmap_traits_enum_Spectre--Engine--EShaderPlatform_std--shared_ptr_Spectre--Engi.c)
 *     std::make_shared_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_enum_Spectre::Engine::EShaderPlatform_&_ @ 0x18007BEBC (std--make_shared_Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatab.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetOrCreate(
        _QWORD *a1,
        int a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a2;
  if ( dword_1801D8A30 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D8A30);
    if ( dword_1801D8A30 == -1 )
    {
      v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
      *v3 = v3;
      v3[1] = v3;
      v3[2] = v3;
      *((_WORD *)v3 + 12) = 257;
      qword_1801D8A38 = (__int64)v3;
      atexit(`Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase::GetOrCreate'::`2'::`dynamic atexit destructor for 'DBs'');
      Init_thread_footer(&dword_1801D8A30);
    }
  }
  v4 = std::make_shared_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_enum_Spectre::Engine::EShaderPlatform___(
         &v10,
         (unsigned int *)&v12);
  std::_Tree_std::_Tmap_traits_enum_Spectre::Engine::EShaderPlatform_std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase__std::less_enum_Spectre::Engine::EShaderPlatform__std::allocator_std::pair_enum_Spectre::Engine::EShaderPlatform_const__std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase______0___::_Emplace_enum_Spectre::Engine::EShaderPlatform___std::shared_ptr_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase___(
    v5,
    (__int64)&v9,
    &v12,
    v4);
  v6 = v9;
  *a1 = 0LL;
  a1[1] = 0LL;
  v7 = *(_QWORD *)(v6 + 48);
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *a1 = *(_QWORD *)(v6 + 40);
  a1[1] = *(_QWORD *)(v6 + 48);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return a1;
}
