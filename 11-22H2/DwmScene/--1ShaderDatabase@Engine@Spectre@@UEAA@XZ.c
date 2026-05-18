/*
 * XREFs of ??1ShaderDatabase@Engine@Spectre@@UEAA@XZ @ 0x180098294
 * Callers:
 *     Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::_EmbeddedShaderDatabase @ 0x18007C080 (Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatabase--_EmbeddedSha.c)
 *     ??_EShaderDatabase@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800982B0 (--_EShaderDatabase@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     _std::make_shared_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_enum_Spectre::Engine::EShaderPlatform_&__::_1_::dtor$2 @ 0x1800E9B68 (_std--make_shared_Spectre--Engine--ShaderRegistration--_anonymous_namespace_--Embed_ea_1800E9B68.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShaderDatabase::~ShaderDatabase(Spectre::Engine::ShaderDatabase *this)
{
  *(_QWORD *)this = &Spectre::Engine::ShaderDatabase::`vftable';
}
