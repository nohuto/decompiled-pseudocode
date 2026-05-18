/*
 * XREFs of sub_180055A20 @ 0x180055A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

_QWORD *__fastcall sub_180055A20(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::GeometryShader>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}
