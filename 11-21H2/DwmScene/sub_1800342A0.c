/*
 * XREFs of sub_1800342A0 @ 0x1800342A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

_QWORD *__fastcall sub_1800342A0(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Utils::JsonConfigurationManager>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}
