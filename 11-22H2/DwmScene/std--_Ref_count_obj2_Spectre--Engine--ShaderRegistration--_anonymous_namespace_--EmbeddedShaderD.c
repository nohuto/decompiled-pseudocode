/*
 * XREFs of std::_Ref_count_obj2_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_::_scalar_deleting_destructor_ @ 0x18007C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2_Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = std::_Ref_count_obj2<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
