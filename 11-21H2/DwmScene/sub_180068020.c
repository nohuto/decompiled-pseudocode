/*
 * XREFs of sub_180068020 @ 0x180068020
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

_QWORD *__fastcall sub_180068020(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::Material>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}
