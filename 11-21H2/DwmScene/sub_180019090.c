/*
 * XREFs of sub_180019090 @ 0x180019090
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

_QWORD *__fastcall sub_180019090(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<RenderOutputDwm>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}
