/*
 * XREFs of sub_180088010 @ 0x180088010
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

_QWORD *__fastcall sub_180088010(_QWORD *a1, char a2)
{
  *a1 = std::_Ref_count_obj2<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}
