/*
 * XREFs of sub_180017F50 @ 0x180017F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

_QWORD *__fastcall sub_180017F50(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::Sampler>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B988(a1);
  return a1;
}
