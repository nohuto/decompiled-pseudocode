/*
 * XREFs of Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::_scalar_deleting_destructor_ @ 0x18007C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::_EmbeddedShaderDatabase @ 0x18007C080 (Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatabase--_EmbeddedSha.c)
 */

void **__fastcall Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::_scalar_deleting_destructor_(
        void **a1,
        char a2)
{
  Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::_EmbeddedShaderDatabase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
