/*
 * XREFs of ??0ShaderDatabase@Engine@Spectre@@IEAA@W4EShaderPlatform@12@@Z @ 0x18009827C
 * Callers:
 *     std::make_shared_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_enum_Spectre::Engine::EShaderPlatform_&_ @ 0x18007BEBC (std--make_shared_Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatab.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderDatabase::ShaderDatabase(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return a1;
}
