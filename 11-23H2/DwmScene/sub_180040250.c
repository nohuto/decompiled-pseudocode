/*
 * XREFs of sub_180040250 @ 0x180040250
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

_QWORD *__fastcall sub_180040250(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::SceneLayer>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B988(a1);
  return a1;
}
