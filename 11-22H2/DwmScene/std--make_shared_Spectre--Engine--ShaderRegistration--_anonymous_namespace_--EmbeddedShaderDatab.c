/*
 * XREFs of std::make_shared_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_enum_Spectre::Engine::EShaderPlatform_&_ @ 0x18007BEBC
 * Callers:
 *     Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetOrCreate @ 0x18007C198 (Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatabase--GetOrCreate.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18007BF58 (--0-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UProgramRegistration@Shad.c)
 *     ??0ShaderDatabase@Engine@Spectre@@IEAA@W4EShaderPlatform@12@@Z @ 0x18009827C (--0ShaderDatabase@Engine@Spectre@@IEAA@W4EShaderPlatform@12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_enum_Spectre::Engine::EShaderPlatform___(
        _QWORD *a1,
        unsigned int *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // rcx

  v4 = operator new(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = std::_Ref_count_obj2<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
    Spectre::Engine::ShaderDatabase::ShaderDatabase(v4 + 4, *a2);
    *v6 = &Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase::`vftable';
    std::map<std::string,Spectre::Engine::ShaderRegistration::ProgramRegistration>::map<std::string,Spectre::Engine::ShaderRegistration::ProgramRegistration>(v6 + 2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  return a1;
}
